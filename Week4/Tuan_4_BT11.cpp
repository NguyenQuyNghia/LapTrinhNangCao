string pigLatin(string word)
{
    if (word[0]=='o'||word[0]=='a'||word[0]=='i'||word[0]=='e'||word[0]=='u')
    {
        return word + "way";
    }
    else
    {
        char c=word[0];
        for (int i=0;i<word.size()-1;i++)
        {
            word[i]=word[i+1];
        }
        word[word.size()-1]=c;
        return word+"ay";
    }
}
