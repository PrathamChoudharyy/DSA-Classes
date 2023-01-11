#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string h=s.substr(0,2);
    
    
    if(stoi(h)<12 && s[8]=='P'){
        h=to_string(stoi(h)+12);
    }
    else if(stoi(h)==12 && s[8]=='A'){
        h="00";
    }
    
    return h+s.substr(2,6);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
