int camelcase(string s) {
    int n= s.length();
    int count = 1;
    for(int i=0;i<n;i++)
    {
        if (isupper(s[i]))
        {
            count++;
        }
    }
    return count;
}
