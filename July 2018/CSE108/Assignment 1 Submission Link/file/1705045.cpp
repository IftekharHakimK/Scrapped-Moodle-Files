#include <iostream>
#include<stdlib.h>
#include <cmath>
#include <sstream>
#include<stdio.h>


using namespace std;


#define GRIDSIZE 4
#define UP      0
#define DOWN    2
#define LEFT    3
#define RIGHT   1
#define MAX_SHOTS 3



string to_string(int x)
{
    std::string out_string;
    std::stringstream ss;
    ss << x;
    return ss.str();
}



class Position
{

    int x, y;

public:

    Position (int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    Position()
    {
        x=rand()%4;
        y=rand()%4;
    }
    void moveRight()
    {
        if(x+1<=3)
            x++;
    }

    void moveLeft()
    {
        if(x-1>=0)
            x--;
    }

    void moveUp()
    {
        if(y+1<=3)
            y++;
    }

    void moveDown()
    {
        if(y-1>=0)
            y--;
    }

    bool isAdjacent(Position p)
    {
        int a=p.getX()-x;
        if(a<0)
        {
            a=-a;
        }
        int b=p.getY()-y;
        if(b<0)
        {
            b=-b;
        }
        if(a+b==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    bool isSamePoint(Position p)
    {
        if(p.getX()==x&&p.getY()==y)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

};


class Wumpus
{

    bool killed;
    Position p;

public:

    Wumpus(int x, int y)
    {
        p = Position(x, y);
        killed = false;
    }

    Wumpus()
    {
        killed=false;
    }

    void kill()
    {
        killed = true;
    }

    Position getPosition()
    {
        return p;
    }
    bool killedornot()
    {
        return killed;
    }

};
class Pit
{

    Position p;
public:

    Pit(int x, int y)
    {
        p = Position(x, y);
    }

    Pit()
    {
        //Automatically (0..3) inclusive
    }

    Position getPosition()
    {
        return p;
    }
};


class Player
{

    int direction;
    int total_shots;
    bool killed;
    Position p;

public:


    Player()
    {
        direction=UP;
        total_shots=3;

        killed=false;
        p=Position(0,0);
    }
    void turnLeft()
    {
        direction--;
        if(direction==-1)
        {
            direction=3;
        }
    }

    void turnRight()
    {
        direction++;
        if(direction==4)
        {
            direction=0;
        }
    }

    void moveForward()
    {
        switch(direction)
        {
        case 0:
            p.moveUp();
            break;
        case 1:
            p.moveRight();
            break;
        case 2:
            p.moveDown();
            break;
        case 3:
            p.moveLeft();
        }
    }

    bool isAdjacent(Position pos)
    {
        return p.isAdjacent(pos);
    }

    bool isSamePoint(Position pos)
    {
        return p.isSamePoint(pos);
    }

    void kill()
    {
        killed = true;
    }

    string getPositionInfo()
    {
        return "Player is now at " + to_string(p.getX()) + ", " + to_string(p.getY());
    }

    string getDirectionInfo()
    {
        string s;
        if (direction == UP) s = "up";
        if (direction == DOWN) s = "down";
        if (direction == LEFT) s = "left";
        if (direction == RIGHT) s = "right";
        return "Player is moving at direction: " + s;
    }
    int getXofplayer()
    {
        return p.getX();
    }
    int getYofplayer()
    {
        return p.getY();
    }
    int getdirectionofplayer()
    {
        return direction;
    }
    int getshots()
    {
        return total_shots;
    }
    void setshots(int s)
    {
        total_shots=s;
        return;
    }

};



class WumpusWorld
{

private:

    Player player;
    Wumpus wumpus;
    Pit pit;
    Position gold_position;
    bool ended;

public:

    WumpusWorld()
    {
        //cout<<"PPP";
        ended=false;
    }

    WumpusWorld(int wumpus_x, int wumpus_y)
    {
        wumpus=Wumpus(wumpus_x,wumpus_y);
        ended=false;
    }

    WumpusWorld(int wumpus_x, int wumpus_y, int gold_x, int gold_y)
    {
        wumpus=Wumpus(wumpus_x,wumpus_y);
        gold_position=Position(gold_x,gold_y);
        ended=false;
    }

    WumpusWorld(int wumpus_x, int wumpus_y, int gold_x, int gold_y, int pit_x, int pit_y)
    {
        //...
        //cout<<"qqq"<<endl;
        wumpus=Wumpus(wumpus_x,wumpus_y);
        gold_position=Position(gold_x,gold_y);
        pit=Pit(pit_x,pit_y);
        ended=false;
    }

    void moveForward()
    {
        player.moveForward();
        return showGameState();
    }

    void turnLeft()
    {
        player.turnLeft();
        return showGameState();
    }

    void turnRight()
    {
        player.turnRight();
        return showGameState();
    }

    void shoot()
    {
        Position arrows(player.getXofplayer(),player.getYofplayer());
        int direction=player.getdirectionofplayer(),c,d,flag=0,now=player.getshots();
        if(now==0)
        {
            cout<<"You have 0 arrows"<<endl;
        }
        else
        {
            now--;
            player.setshots(now);
            switch(direction)
            {
            case 0:
                c=0,d=1;
                break;
            case 1:
                c=1,d=0;
                break;
            case 2:
                c=0,d=-1;
                break;
            case 3:
                c=-1,d=0;
                break;
            }
            for(int i=1; i<=4; i++)
            {
                arrows=Position(arrows.getX()+c,arrows.getY()+d);
                if(arrows.isSamePoint(wumpus.getPosition())&&wumpus.killedornot()==false)
                {
                    cout<<"Wumpus is killed"<<endl;
                    flag=1;
                    wumpus.kill();
                    break;
                }
            }

            if(flag==0)
            {
                cout<<"Miss"<<endl;
            }
        }

    }

    void showGameState()
    {
        cout << player.getPositionInfo() << endl;
        cout << player.getDirectionInfo() << endl;

        if (player.isAdjacent(wumpus.getPosition()) &&wumpus.killedornot()==false)
        {
            cout << "stench!" << endl;
        }

        if (player.isSamePoint(wumpus.getPosition())&&wumpus.killedornot()==false)
        {
            cout << "Player is killed by Wumpus!" << endl;
            player.kill();
            cout << "Game over!" << endl;
            ended = true;
        }
        if (player.isAdjacent(pit.getPosition()))
        {
            cout << "Breeze!" << endl;
        }

        if (player.isSamePoint(pit.getPosition()))
        {
            cout << "Player is in Pit!" << endl;
            player.kill();
            cout << "Game over!" << endl;
            ended = true;
        }

        if (player.isSamePoint(gold_position))
        {
            cout << "Got the gold!" << endl;
            cout << "Game ended, you won!" << endl;
            ended = true;
        }
    }

    bool isOver()
    {
        return ended;
    }

};


int main()
{
    int c, wumpus_x, wumpus_y, gold_x, gold_y, pit_x, pit_y;
    FILE *fp;
    fp=fopen("input.txt","r");
    fscanf(fp,"%d",&wumpus_x);
    fscanf(fp,"%d",&wumpus_y);
    fscanf(fp,"%d",&gold_x);
    fscanf(fp,"%d",&gold_y);
    fscanf(fp,"%d",&pit_x);
    fscanf(fp,"%d",&pit_y);
    fclose(fp);
    //cout<<pit_x<<' '<<pit_y<<' '<<wumpus_x<<' '<<wumpus_y<<' '<<gold_x<<' '<<gold_y<<endl;


    WumpusWorld w(wumpus_x, wumpus_y, gold_x, gold_y, pit_x, pit_y);

    w.showGameState();
    while (!w.isOver())
    {
        cout << "1: move forward" << endl;
        cout << "2: Turn left" << endl;
        cout << "3: Turn right" << endl;
        cout << "4: Shoot" << endl;
        cin >> c;
        if (c == 1)
        {
            w.moveForward();
        }
        else if (c == 2)
        {
            w.turnLeft();
        }
        else if (c == 3)
        {
            w.turnRight();
        }
        else if (c == 4)
        {
            w.shoot();
        }
    }
    return 0;
}
