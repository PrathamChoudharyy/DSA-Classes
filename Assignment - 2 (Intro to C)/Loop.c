#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    int a,b,c;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i<10)
        {
            nums(i); 
            printf("\n");
        }
        else if(i%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }           
    return 0;
}

void nums(int t)
{
    if (t==9) printf("nine");
    else if (t==8) printf("eight");
    else if (t==7) printf("seven");
    else if (t==6) printf("six");
    else if (t==5) printf("five");
    else if (t==4) printf("four");
    else if (t==3) printf("three");
    else if (t==2) printf("two");
    else if (t==1) printf("one");
    else printf("error");
}
