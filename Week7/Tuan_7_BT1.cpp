#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector <int> v;
    for (int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    while (d--)
    {
        int a=v[0];
        v.push_back(a);
        v.erase(v.begin());
    }
    for (int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
