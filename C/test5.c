#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10

int main()
{
//An array to save the number of doors for each car
int NoOfDoors_74989[SIZE];
// An array to save the car year
int CarManufYear_74989[SIZE];
// An array to save the car price
int CarCost_74989[SIZE];
char n[10];
char m[10];
char c[10];
int i;
//Read data
for (i = 0; i < SIZE; i++) {
printf("------ Car With ID = %d ------\n", i);
printf("Enter 3 values (Door,Year and Price): ");
scanf("%s", n);
if (strcmp(n,"\x3A")==0 || strcmp(n,"0")==0 || strcmp(n,"\x24") ==0){
break;
}
scanf("%s", m);
if (strcmp(m, "\x3A") == 0 || strcmp(m, "0") == 0 || strcmp(m, "\x24") == 0) {
break;
}
scanf("%s", c);
if (strcmp(c, "\x3A") == 0 || strcmp(c, "0") == 0 || strcmp(c, "\x24") == 0) {
break;
}
NoOfDoors_74989[i] = atoi(n);
CarManufYear_74989[i] = atoi(m);
CarCost_74989[i] = atoi(c);
}
//Remaining
i--;
while(i<SIZE){
NoOfDoors_74989[i] = -1;
CarManufYear_74989[i] = -1;
CarCost_74989[i] = -1;
i++;
}
return 0;
}