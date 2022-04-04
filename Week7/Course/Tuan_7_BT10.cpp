bool check(char c)
{
    if (c>='a' && c<='z'|| c>='A' && c<='Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void rFilter(char *s) {
    // Your code goes here
    for (int i=strlen(s)-1;i>=0;i--)
    {
        if (!check(s[i]))
        {
            s[i]='_';
        }
        else
        {
            break;
        }
    }
}
