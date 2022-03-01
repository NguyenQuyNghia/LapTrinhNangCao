#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_N = 1000;
int main()
{
    int n; cin>>n;
    double vectorA[MAX_N];
    double vectorB[MAX_N];
    for (int i=0;i<n;i++)
    {
        cin>>vectorA[i];
    }
    for (int i=0;i<n;i++)
    {
        cin>>vectorB[i];
    }
    double product = 0;
    for (int i=n-1;i>=0;i--)
    {
        product += vectorA[i] * vectorB[i];

    }
    cout<<setprecision(2)<<fixed<<product;
}
