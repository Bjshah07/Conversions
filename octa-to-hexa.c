#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
    system("cls");
    int n,deci=0,i,j,rem,k,temp,rem1;
    char hexa[50];
    printf("enter the binary no.:");
    scanf("%d",&n);
    //FROM OCTADECIMAL TO DECIMAL
    if (n%10==7 ||n%10==6 ||n%10==5 ||n%10==4 ||n%10==3 ||n%10==2 ||n%10==1 ||n%10==0 )
    { for ( i = 0; n!=0; i++)
    {
        rem=n%10;
        deci=deci+rem*pow(8,i);
        n=n/10;
    }
    }
    else{
        printf("calculation cannot be done:");
    }
    printf("octa to decimal is:%d",deci);
    //FROM DECIMAL TO HEXADECIMAL
     temp=deci;
     for (j=1; temp!=0;)
     {
        rem1=temp%16;
        if (rem1<10)
        {
            rem1=rem1+48;
        }
        else{
            rem1=rem1+55;
        }
        hexa[j++]=rem1;
        temp=temp/16;
    }
    printf("\ndecimal to hexadecimal is:");
    for (k = j-1; k >0 ; k--)
    {
        printf("%c",hexa[k]);
    }
    return 0;    
}