#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float cel,far;
    printf("enter the temperature in celcius:");
    scanf("%f",&far);
    cel=5*(far-32)/9;
    printf("%f degree farhenit = %f degree celcius",far,cel);
}