#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    int t;cin>>t;
    while (t--)
    {
        int y;cin>>y;
        bool check=0;
        for (int i=0;i<n;i++)
        {
            if (v[i]==y)
            {
                cout<<"YES "<<i+1<<endl;
                check=1;
            }
        }
        if (!check)
        {
            auto it=lower_bound(v,v+n,y);
            cout<<"NO"<<*it<<endl;
        }
    }
}
