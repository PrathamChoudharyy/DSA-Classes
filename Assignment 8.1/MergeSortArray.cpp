#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int start, int end, int mid) {
    int i=start, j=mid+1, k=0;
    int ans[end-start+1];
    while(i<=mid && j<=end) {
        if(A[i]<A[j]){
            ans[k]=A[i];
            i++;
            k++;
        }
        else{
            ans[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){ans[k++]=A[i++];}
    while(j<=end){ans[k++]=A[j++];}
    for(int i=0;i<k;i++){
        A[start+i]=ans[i];
    }
}
void sorp(int* A, int start, int end){
    if(start==end){
        return ;
    }
    int mid=(start+end)/2;
    sorp(A,start,mid);
    sorp(A,mid+1,end);
    merge(A,start,end,mid);
}
int main(void) {
    int arr[10] = {10, 2, 9, 8, 6, 4, 3, 5, 1, 7};
    int n = 10;

    sorp(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
