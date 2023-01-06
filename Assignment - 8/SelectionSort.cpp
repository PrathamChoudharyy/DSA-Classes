#include <bits/stdc++.h>
using namespace std;
//Function to Print the Array.
void print_vector(vector<int> &A){
    for(int i=0;i<A.size();i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
//Function to Input the array.
vector<int> input_vector(int n){
    vector<int> vect;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }
    return vect;
}
//Function to get index of the minimum value in the vector from index p to n-1.
int indexOfMinimumValue(vector<int> &A, int p){
    //cout<<"Function Called Upar wala \n";
    int min=INT_MAX, lol;
    for(int i=p;i<A.size();i++){
        if(A[i]<min){
            min=A[i];
            lol=i;
        }
    }
    return lol;
}
//Function to implement the algorithm of Selection Sort.
void saurt(vector<int> &A){
    //cout<<"Function Called \n";
    for(int i=0;i<A.size();i++){
        int k = indexOfMinimumValue(A, i);
        if(k!=-1){
            //cout<<"Sorting Called\n";
            swap(A[i],A[k]);
            //cout<<A[i]<<A[k];
        }
    }
    // print_vector(A);
}
//Driver Code.
int main(){
    int n;
    cin >> n;// Size of the vector.
    vector<int> test;//Input the vector.
    cout<<"Input Array : "<<endl;
    test=input_vector(n);
    cout<<"\n";
    cout<<"Array Before Sorting : "<<endl;
    print_vector(test);
    saurt(test);
    cout<<"Array After Sorting : "<<endl;
    print_vector(test);
    cout<<"\n";
    return 0;
}
