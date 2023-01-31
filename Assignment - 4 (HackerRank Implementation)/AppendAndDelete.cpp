#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */
int check(string s, string t){
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==t[i]){
            ans+=1;
        }
        else{
            break;
        }
    }
    return ans;
}

string appendAndDelete(string s, string t, int k) {
    string ans="No";
    int sizs=0,sizt=0;
    sizs=s.size()-check(s, t);
    sizt=t.size()-check(s, t);
    if(sizs+sizt<=k and (sizs+sizt)%2==k%2){
        ans="Yes";
    }
    else if((s.size()+t.size())<=k){
        ans="Yes";
    }
    else{
        ans="No";
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
