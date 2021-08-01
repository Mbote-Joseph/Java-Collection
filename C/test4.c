#include <stdio.h>

#include <stdlib.h>

#include<iomanip>

#define SIZE 6

void F_PrintArray_11(int arr[], int);

void F_PrintArray_11(float arr[], int);

void F_Max_length_11(int a[], int s[], float l[]) {

    printf("\nMAX CAR LENGTH LIST\n");

    float max = l[0];

    for(int i = 0; i < SIZE; i++) {

        if(l[i] >= max) {

            max = l[i];

        }

    }

    printf("Car\t\tairbag\tseat\tlength\n");

    for(int i = 0; i < SIZE; i++) {

        if(l[i] == max) {

            printf("Car\t%d:\t%d\t%d\t%.2f\n", (i+1), a[i], s[i], l[i]);

        }

    }

}

void  F_Count_airbag_11(int ar[]) {

    printf("\n");

    int max = 0;

    for(int i = 0; i < SIZE; i++) {

        if(ar[i] == 7) {

            max++;

        }

    }

    printf("The number of occurance of value 7 in array is %d\n", max);

}

void F_DrawRectangle_11() {

    printf("\n------------\n");

    int row = 6, col = 8;

    // Variable initialization

    int line_no = 1; // Line count

  

    // Loop to print desired pattern

    int curr_star = 1;

    for (int line_no = 1; line_no <= row;)

    {

        if(curr_star <= col){

            if(curr_star <= line_no) {

                printf("\t+");

            }

            else {

                printf("\t*");

            }

            curr_star++;

        }

        if(curr_star > col) {

            printf("\n");

            curr_star = 1;

            line_no++;

        }

        

    }

    printf("\n------------\n");

}

int main() {

    

    int airbag[SIZE], seat[SIZE];

    float length[SIZE];

    for(int i = 0; i < SIZE; i++) {

        airbag[i] = -1;

        seat[i] = -1;

        length[i] = -1;

    }

    for(int i = 0; i < SIZE; i++) {

        int ar, st;

        float l;

        printf("\n------Car with ID-%d------\n",(i+1));

        printf("Enter three values (# of airbags, # of seats and length in meters): ");

        scanf("%d %d %f", &ar, &st, &l);

        if(ar != -1 && st != -1 && l != -1) {

            airbag[i] = ar;

            seat[i] = st;

            length[i] = l;

        }

        else {

            break;

        }

    }

    F_DrawRectangle_11();

    F_Max_length_11(airbag, seat, length);

    F_DrawRectangle_11();

    F_Count_airbag_11(airbag);

    printf("\nNUMBER of airbag ARRAY");

    F_PrintArray_11(airbag, SIZE);

    printf("\nlength ARRAY");

    F_PrintArray_11(length, SIZE);

    printf("\nseat ARRAY");

    F_PrintArray_11(seat, SIZE);

    

    return 0;

}

void F_PrintArray_11(int arr[], int size) {

    

    printf("\nThe array’s elements: ");

    for(int i = 0; i < size; i++) {

        if(arr[i] > 0) {

            printf("\t%d", arr[i]);

        }

    }

    printf("\n");

}

void F_PrintArray_11(float arr[], int size) {

    

    printf("\nThe array’s elements: ");

    for(int i = 0; i < size; i++) {

        if(arr[i] > 0) {

            printf("\t%.2f", arr[i]);

        }

    }

    printf("\n");

}