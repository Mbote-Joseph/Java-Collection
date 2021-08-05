#include<stdio.h>

int main(void){
    int currency, USD=4100, riel;

    printf("Enter money in USD:");
    scanf("%d",&currency);

    riel= currency*USD;
    printf("The amount in Riel is : %d\n",riel);
}