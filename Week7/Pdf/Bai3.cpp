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
    int k;cin>>k;
    int x,y;cin>>x>>y;
    v.erase(v.begin()+k-1);
    v.erase(v.begin()+x-1,v.begin()+y);
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
