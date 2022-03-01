#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if (b<a+c && a<b+c &&c<a+b)
    {
        double p=(a+b+c)/2;
        cout<<setprecision(2)<<fixed<<sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else
    {
        cout<<"invalid";
    }
    return 0;


}
