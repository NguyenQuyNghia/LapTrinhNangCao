#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if (s.size()<6||s.size()>15||(s[0]>='0'&&s[0]<='9'))
    {
        cout<<"Invalid username.";
        return 0;
    }
    for (int i=0;i<s.size();i++)
    {
        if (!isalnum(s[i]))
        {
            cout<<"Invalid username.";
            return 0;
        }
    }
    cout<<"Valid username.";
}
