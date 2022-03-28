#include <iostream>
using namespace std;
struct Student {
    int roll;
    string name;
    int age;
    string address;
    Student() {
        roll=0;
        name="";
        age=0;
        address="";
    }
    void getInformation ()
    {
        cin>>roll;
        cin.ignore();
        getline(cin,name);
        cin>>age;
        cin.ignore();
        getline(cin,address);
    }
    void dispaly()
    {
        cout<<"Roll no: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
    }
};
void age14(Student st[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (st[i].age==14)
        {
            cout<<st[i].name<<endl;
        }
    }
}
void evenRollNo (Student st[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (st[i].roll%2==0)
        {
            cout<<st[i].name<<endl;
        }
    }
}
int main()
{
    int n;cin>>n;
    Student st[n];
    for (int i=0;i<n;i++)
    {
        st[i].getInformation();
    }
    age14(st,n);
    evenRollNo(st,n);

}
