#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int countStartSpaces=0;
    for (int i=0;i<1000;i++)
    {
        if (s[i]==' ')
        {
            countStartSpaces++;
        }
        else
        {
            break;
        }
    }
    //đếm dâu cách ở đầu xâu

    for (int i=1;i<=countStartSpaces;i++)
    {
        cout<<" ";
    }
    //in ra dấu cách đầu câu
    for (int i=countStartSpaces;i<s.size();i++)
    {
        if (s[i]!=' ')
        {
            cout<<s[i];
        }
        else
        {
            cout<<" ";
            while (s[i+1]==' ')
            {
                i++;
            }
        }
    }
}
