/*
    a- Student name=Meshari
    b-  ID =57498
    c- Section =05
    d- Course Code: CS 159



*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ShowArray_05_57498(int arrayIntegers[]){
    printf("\t\tShowArray_05_57498 is created by Student ID=57498-section 05\n");
    int section=1;
    int SIZE=4;
    
    printf("\t\tThe arrays elements: ");
    for(int i=0; i<SIZE; i++){
    if(arrayIntegers[i]!=-1){
        printf("%d \t",arrayIntegers[i]);
    }
    }
    /*
    
     This part is not being used in the main function and it is causing memory chunk

    */
    // printf("\n");
    // int M= 33;
    // int Values[]={};
    // for(int j=0; j<M;j++){
    //     Values[j]=rand()%10+10;
    // }
    // int sum=0;
    // for(int i=0; i<M;i++){
    //     if(Values[i]%2==0){
    //         sum =sum+Values[i];
    //     }
    //     sum =sum+0;
    // }
    //printf("The sum of the numbers is : %d\n",sum);
    
}

void PriceMin_05_57498(int DoorCar_57498[],int YearCar_57498[],int PriceCar_57498[]){

    int N= 57498+5;
    char ST_Values[]="Section_05_Meshari_57498";

    printf("\t\tFunction MinPrice_05_57498 is created by Student %s",ST_Values);

    printf("\n");
    printf("\t\t*******************************************************************************\n");
    printf("\t\t************************MIN CAR PRICE LIST *************************************\n");
    printf("\t\t\tCar \t ID\tDOOR\tYEAR\tPRICE\n");
    int min= PriceCar_57498[0];
    for(int i=0; i<4; i++){
        if(PriceCar_57498[i]< min ){
            min=PriceCar_57498[i];
            int minimum=min;
            if(PriceCar_57498[i]==minimum){
                printf(" \t\t\tCar \t %d \t %d \t %d \t %d\n", i, DoorCar_57498[i], YearCar_57498[i], PriceCar_57498[i]);
            }
        }
    }
    printf("\t\t********************************************************************************\n");
    printf("\t\t************************END OF THE MIN CAR LIST ********************************\n");
    printf("\t\t********************************************************************************\n\n");
}


void YearInfo_05_57498(int DoorCar_57498[],int YearCar_57498[],int PriceCar_57498[]){
    int sum_Odd=21;//5+7+9
    int sum_Even=12;//4+8

    printf("\t\tFunction YearInfo_05_57498 - Sum of odd digit Sum_Odd= %d and sum of even digit Sum_Even= %d\n", sum_Odd, sum_Even);

    int number=0;
    int sum=0;
    float average;
    for(int i=0; i<4;i++){
        if(YearCar_57498[i]==2021){
            sum = sum+PriceCar_57498[i];
            number= number +1;
        }
    
    }
    average= sum/number;
    printf("\t\tThe average price of the car in 2021 is %.2f\n",average);
    int cars=0;
    for(int i=0; i<4;i++){
        if(DoorCar_57498[i]<=2 && YearCar_57498[i]==2022){
            cars = cars+ 1;
            printf("\n\t\tThe number of mini-car in 2022 is %d\n",cars);
        }
    }
    printf("\t\t*************************************************************************************\n");
    
    
}



void sketch_05_57498(){
    for(int r=0; r<5;r++){
        for(int c=0; c<8;c++){
            if(r==c){
                printf("\t+");
            }else if(r-1==c){
                printf("\t+");
            
            }else if(r-2==c){
                printf("\t+");
            
            }else if(r-3==c){
                printf("\t+");
            
            }else if(r-4==c){
                printf("\t+");
            
            }else{
                printf("\t*");
            }
            
        }
        printf("\n");
    }

    int number[]={5,7,4,9,8};

    for(int i=0, n=5; i<5; i++){
        for(int j=0; j<number[i];j++){
            printf("#    ");
        }
        printf("\n");
    }
}

int main(void){
    sketch_05_57498();
    printf("Main Function created by : \n");
    printf("\tStudent Meshari \n");
    printf("\tSection 05 \n");
    printf("\tID = 57498 \n");
    int SIZE=5;
    // ShowArray_05_57498();
    int DoorCar_57498[SIZE];
    int YearCar_57498[SIZE];
    int PriceCar_57498[SIZE];

        int i=0;
         for( i = 0; i < SIZE; i++){
            printf("----------Car with ID = %d--------------\n", i);
            printf("Enter three values (Door, Year and Price): ");
            scanf("%d %d %d", &DoorCar_57498[i],&YearCar_57498[i],&PriceCar_57498[i]);
        if(DoorCar_57498[i]<0 && YearCar_57498[i]<2000 && PriceCar_57498[i]<0)
            break;
    }
    i += 1;
    printf("\n");
   
        PriceMin_05_57498(DoorCar_57498, YearCar_57498 , PriceCar_57498);
        YearInfo_05_57498(DoorCar_57498, YearCar_57498 , PriceCar_57498);

        printf("\n\n");
        printf("\t\tNUMBER OF DOOR ARRAY\n");
        ShowArray_05_57498(DoorCar_57498);

        printf("\n\t\tPRICE ARRAY\n\n");
        ShowArray_05_57498(PriceCar_57498);

        printf("\n\n\t\tYEAR ARRAY\n");
        ShowArray_05_57498(YearCar_57498);

        printf("\n\n");
        printf("Press any key to continue.....\n");

    
    
}