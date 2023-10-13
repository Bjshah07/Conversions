#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    system("cls");
    int n,i,k,rem,temp;
    char hex[50];
    printf("enter the no.:");
    scanf("%d",&n);
    temp=n;
    for (i=1; temp!=0; )
    {
        rem=temp%16;
        if (rem<10)
        {
            rem=rem+48;
        }
        else{
            rem=rem+55;
        }
        hex[i++]=rem;
       temp=temp/16;
    }
    for ( k =i-1; k >0; k--)
    {
     printf("%c",hex[k]);
    }
    return 0;
    
}