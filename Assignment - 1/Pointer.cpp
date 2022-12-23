#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    int x=*a, y=*b;
    int s=x+y;
    int d=x-y;
    if(d<0){
        d=d*(-1);
    }
    *a=s;
    *b=d;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
