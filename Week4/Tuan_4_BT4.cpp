long long int factorial(int n)
{
    long long int sum=1;
    for (int i=2;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
