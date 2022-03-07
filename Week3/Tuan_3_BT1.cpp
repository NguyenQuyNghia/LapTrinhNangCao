#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    for (int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]!=b[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
