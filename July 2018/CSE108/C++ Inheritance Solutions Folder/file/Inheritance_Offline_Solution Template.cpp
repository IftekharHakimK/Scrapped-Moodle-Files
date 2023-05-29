#include<iostream>
#include<cstring>
using namespace std;

class Unit
{
    string name;
    int range;
    int health;
    int damage;
    int position;
    int cost;
    string arrowType;

public:
    int getRange(){return range;}
    int getHealth(){return health;}
    int getDamage(){return damage;}
    int getPosition(){return position;}
    int getCost(){return cost;}
    string getName(){return name;}
    string getArrowtype(){return arrowType;}

    void setRange(int r){range=r;}
    void setHealth(int h){health=h;}
    void setDamage(int d){damage=d;}
    void setPosition(int p){position=p;}
    void setCost(int c){cost=c;}
    void setName(string s){name=s;}
    void setArrowtype(string a){arrowType=a;}

    void printPosition()
    {
        cout<<"Positioned at "<<position<<". ";
    }

    void shoot()
    {
        cout<<getName()<<" is shooting "<<arrowType<<".";
    }
    virtual void moving(){}
    virtual getReturnCoin(){return 0;}
};

class MovingUnit: public Unit
{
protected:
    int stepsize;
public:
    virtual void moving()=0;
    int getStepsize(){return stepsize;}
    void setStepsize(int s){stepsize=s;}

};

class Archer : public MovingUnit
{
public:
    Archer(int x)
    {
        setRange(50);
        setHealth(100);
        setDamage(25);
        setPosition(x);
        setCost(150);
        setName("Archer");
        setArrowtype("Advanced Arrow");
        setStepsize(25);
    }
    void moving()
    {
        setPosition(getPosition()+stepsize);
        cout<<"Running. ";
    }
};

class AdvancedArcher : public MovingUnit
{
public:
    AdvancedArcher(int x)
    {
        setRange(50);
        setHealth(120);
        setDamage(50);
        setPosition(x);
        setCost(600);
        setName("Advanced Archer");
        setArrowtype("Improved Arrow");
        setStepsize(30);
    }
    void moving()
    {
        setPosition(getPosition()+stepsize);
        cout<<"Riding Horse. ";
    }
};


class StationaryUnit: public Unit
{
protected:
    int returnCoin;
public:
    int getReturnCoin()
    {
        cout<<getName()<<" gave "<<returnCoin<<" coins while dying."<<endl;
        return returnCoin;
    }
    void setReturnCoin(int f){returnCoin=f;}
    void moving(){cout<<"Stationary";}
};

class Bowman: public StationaryUnit
{
public:
    Bowman(int x)
    {
        setRange(150);
        setHealth(60);
        setDamage(10);
        setCost(100);
        setPosition(x);
        setName("Bowman");
        setArrowtype("Basic Arrow");
        setReturnCoin(40);
    }
};
class AdvancedBowman: public StationaryUnit
{
public:
    AdvancedBowman(int x)
    {
        setRange(150);
        setHealth(85);
        setDamage(15);
        setCost(200);
        setPosition(x);
        setName("Advanced Bowman");
        setArrowtype("Canon");
        setReturnCoin(60);
    }
};


class EnemyTower: public Unit
{
public:
    EnemyTower(int x)
    {
        setRange(150);
        setHealth(300);
        setDamage(40);
        setCost(1000);
        setPosition(x);
        setName("EnemyTower");
        setArrowtype("Fire Arrow");
    }
};
