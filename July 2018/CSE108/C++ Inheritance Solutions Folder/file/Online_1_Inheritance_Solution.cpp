#include<iostream>
#include<cstring>
using namespace std;

#define FACULTY_MONTHLY_SALARY 50000
#define STAFF_MONTHLY_HOURS_WORKED 160

class Employee
{
    string name;
    int id;
    char gender;
public:
    Employee(){}
    Employee(string n, int i, char g)
    {
        name=n;
        id=i;
        gender=g;
    }
    virtual void printEmployee()
    {
        cout<<"Employee Number: "<<id<<endl<<"Employee Name: "<<name<<endl<<"Employee Gender: "<<gender<<endl;
    }
    virtual int getMonthlyEarling()=0;
};

class Staff: public Employee
{
    int hourRate;
public:
    Staff(string name, int id, char gender, int h): Employee(name, id, gender)
    {
        hourRate=h;
    }
    int getMonthlyEarling()
    {
        return hourRate*160;
    }
    void printEmployee()
    {
        Employee::printEmployee();
        cout<<"Full Time"<<endl<<"Monthly Salary: "<<getMonthlyEarling()<<endl<<endl;
    }
    int getHourRate(){return hourRate;}
};

class PartTime:public Staff
{
    int hourPerWeek;
public:
    PartTime(string name, int id, char gender, int h, int hp): Staff(name, id, gender, h)
    {
        hourPerWeek=hp;
    }
    int getMonthlyEarling()
    {
        return hourPerWeek*getHourRate();
    }
    void printEmployee()
    {
        Employee::printEmployee();
        cout<<"Part Time"<<endl<<"Monthly Salary: "<<getMonthlyEarling()<<endl<<endl;
    }
};

class Faculty: public Employee
{
    string level;
public:
    Faculty(string name, int id, char gender, string l): Employee(name, id, gender)
    {
        level=l;
    }
    int getMonthlyEarling()
    {
        if (level=="AP") return FACULTY_MONTHLY_SALARY;
        else if(level=="AO") return FACULTY_MONTHLY_SALARY*1.2;
        else if (level=="P") return FACULTY_MONTHLY_SALARY*1.4;
        else return 0;
    }
    void printEmployee()
    {
        Employee::printEmployee();
        cout<<"Level: "<<level<<endl<<"Monthly Salary: "<<getMonthlyEarling()<<endl<<endl;
    }
};
int main()
{
    Employee *emp[10];
    emp[0] = new Staff("Karim",1,'M',200);
    emp[1] = new Staff("Rahim",2,'M',230);
    emp[2] = new Staff("Tarasha",3,'F',220);
    emp[3] = new Staff("Faria",4,'F',240);
    emp[4] = new PartTime("Ajmal",5,'M',200,150);
    emp[5] = new PartTime("Moyna",6,'F',200,160);
    emp[6] = new Faculty("Mr. X",7,'M',"AP");
    emp[7] = new Faculty("Ms. Y",8,'F',"AO");
    emp[8] = new Faculty("Mr. Z",9,'M',"P");
    emp[9] = new Faculty("Ms. W",10,'F',"P");

    int total_sal_staff=0;
    int total_sal_faculty=0;
    int total_sal_PartTime=0;
    int total_sal=0;


    for(int i=0;i<10;i++)
    {
        emp[i]->printEmployee();
        total_sal+=emp[i]->getMonthlyEarling();
        Staff *sp = dynamic_cast<Staff*>(emp[i]);
        if(sp != NULL)
        {
            total_sal_staff+=sp->getMonthlyEarling();
        }
        Faculty *fp = dynamic_cast<Faculty*>(emp[i]);
        if(fp != NULL)
        {
            total_sal_faculty+=fp->getMonthlyEarling();
        }
        PartTime *pp = dynamic_cast<PartTime*>(emp[i]);
        if(pp != NULL)
        {
            total_sal_PartTime+=pp->getMonthlyEarling();
        }
    }
    cout<<"Total Salary of All: "<<total_sal<<endl;                     ///454400
    cout<<"Total Salary of Staffs: "<<total_sal_staff<<endl;            ///204400
    cout<<"Total Salary of Faculty: "<<total_sal_faculty<<endl;         ///250000
    cout<<"Total Salary of Part timers: "<<total_sal_PartTime<<endl;    ///62000
    return 0;
}
