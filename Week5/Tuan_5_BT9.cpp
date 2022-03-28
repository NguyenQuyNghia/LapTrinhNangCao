#include <iostream>
using namespace std;
struct Employee {
    string name;
    long long salary;
    int hour;
    Employee ()
    {
        name="";
        salary=0;
        hour=0;
    }
    void getIn4() {
        cin.ignore();
        getline(cin,name);
        cin>>salary>>hour;
    }
};
long long increase(Employee &x)
{
    if (x.hour>=8&&x.hour<10)
    {
        x.salary+=50;
    }
    else if (x.hour>=10&&x.hour<12)
    {
        x.salary+=100;
    }
    else
    {
        x.salary+=150;
    }
    return x.salary;
}
int main()
{
    int n; cin>>n;
    Employee em[n];
    for (int i=0;i<n;i++)
    {
        em[i].getIn4();
    }
    for (int i=0;i<n;i++)
    {
        em[i].salary=increase(em[i]);
        cout<<em[i].name<<endl;
        cout<<em[i].salary<<endl;
    }
}
