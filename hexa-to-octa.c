#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int i,j=0,k=1,rem=0,deci=0,len;
    long long oct=0;
    char n[100];
    printf("enter the hexadecimal no.:");
    scanf("%s",&n);
    //FROM HEXADECIMAL TO DECIMAL
     len=strlen(n);
    for ( i = len-1 ; i >=0 ; i--)
    {
        if (n[i]>='A' && n[i]<='F')
        {
            deci=deci+(n[i]-55)*pow(16,j);
            j++;
        }
        else if (n[i]>='0' && n[i]<='9')
        {
            deci=deci+(n[i]-48)*pow(16,j);
            j++;
        }
        else{
            printf("calculation cannot be done:");
        }
    }
    printf("hexa to decimal is:%d",deci);
//FROM DECIMAL TO OCTAL
for ( ; deci!=0; )
{
    rem=deci%8;
    oct=oct+rem*k;
    k=k*10;
    deci=deci/8;
}
printf("\ndecimal to octa is:%lld",oct);
return 0;
}