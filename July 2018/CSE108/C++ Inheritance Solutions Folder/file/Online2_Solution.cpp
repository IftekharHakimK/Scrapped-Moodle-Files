#include<iostream>
#include<cstring>
using namespace std;

class TaxPayer
{
    string name;
    int id;
protected:
    int income;
public:
    TaxPayer(string n, int i, int in)
    {
        name=n;
        id=i;
        income=in;
    }
    virtual void printTaxPayer()
    {
        cout<<"Tax Payer Number: "<<id<<endl<<"Tax Payer Name: "<<name<<endl<<"Tax Payer Income: "<<income<<endl;
    }
    int calculateTax(int taxableIncome)
    {
        if(taxableIncome<=25000) return 0;
        else if(taxableIncome>25000 && taxableIncome<100000) return (taxableIncome-25000)*0.1;
        else return 7500+(taxableIncome-100000)*0.2;
    }
    void printTax(int taxableIncome)
    {
        cout<<"Taxable Income: "<<taxableIncome<<endl;
        cout<<"Tax Payable: "<<calculateTax(taxableIncome)<<endl<<endl;
    }
    virtual int calculateTaxableIncome()=0;
};

class SalariedTaxPayer:public TaxPayer
{
protected:
    string type;
public:
    SalariedTaxPayer(string name, int id, int in, string t): TaxPayer(name, id, in)
    {
        type=t;
    }
    int calculateTaxableIncome()
    {
        if(type=="Govt1") return 0.9*income;
        else if(type=="Govt2") return 0.8*income;
        else if(type=="Govt3") return 0.75*income;
        else return 0;
    }
    void printTaxPayer()
    {
        TaxPayer::printTaxPayer();
        cout<<"Type: "<<type<<endl<<"Exempted : "<<income-calculateTaxableIncome()<<endl;
    }
};

class NonSalariedTaxPayer:public TaxPayer
{
    int expense;
public:
    NonSalariedTaxPayer(string name, int id, int in, int e): TaxPayer(name, id, in)
    {
        expense=e;
    }
    int calculateTaxableIncome()
    {
        return income-expense;
    }
    void printTaxPayer()
    {
        TaxPayer::printTaxPayer();
        cout<<"Expense: "<<expense<<endl;
    }
};

class InvestorTaxPayer:public SalariedTaxPayer
{
    int invest;
public:
    InvestorTaxPayer(string name, int id, int in, string t, int i): SalariedTaxPayer(name, id, in, t)
    {
        invest=i;
    }
    int calculateTaxableIncome()
    {
        return SalariedTaxPayer::calculateTaxableIncome()-invest*0.5;
    }
    void printTaxPayer()
    {
        SalariedTaxPayer::printTaxPayer();
        cout<<"Invested: "<<invest<<endl;
    }
};

int main()
{
    TaxPayer *tp[10];
    tp[0] = new SalariedTaxPayer("Hasmot",1,50000,"Govt2");
    tp[1] = new SalariedTaxPayer("Keramot",2,40000,"Govt3");
    tp[2] = new SalariedTaxPayer("Padma",3,80000,"Govt1");
    tp[3] = new SalariedTaxPayer("Meghna",4,120000,"Govt1");
    tp[4] = new NonSalariedTaxPayer("Kashem",5,30000,5000);
    tp[5] = new NonSalariedTaxPayer("Bokor",6,60000,15000);
    tp[6] = new InvestorTaxPayer("Faria",7,140000,"Govt1",20000);
    tp[7] = new InvestorTaxPayer("Karim",8,130000,"Govt2",10000);
    tp[8] = new InvestorTaxPayer("Rahim",9,100000,"Govt3",10000);

    int total_tax=0;
    int total_tax_Salaried=0;
    int total_tax_NonSalaried=0;
    int total_tax_Investor=0;

    for(int i=0;i<9;i++)
    {
        tp[i]->printTaxPayer();
        tp[i]->printTax(tp[i]->calculateTaxableIncome());
        total_tax+=tp[i]->calculateTax(tp[i]->calculateTaxableIncome());
        SalariedTaxPayer *sp = dynamic_cast<SalariedTaxPayer*>(tp[i]);
        if(sp!=NULL)
        {
            total_tax_Salaried+=tp[i]->calculateTax(tp[i]->calculateTaxableIncome());
        }
        NonSalariedTaxPayer *np = dynamic_cast<NonSalariedTaxPayer*>(tp[i]);
        if(np!=NULL)
        {
            total_tax_NonSalaried+=tp[i]->calculateTax(tp[i]->calculateTaxableIncome());
        }
        InvestorTaxPayer *ip = dynamic_cast<InvestorTaxPayer*>(tp[i]);
        if(ip!=NULL)
        {
            total_tax_Investor+=tp[i]->calculateTax(tp[i]->calculateTaxableIncome());
        }
    }
    cout<<"Total Tax: "<<total_tax<<endl;
    cout<<"Total Tax(Salaried): "<<total_tax_Salaried<<endl;
    cout<<"Total Tax(Non Salaried): "<<total_tax_NonSalaried<<endl;
    cout<<"Total Tax(Investor): "<<total_tax_Investor<<endl;
}
