#include <iostream>
using namespace std;
struct Student {
    int roll;
    string name;
    int age;
    string address;
    double mark;
    Student ()
    {
        roll=0;
        name="";
        age=0;
        address="";
        mark=0;

    }
    void getInformation()
    {
        cin>>roll;
        cin.ignore();
        getline(cin,name);
        cin>>age;
        cin.ignore();
        getline(cin,address);
        cin>>mark;
    }
    void display()
    {
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Mark: "<<mark<<endl;
    }
};
int main()
{
    int n;cin>>n;
    Student st[n];
    for (int i=0;i<n;i++)
    {
        st[i].getInformation();
    }
    for (int i=0;i<n;i++)
    {
        st[i].display();
    }
}
