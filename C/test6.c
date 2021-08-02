#include <stdio.h>
int YearInfo_O7_98745(int NoOfDoors_98745[], int CarManufYear_98745[], double CarCost_98745[],int size);
int YearInfo_O7_98745(int NoOfDoors_98745[], int CarManufYear_98745[], double CarCost_98745[], int size){
    //Variable to store the price of all cars manufactured in 2019
    double priceIn2019 = 0;
    int i = 0;
    //Variable to count cars manufactured in 2019
    int carsManuFacturedIn2019 = 0;
    //Variable to count mini cars manufactured in 2019
    int numberOfMiniCars = 0;
    //Looping through the array
    //Loop that counts mini cars manufactured in 2019
    //Also the total price of the cars manufactured in 2019
    for(i = 0; i < size; i++){
        //If the car is manufactured in 2019 then only consider that car
        if(CarManufYear_98745[i] == 2019){
            //Add the price of the current car to priceIn2019
            priceIn2019 += CarCost_98745[i];
            carsManuFacturedIn2019 += 1;
            //Check the number of doors in the car
            if(NoOfDoors_98745[i] == 2){
                numberOfMiniCars += 1;
            }
        }
    }
    printf("The average price of all the cars manufactured in 2019 is %f$.\n",priceIn2019/carsManuFacturedIn2019);
    return numberOfMiniCars;   
}
int main()
{
    //Variable to store the student id
    int ID = 98745;
    //Variable to store the section number
    char section[2] = "O7";
    //Variable to store the size of the arrays
    int size = 11;
    //Array to store the number of doors in the each car
    int NoOfDoors_98745[size];
    //Array to store the manufacturing year of each car
    int CarManufYear_98745[size];
    //Array to store the cost of each car 
    double CarCost_98745[size];
    int i = 0;
    int exitLoop;
    //Loop to get each value for the arrays
    for(i = 0; i < size; i++){
        printf("Enter number of doors for the car %d:",i);
        scanf("%d",&NoOfDoors_98745[i]);
        printf("Enter manufacturing year for the car %d:",i);
        scanf("%d",&CarManufYear_98745[i]);
        printf("Enter the cost for the car %d:",i);
        scanf("%lf",&CarCost_98745[i]);
        printf("Enter -1 to exit:");
        scanf("%d",&exitLoop);
        if(exitLoop == -1)
            break;
    }
    i += 1;
    //Insert -1 for the remaining values
    int finalSize = i;
    for(i; i < size; i++){
        NoOfDoors_98745[i] = -1;
        CarManufYear_98745[i] = -1;
        CarCost_98745[i] = -1;
    }
    printf("The number of mini cars manufactured in 2019 is %d\n",YearInfo_O7_98745(NoOfDoors_98745, CarManufYear_98745, CarCost_98745, finalSize));
    return 0;
}
