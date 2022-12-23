#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int len =a.size();
    int leg =b.size();
    cout<<len<<" "<<leg<<endl;
    cout<<a+b<<endl;
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
    return 0;
}
