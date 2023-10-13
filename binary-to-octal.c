#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,i,j=1,deci=0,rem,rem1;
    long long oct=0;
    printf("enter the binary no.:");
    scanf("%d",&n);
    //BINARY TO DECIMAL
    if (n%10==1 || n%10==0)
    {
        for(i=0;n!=0;i++){
            rem=n%10;
            deci=deci+rem*pow(2,i);
            n=n/10;
        }
        printf("the binary to decimal is:%d\n",deci);
    }
    else{
        printf("calculation cannot be done:");
    }
    //DECIMAL TO OCTAL
        for (;deci!=0; )
        {
            rem1=deci%8;
            oct=oct+rem1*j;
            j=j*10;
            deci=deci/8;
         }
         printf("decimal to octal is:%lld",oct);
}