#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    system("cls");
    int n,i,deci=0,rem;
    printf("enter the octadecimal no.:");
    scanf("%d",&n);
    
    if (n%10==1 || n%10==2 || n%10==3 || n%10==4 || n%10==5 || n%10==6 || n%10==7 || n%10==0)
    {
        for(i=0;n!=0;i++){
            rem=n%10;
            deci=deci+rem*pow(8,i);
            n=n/10;
        }
        printf("the octal to decimal is:%d",deci);
    }
    else{
        printf("calculation cannot be done:");
    }
}