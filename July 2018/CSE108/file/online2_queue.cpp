# include <iostream>
using namespace std;

class Stack{
    int tos, size;
    int *stck;
public:
    Stack(){
        tos = 0;
        size = 10;
        stck = new int [size];
    }
    Stack (const Stack &s){
        tos = s.tos;
        size = s.size;
        stck = new int [size];
        for (int i=0; i<tos; i++){
            stck[i] = s.stck[i];
        }
    }
    ~Stack(){
        delete[] stck;
    }
    void push(int num){
        stck[tos++] = num;
    }
    void push(Stack s){
        while(s.getSize()>0){
            push(s.pop());
        }
    }
    int pop(){
        return stck[--tos];
    }
    int getSize(){
        return tos;
    }
    void reset(){
        tos = 0;
    }
};

class Queue{
    Stack s1, s2;
public:
    Queue(){
        // nothing to do here
    }

    int getSize(){
        return s1.getSize() + s2.getSize();
    }

    void enqueue(int num){
        s1.push(num);
    }

    void enqueue(Stack s){
        while(s.getSize()>0){
            enqueue(s.pop());
        }
    }

    int dequeue(){
        if (s2.getSize()!=0) return s2.pop();
        if (s1.getSize()==0) return -99999999;
        s2.push(s1);
        // if you have written a copy constructor, pop all elements of s1
        // or you can simply do tos = 0, which makes those elements inaccessible
        s1.reset();
        return s2.pop();
    }

    Stack convert(){
        Queue temp;
        Stack s;
        while(getSize()>0){
            int val = dequeue();
            s.push(val);
            temp.enqueue(val);
        }
        while(temp.getSize()>0){
            enqueue(temp.dequeue());
        }
        return s;
    }


    ~Queue(){
        // nothing to do here
    }
};

int main(){
    Queue q, q2;
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Dequeue from q: " << q.dequeue() << endl;
    cout << "Dequeue from q: " << q.dequeue() << endl;
    q.enqueue(4);
    q.enqueue(5);

    q2.enqueue(s);

    s = q.convert();

    cout << endl << "Size of q = " << q.getSize() << endl;
    while(q.getSize() > 0) cout << q.dequeue() << endl;


    cout << endl << "Size of converted stack = " << s.getSize() << endl;
    while(s.getSize() > 0) cout << s.pop() << endl;


    cout << endl << "Size of q2 = " << q2.getSize() << endl;
    while(q2.getSize() > 0) cout << q2.dequeue() << endl;

    return 0;
}
