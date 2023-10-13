#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n,rem=0,i=1;
    long long oct=0;
    printf("enter the digits in decimal:");
    scanf("%d",&n);
    for ( ; n!=0; )
    { 
        rem=n%8;
        oct=oct+rem*i;
       i=i*10;
        n=n/8;
    }
    printf("the decimal to octal is :\n%lld",oct);
    return 0;
}