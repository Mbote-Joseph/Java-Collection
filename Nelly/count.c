#include <stdio.h>
#define MAX 100
void printDigit(int a){
    int arr[MAX], i=0,j,r;
    while(a !=0){
        r=a%10;
        arr[i]=r;
        i++;
        a=a/10;
    }
    printf("Number of digits:  %d\n",i);
    printf("The digits of the number :");

    for(j=i-1;j>-1;j--){
        printf("%d ", arr[j]);
    }
}
int main() {
    int n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printDigit(n);
    printf("\n\n");


}