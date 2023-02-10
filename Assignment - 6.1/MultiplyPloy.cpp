#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int* mulpol(int ar[], int ary[], int sz1, int sz2)
{
   int* ans=new int[sz1+sz2-1];
   for (int i = 0; i<sz1+sz2; i++)
     ans[i] = 0;
   for (int i=0; i<sz1; i++)
   {
     for (int j=0; j<sz2; j++)
         ans[i+j] += ar[i]*ary[j];
   }
   
  
   return ans;
}
int main(){
    int t, m,n;
    cin >> t;
    while(t>0){
        cin >> n >> m;
        int arr[n], arry[m];
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }
        for (int i=0; i<m; i++){
            cin >> arry[i];
        }
        int* ans=mulpol(arr, arry, n, m);
        for(int k=0;k<(m+n);k++){
            cout<<ans[k]<<" ";
        }
        cout<<endl;
        t--;
    }
    return 0;

}
