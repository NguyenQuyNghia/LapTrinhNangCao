#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double k;
    cin>>k;
    for (int i=0;i<n;i++)
    {
        if (a[i]<k)
        {
            cout<<setprecision(2)<<fixed<<a[i]<<" ";
        }
        else
        {
            break;
        }
    }
    cout<<setprecision(2)<<fixed<<k<<" ";
    for (int i=0;i<n;i++)
    {
        if (a[i]>k)
        {
            cout<<setprecision(2)<<fixed<<a[i]<<" ";
        }
    }
}
