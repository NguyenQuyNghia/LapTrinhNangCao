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
    for (int k = 0; k < n/2; k++)
    {
        if ( a[k] != a[n-1-k] )
        {
            cout<<"Asymmetric array.";
            return 0;
        }
    }
    cout<<"Symmetric array.";
}
