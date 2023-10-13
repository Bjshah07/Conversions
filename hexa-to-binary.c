#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,j=0,len,deci=0;
    char n[100];
    printf("enter the hexadecimal no.:");
    scanf("%s",&n);
    len=strlen(n);
    for ( i=len-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9'){
            deci=deci+(n[i]-48)*pow(16,j);
            j++;
        }
        else if(n[i]>='A' && n[i]<='F'){
            deci=deci+(n[i]-55)*pow(16,j);
            j++;
        }
        else{
            printf("calculation cannot be done:");
        }
    }
    printf("hexadecimal to decimal is:%d",deci);
    //FROM DECIMAL TO BINARY
    int k=1,rem=0;
    long long bin=0;
    for (;deci!=0; )
    {
        rem=deci%2;
        bin=bin+rem*k;
        k=k*10;
        deci=deci/2;
    }
    printf("\ndecimal to binary is:%lld",bin);
    return 0;
}

