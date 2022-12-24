#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,temp=0,dig=0;
    scanf("%d", &n);
    dig = n;
    for(int i=0;i<5;i++)
    {
        temp = dig%10;
        sum = sum+temp;
        dig = dig/10;
    }
    printf("%d",sum);
    return 0;
}
