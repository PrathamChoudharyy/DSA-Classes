#include <bits/stdc++.h>
using namespace std;
void count_sort(vector<int> &arr, int max){
    vector<int> A(max+1,0);
    int s= arr.size();
    for(int i=0; i<s;i++){
        A[arr[i]]++;
    }
    int k=0;
    for(int i=0; i<s;i++){
        for(int j=0; j<A[i]; j++){
            arr[k]=i;
            k++;
        }
    }
    
}
vector<int> input_vector(int n){
    vector<int> result;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        result.push_back(temp);
    }
    return result;
}
void print_vector(vector<int> A){
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int k;
    cin >> k;
    vector<int>A;
    A=input_vector(k);
    int n;
    n=*max_element(A.begin(), A.end());
    count_sort(A, n);
    print_vector(A);
    return 0;
}
