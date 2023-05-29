#include<iostream>
#include<string.h>
using namespace std;
class unit
{
private:
    char x[15];
    int range,health,Damage,Cost,Step,rc,pos;
    char name[20],shoot_type[30],movement[20];
public:
    unit(char n[],int a,int b,int c,int d,int e,int f,char s[],char m[])
    {
        strcpy(name,n);
        range=a;
        health=b;
        Damage=c;
        Cost=d;
        Step=e;
        rc=f;
        pos=0;
        strcpy(shoot_type,s);
        strcpy(movement,m);
    }
    bool alive()
    {
        return health>0;
    }
    void motion()
    {
        if(Step!=0)
        {
            cout<<name<<" is "<<movement<<'.'<<endl;
        }
        pos=min(100,Step+pos);
        cout<<name<<"'s position is "<<pos<<'.'<<endl;
        return;
    }
    bool inrange()
    {
        return 100-pos<=range;
    }
    void hit(int p)
    {

        health-=p;
    }
    int power()
    {
        return Damage;
    }
    int need()
    {
        return Cost;
    }
    int back()
    {
        return rc;
    }
    void showShoot()
    {
        cout<<name<<" is "<<shoot_type<<'.'<<endl;
    }
    void showhealth()
    {
        cout<<name<<"'s health: "<<health<<'.'<<endl;
    }
    void showdying()
    {
        cout<<name<<" gave "<<rc<<" coin while dying."<<endl;
    }


};
class Bowman:public unit
{
public:
    Bowman():unit("Bowman",110,60,10,100,0,40,"Shooting Basic Arrow","")
    {
        ;
    }

};
class AdvancedBowman:public unit
{
public:
    AdvancedBowman():unit("Advanced Bowman",130,85,15,200,0,60,"Firing Canon","")
    {
        ;
    }
};
class Archer:public unit
{
public:
    Archer():unit("Archer",50,100,25,150,25,0,"Shooting Advanced Arrow","Running")
    {
        ;
    }
};
class AdvancedArcher:public unit
{
public:
    AdvancedArcher():unit("Advanced Archer",50,120,50,600,30,0,"Shooting Improved arrow","Riding Horse")
    {
        ;
    }
};
class ET:public unit
{
public:
    ET():unit("Enemy Tower",200,300,40,0,0,0,"Firing Arrow","")
    {
        ;
    }
};
main()
{
    unit *w;
    unit *b;
    b=new ET;
    int round=1;
    int choice,coin=1600;
    while(1)
    {
        cout<<"Coin Remaining: "<<coin<<endl; //1600
        cout<<"Choose your option:"<<endl;
        cout<<"1. Archer (Cost 150)"<<endl;
        cout<<"2. Advanced Archer (Cost 600)"<<endl;
        cout<<"3. Bowman (Cost 100)"<<endl;
        cout<<"4. Advanced Bowman (Cost 200)"<<endl;

        cin>>choice;
        switch(choice)
        {
        case 1:
            w =  new Archer;
            break;
        case 2:
            w = new AdvancedArcher;
            break;
        case 3:
            w =  new Bowman;
            break;
        default :
            w = new AdvancedBowman;
            break;
        }
        if(w->need()>coin)
        {
            coin-=w->need();
            cout<<"You have not enough coin to deploy this.Your coin is "<<coin<<".You lose."<<endl;
            return 0;
        }
        coin-=w->need();

        ///You have to complete all the functionalities of the user using the base class pointer w.
        ///That means you have to call the derived class functions using only this.


        while(w->alive())
        {
            cout<<"Round: "<<round<<endl<<endl;
            round++;
            cout<<"Turn 1:"<<endl;
            w->motion();
            // cout<<w->state()<<endl;
            if(w->inrange())
            {
                b->hit(w->power());
                w->showShoot();
                b->showhealth();
            }
            cout<<endl;
            if(!b->alive())
            {
                cout<<"You won";
                return 0;
            }
            cout<<"Turn 2:"<<endl;
            w->hit(b->power());
            b->showShoot();
            w->showhealth();
        }
        cout<<"Round: "<<round<<endl<<endl;
        cout<<"Turn 1:"<<endl;
        cout<<"Unit Died"<<endl;
        if(w->back()!=0)
        {
            coin+=w->back();
            w->showdying();
        }
        if(coin<100)
        {
            cout<<"You lost.You have not enough coin to deploy any unit"<<endl;
            return 0;
        }

    }
}


