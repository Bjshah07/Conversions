#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,i,deci=0,rem;
    printf("enter the binary no.:");
    scanf("%d",&n);
    
    if (n%10==1 || n%10==0)
    {
        for(i=0;n!=0;i++){
            rem=n%10;
            deci=deci+rem*pow(2,i);
            n=n/10;
        }
        printf("the binary to decimal is:%d",deci);
    }
    else{
        printf("calculation cannot be done:");
    }
}