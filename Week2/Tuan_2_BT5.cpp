#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= 2*n + 1; i++) {
        for (int j = 1; j <= 2*n + 1; j++){
            if ( i==j || i + j == (2*n+1)+1 ) { // Kiểm tra điều kiện
                cout<<"* ";
            }else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}
