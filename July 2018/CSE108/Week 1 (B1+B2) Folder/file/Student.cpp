#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    int roll;
    string name;
    float cg;
public:
    void setroll(int r)
    {
        roll=r;
    }
    void setname(string n)
    {
        name=n;
    }
    void setcg(float c)
    {
        cg=c;
    }

    int getroll()
    {
        return roll;
    }

    string getname()
    {
        return name;
    }

    float getcg()
    {
        return cg;
    }

};

int main()
{
    Student s1;
    s1.setroll(1);
    s1.setname("Karim");
    s1.setcg(3.96);

    Student s2;
    s2.setroll(2);
    s2.setname("Rahim");
    s2.setcg(3.86);

    cout<<"Student #1 : "<<endl;
    cout<<"Roll : "<<s1.getroll()<<endl;
    cout<<"Name : "<<s1.getname()<<endl;
    cout<<"CGPA : "<<s1.getcg()<<endl<<endl;

    cout<<"Student #2 : "<<endl;
    cout<<"Roll : "<<s2.getroll()<<endl;
    cout<<"Name : "<<s2.getname()<<endl;
    cout<<"CGPA : "<<s2.getcg()<<endl;

    return 0;
}
