#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void towerOfHanoi(int n, char source, 
                    char target, char aux)  
{  
    if (n == 1)  
    {  
        cout << "Moving ring 1 from " << source << " to " << target<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, source, aux, target);  
    cout << "Moving ring " << n << " from " << source << " to " << target << endl;  
    towerOfHanoi(n - 1, aux, target, source);  
}  
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>> N;
    towerOfHanoi(N,'A','B','C');
    return 0;
}
