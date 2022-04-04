#include <iostream>
#include <map>
using namespace std;
int main()
{
    int q;cin>>q;
    map<string,int> mp;
    while (q--)
    {
        int choice; cin>>choice;
        string x; cin>>x;
        if (choice==1)
        {
            int y; cin>>y;
            mp[x]+=y;
        }
        else if (choice==2)
        {
            mp[x]=0;
        }
        else
        {
            cout<<mp[x]<<endl;
        }
    }
}
