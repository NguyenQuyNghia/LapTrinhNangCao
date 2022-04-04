#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int q;cin>>q;
    vector<int> v;
    while (q--)
    {
        int choice,x;
        cin>>choice>>x;
        if (choice==1)
        {
            v.push_back(x);
        }
        else if (choice==2)
        {
            if (v.find(x)!=v.end())
            {
                v.erase(v.find(x));
            }
        }
        else
        {
            if (v.find(x)!=v.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
