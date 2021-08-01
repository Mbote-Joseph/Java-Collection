#include <stdio.h>
#include <string.h>
 //int PrintArray_03_123();
 
 void MinPrice_03_123() ;
int main() {
    int sec_no= 3;
    int stud_id =123;
    int SIZE= sec_no+3;
    int Door_123[SIZE];
    int Year_123[SIZE];
    int Price_123[SIZE];
    
// int sum =   PrintArray_03_123();

printf("Enter the price of 3 car:\n");
for(int x=0;x<3;x++)
{
    scanf("%d",&Price_123[x]);
}
MinPrice_03_123(0,0,Price_123);
 return 0;
}

//FUNCTION 2
void MinPrice_03_123( int Door_123[],int Year_123[],int Price_123[] )
{
//task1
int sec_no= 3;
int stud_id =123;
char fun2[50];

 snprintf(fun2, 50, "MinPrice_0%d_%d", sec_no,stud_id);
//printf("the function name is given by:");
//printf("%s\n", fun2);

int N = stud_id+sec_no;
    
    char name [] ="xxx_yyy";
    char ST_INF[N] ;
snprintf(ST_INF, 50, "xxx_yyy_section0%d_ID_%d", sec_no,stud_id); 
//printf("%s\n", ST_INF);
printf("Function %s is created by %s\n", fun2,ST_INF );

//task 2
int min;
int value[5];
//Initialize min with first element of array.    
 min= Price_123[0];
    //Loop through the array    
    for (int i = 0; i < 3; i++) {     
        //Compare elements of array with min    
       if(Price_123[i] <= min)    
      { min= Price_123[i];
       value[i]=min;
       printf("\nId is %d and value is %d", i, value[i]);
     } 
    } 

} 