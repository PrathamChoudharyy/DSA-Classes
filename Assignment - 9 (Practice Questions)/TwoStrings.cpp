string twoStrings(string s1, string s2) {
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s2.find(s1[i])<s2.length())
        {
            return "YES";
        }   
    }
    return "NO";
}
