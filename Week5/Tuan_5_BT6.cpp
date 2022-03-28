#include  <iostream>
using namespace std;
struct Complex {
    int real;
    int imag;
    Complex ()
    {
        real=0;
        imag=0;
    }
    void display()
    {
        if (real==0&&imag==0)
        {
            cout<<"0"<<endl;
        }
        else if (real==0)
        {
            cout<<imag<<"i"<<endl;
        }
        else if (imag==0)
        {
            cout<<real<<endl;
        }
        else if (imag==1)
        {
            cout<<real<<"+i"<<endl;
        }
        else if (imag==-1)
        {
            cout<<real<<"-i"<<endl;
        }
        else if (imag>0)
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        else if (imag<0)
        {
            cout<<real<<"-"<<imag<<"i"<<endl;
        }
    }
};
Complex add(Complex a,Complex b)
{
    Complex x;
    x.real=a.real+b.real;
    x.imag=a.imag+b.imag;
    return x;
}
Complex subtract(Complex a,Complex b)
{
    Complex x;
    x.real=a.real-b.real;
    x.imag=a.imag-b.imag;
    return x;
}
Complex multiply(Complex a,Complex b)
{
    Complex x;
    x.real=a.real*b.real-a.imag*b.imag;
    x.imag=a.imag*b.real+a.real*b.imag;
    return x;
}
int main()
{
    Complex x1,x2;
    cin>>x1.real>>x1.imag>>x2.real>>x2.imag;
    Complex x3=add(x1,x2);
    x3.display();
    Complex x4=subtract(x1,x2);
    x4.display();
    Complex x5=multiply(x1,x2);
    x5.display();
}
