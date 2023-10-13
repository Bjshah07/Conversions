#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float cel,far;
    printf("enter the temperature in celcius:");
    scanf("%f",&cel);
    far=1.8*cel+32;
    printf("%f degree celcius = %f degree farhenit",cel,far);
}