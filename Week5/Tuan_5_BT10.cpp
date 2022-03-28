#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct Book {
    int accessionNumber;
    string nameAuthor;
    string bookTitle;
    bool issues;
    void getIn4 ()
    {
        cin>>accessionNumber;
        cin.ignore();
        getline(cin,nameAuthor);
        getline(cin,bookTitle);
        cin>>issues;
    }
    void display()
    {
        cout<<"Accession Number: "<<accessionNumber<<endl;
        cout<<"Name Author: "<<nameAuthor<<endl;
        cout<<"Book Title: "<<bookTitle<<endl;
        if (issues)
        {
            cout<<"Issue? No"<<endl;
        }
        else
        {
            cout<<"Issue? Yes"<<endl;
        }
    }
};
int main()
{
    vector<Book> lis;
    cout<<"--------Menu--------"<<endl;
    cout<<"1 - Display book information"<<endl;
    cout<<"2 - Add a new book"<<endl;
    cout<<"3 - Display all the books in the library of a particular author"<<endl;
    cout<<"4 - Display the number of books of a particular title"<<endl;
    cout<<"5 - Display the total number of books in the library"<<endl;
    cout<<"6 - Issue a book"<<endl;
    cout<<"7 - Thoat"<<endl;
    int choice;
    do {
        cin>>choice;
        switch (choice)
        {
            case 1:
                for (int i=0;i<lis.size();i++)
                {
                    lis[i].display();
                }
                break;

            case 2:
                {
                    Book newOne;
                    newOne.getIn4();
                    lis.push_back(newOne);
                    break;
                }

            case 4:
                {
                    map <string,int> mp;
                    for (int i=0;i<lis.size();i++)
                    {
                        mp[lis[i].bookTitle]++;
                    }
                    for (int i=0;i<lis.size();i++)
                    {
                        if (mp[lis[i].bookTitle]!=0)
                        {
                            cout<<lis[i].bookTitle<<" "<<mp[lis[i].bookTitle]<<endl;
                            mp[lis[i].bookTitle]=0;
                        }
                    }
                    break;
                }

            case 5:
                cout<<"Total book: "<<lis.size()<<endl;
                break;
        }
    }while (choice!=7);
}
