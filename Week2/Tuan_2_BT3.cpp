#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    int a=sqrt(l),b=sqrt(r);
    if (a*a!=l)
    {
        a++;
    }
    for (int i=a;i<=b;i++)
    {
        cout<<i*i<<" ";
    }
}
