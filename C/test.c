#include <stdio.h>
 int PrintArray_03_123();
int main() {
    int sec_no= 3;
   // int stud_id =123;
    int SIZE= sec_no+3;
    int Door_123[SIZE];
    int Year_123[SIZE];
    int Price_123[SIZE];
 int sum =   PrintArray_03_123();
  return 0;
}
 int PrintArray_03_123() 
{   

//first task

    int sec_no=3;
    int stud_id =123;
int SIZE= sec_no+3;
int arr[SIZE];
    printf("PrintArray_03_123 is created by");
    printf("Student ID = %d", stud_id);
    printf("-section %d", sec_no);

 

//second task
    printf("\nEnter elements ");
    for(int i=0;i<SIZE;i++ )
    
    {
        scanf("\n%d" ,&arr[i]);
        
    } 
printf("\n The array elements: ");
for(int i=0;i<SIZE;i++ )
    if(arr[i]!= -1)
          { printf("\t%d", arr[i]);
          } 
   //third task
   int x, M;
   // find value of M
while(stud_id > 0)    
{    
x=stud_id%10;    
M=M+x;    
stud_id=stud_id/10;    
}    
printf("\nvalue of 1+2+3 is=%d",M);    
    int Numbers[M], sum=0;
    int lower =5,upper=20;
    // generate random numbers
for (int i = 0; i < M; i++) { 

        Numbers[i] = (rand() % 

           (upper - lower + 1)) + lower; 

      

 } 
printf("Random numbers are given by :");
for (int i = 0; i < M; i++) { 
printf("\n%d ",  Numbers[i] ); 
sum =sum +Numbers[i] ;

} 
printf("\nsum is: %d", sum);
return sum;


}

 

 
