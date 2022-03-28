#include <iostream>
using namespace std;
struct Customers {
    string name;
    long long account;
    long long balance;
    Customers() {
        name="";
        account=0;
        balance=0;
    }
    void getIn() {
        cin.ignore();
        getline(cin,name);
        cin>>account>>balance;
    }
};
void balanceLessThan200(Customers cus[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (cus[i].balance<200)
        {
            cout<<cus[i].name<<endl;
        }
    }
}
void addMoney(Customers cus[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (cus[i].balance>1000)
        {
            cus[i].balance+=100;
            cout<<cus[i].balance<<endl;
        }
    }
}
int main()
{
    int n;cin>>n;
    Customers cus[n];
    for (int i=0;i<n;i++)
    {
        cus[i].getIn();
    }
    balanceLessThan200(cus,n);
    addMoney(cus,n);
}
