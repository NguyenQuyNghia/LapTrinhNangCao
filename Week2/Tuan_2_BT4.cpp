#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for (int i=1;i<=a;i++)
    {
        if ((2*i+4*(a-i))==b)
        {
            cout<<"chicken = "<<i<<", dog = "<<a-i;
            return 0;
        }
    }
    cout<<"invalid";
    return 0;
}
