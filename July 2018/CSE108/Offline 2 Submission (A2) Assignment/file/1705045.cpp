#include<iostream>
#include<cstdlib>
using namespace std;
class stack
{
private:
    int i,*value;
public:
    stack(int need)
    {
        value=(int *)malloc(need*sizeof(int));
        i=0;
        cout<<"Constructor called with size"<<endl;
    }
    stack()
    {
        value=(int*)malloc(9*sizeof(int));
        i=0;
        cout<<"Constructor called without size"<<endl;
    }
    stack(const stack &p)
    {
        i=p.i;
        value=(int*)malloc((i+2)*sizeof(int));
        for(int s=0;s<p.i;s++)
        {
            value[s]=p.value[s];
        }
        cout<<"COPY CONSTRUCTOR CALLED"<<endl;
        return;
    }
    ~stack()
    {
        free(value);
        cout<<"Destructed"<<endl;
        return;
    }
    void push(int x)
    {
        //value=(int*)realloc(value,(i+2)*sizeof(int));
        resize();
        *(value+i)=x;
        i++;
    }
    void push(int x[],int n)
    {
        for(int p=0;p<n;p++)
        {
            push(x[p]);
        }
    }
    void push(stack s)
    {
        while(s.size())
        {
            push(s.pop());
        }
    }
    int pop()
    {
        if(i>=0){
        i--;
        resize();
        return value[i];
        }
        else
        {
            return -1;//means no element
        }
    }
    int top()
    {
        if(i>=0){
        //value=(int*)realloc(value,(i+2)*sizeof(int));
        return value[i-1];
        }
        else
        {
            return -1;//means no element
        }
    }
    int size()
    {
        return i;
    }
    void resize()
    {
       value=(int*)realloc(value,(i+2)*sizeof(int));
       return;
    }
    double similarity(stack s)
    {
        int c=0;
        double d=(s.size()+i)*1.0/2;
        for(int p=i-1;p>=0&&s.size()!=0;p--)
        {
            if(value[p]==s.pop())
            {
                c++;
            }
        }
        return c/d;
    }

};
main()
{
    int i,j,k,p,tsize=0;
    stack stk;
    stack *tempstack;
    while(1)
    {
        cout<<"1:Push an element"<<endl;
        cout<<"2:Push an array"<<endl;
        cout<<"3:Push a stack"<<endl;
        cout<<"4:Pop"<<endl;
        cout<<"5:Top"<<endl;
        cout<<"6:Size"<<endl;
        cout<<"7:Similarity"<<endl;
        cout<<"8:Exit"<<endl;
        cin>>k;
        if(k==1)
        {
            cin>>p;
            stk.push(p);
        }
        if(k==2)
        {
            int n;
            cout<<"Enter array size"<<endl;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            stk.push(a,n);
        }
        if(k==3)
        {
            tempstack=new stack;
            cout<<"Enter stack size"<<endl;
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                cin>>p;
                tempstack[0].push(p);
            }
            stk.push(tempstack[0]);
            delete tempstack;
        }
        if(k==4)
        {
            if(stk.size()==0)
            {
                cout<<"No element"<<endl;
            }
            else
            {
                cout<<stk.pop()<<endl;
            }
        }
        if(k==5)
        {
            if(stk.size()==0)
            {
                cout<<"No element"<<endl;
            }
            else
            {
                cout<<stk.top()<<endl;
            }
        }
        if(k==6)
        {
            cout<<"Current size is "<<stk.size()<<endl;
        }
        if(k==7)
        {
            tempstack=new stack;
            cout<<"Enter stack size"<<endl;
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                cin>>p;
                tempstack[0].push(p);
            }
            cout<<"Score is "<<stk.similarity(tempstack[0])<<endl;
            delete tempstack;
        }
        if(k==8)
        {
            while(stk.size())
            {
                cout<<stk.pop()<<' '<<endl;
            }
            return 0;
        }

    }

}
