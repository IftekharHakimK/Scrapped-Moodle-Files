#include <iostream>
using namespace std;

class Complex
{
    int real,imag;
public:
    Complex(int r, int i){real=r;imag=i;}
    Complex(){}
    int getReal(){return real;}
    int getImag(){return imag;}
    Complex operator+(Complex obj);
    Complex operator+(int a);
	///Implement * operator by yourself
	
    void print(){cout<<"Real: "<<real<<" Imaginary: "<<imag<<endl;}
};

Complex Complex::operator+(Complex obj)
{
    Complex temp;
    temp.real=this->real+obj.real;
    temp.imag=this->imag+obj.imag;
    return temp;
}
Complex Complex::operator+(int a)
{
    Complex temp;
    temp.real=this->real+a;
    temp.imag=this->imag+a;
    return temp;
}

int main()
{
    Complex c1(3,4);
    Complex c2(-1,-2);
    Complex c3;
    c3=c1+c2;
    c3.print();
    Complex c4;
    c4=c3+5;
    c4.print();
}
