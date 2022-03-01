#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int cnt=0;
    if (n==0)
    {
        cout<<1;
        return 0;
    }
    while(n!=0)
    {
        n/=10;
        cnt++;
    }
    cout<<cnt;
}
