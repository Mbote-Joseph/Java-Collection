#include<stdio.h>

int power(int a){
    for(int i=1;i<=a;i++){
        if(a==1){
            printf("1 ^ %d",a);
        }else if(a==i){
            printf("%d ^ %d",i,i);
        }else{
            printf("%d ^ %d + ",i,i);
        }
    }
}
int main(void){
    int number;
    printf("Enter the number to be of numbers:");
    scanf("%d",&number);
    power(number);

}