#include <iostream>
using namespace std;
struct Mark {
    int roll;
    string name;
    float chem_marks;
    float math_marks;
    float phy_marks;
    void getInformation()
    {
        cin>>roll;
        cin.ignore();
        getline(cin,name);
        cin>>chem_marks>>math_marks>>phy_marks;
    }
    void display()
    {
        cout<<"Roll no: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Chemistry mark: "<<chem_marks<<endl;
        cout<<"Math mark: "<<math_marks<<endl;
        cout<<"Physical mark: "<<phy_marks<<endl;
    }
};
int main()
{
    Mark student[5];
    for (int i=0;i<5;i++)
    {
        student[i].getInformation();
    }
    for (int i=0;i<5;i++)
    {
        student[i].display();
    }
}
