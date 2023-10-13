#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n,rem=0,i=1;
    long long bin=0;
    printf("enter the digits in decimal:");
    scanf("%d",&n);
    for ( ; n!=0; )
    { 
        rem=n%2;
        bin=bin+rem*i;
        i=i*10;
        n=n/2;
    }
    printf("the decimal to binary is :\n%lld",bin);
    return 0;
}