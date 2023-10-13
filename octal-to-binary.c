#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,i,j=1,deci=0,rem,rem1;
    long long bin=0;
    printf("enter the OCTAL no.:");
    scanf("%d",&n);
    //OCTAL TO DEIMAL
    if (n%10==1 || n%10==2 ||n%10==3 ||n%10==4 ||n%10==5 ||n%10==6 ||n%10==7 || n%10==0)
    {
        for(i=0;n!=0;i++){
            rem=n%10;
            deci=deci+rem*pow(8,i);
            n=n/10;
        }
        printf("the octal to decimal is:%d\n",deci);
    }
    else{
        printf("calculation cannot be done:");
    }
    //DECIMAL TO BINARY
        for (;deci!=0; )
        {
            rem1=deci%2;
            bin=bin+rem1*j;
            j=j*10;
            deci=deci/2;
         }
         printf("decimal to binary is:%lld",bin);
}