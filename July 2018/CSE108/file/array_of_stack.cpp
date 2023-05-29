# include <iostream>
using namespace std;
#define sizeOfStackArray 3

class Stack{
    int *stck;
    int tos;
    int maxSize;
public:
    Stack();
    Stack(int size);
    void push(int num);
    int pop();
    bool isEmpty();
    ~Stack();
};

Stack::Stack(){
    stck = new int[10];
    tos = 0;
    maxSize = 10;
}

Stack::Stack(int size){
    stck = new int[size];
    tos = 0;
    maxSize = size;
}

bool Stack::isEmpty(){
    return (!tos);
}

void Stack::push(int num){
    if (tos == maxSize) cout << "Stack is full" << endl;
    else stck[tos++] = num;
}

int Stack::pop(){
    int val = -1;
    if (tos == 0){
        cout << "Stack is empty" << endl;
    }
    else{
        val = stck[--tos];
    }
    return val;
}

Stack::~Stack(){
    delete[] stck;
}

int main(){
    Stack elementStacks[sizeOfStackArray];
    Stack resultantStack(sizeOfStackArray);
    elementStacks[0].push(5);
    elementStacks[1].push(3);
    elementStacks[1].push(7);
    elementStacks[2].push(6);
    elementStacks[2].push(4);
    elementStacks[2].push(2);
    for (int i=0; i<sizeOfStackArray; i++){
        int sum = 0;
        while(!elementStacks[i].isEmpty()){
            sum += elementStacks[i].pop();
        }
        resultantStack.push(sum);
    }

    while(!resultantStack.isEmpty()){
        cout << resultantStack.pop() << " ";
    }
    cout << endl;
    return 0;
}
