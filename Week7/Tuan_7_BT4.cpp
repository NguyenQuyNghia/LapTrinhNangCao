#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++)
    {
        cout<<s[i];
        if (i==s.size())
        {
            break;
        }
        else if(s[i]==s[i+1])
        {
            cout<<"*";
        }
    }
}
