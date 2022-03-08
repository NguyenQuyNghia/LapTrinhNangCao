void printArrow(int n, bool left)
{
    if (!left)
    {
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=2*(i-1);j++)
            {
                cout<<" ";
            }
            for (int j=1;j<=n-i+1;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        for (int i=n-1;i>=1;i--)
        {
            for (int j=1;j<=2*(i-1);j++)
            {
                cout<<" ";
            }
            for (int j=1;j<=n-i+1;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    else
    {
        for (int i=n;i>=1;i--)
        {
            for (int j=1;j<=i-1;j++)
            {
                cout<<" ";
            }
            for (int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        for (int i=2;i<=n;i++)
        {
            for (int j=1;j<=i-1;j++)
            {
                cout<<" ";
            }
            for (int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
}