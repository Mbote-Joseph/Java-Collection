//Function 3
//task 1 & 2
void InfoYear_03_123(int Door_123[],int Year_123[] ,int Price_123[])
{
int sec_no= 3, x=0;
int stud_id =123;
char fun3[50];
int NB1=0, NB2=0, num= stud_id;
//task 3
l1:
x=num%10;   
if(x%2!=0 )
NB1 =NB1+x;    
else
NB2= NB2 + x;
num=num/10;   
if(num!=0)
goto l1;
 snprintf(fun3, 50, "Info_Year_0%d_%d", sec_no,stud_id);
 
 printf("\nFunction %s - Sum of odd digit NB1 = %d and Sum of even digit NB2 = %d", fun3, NB1, NB2);
 //task 4
 int total_price=0;
 float avg_price =0.000;
 for(int m=0;m<2;m++)
 {
      printf("\n%d", Year_123[m] );
     if(Year_123[m]==2020)
     { 
         
     total_price = total_price + Price_123[m];
     }
     
 }
avg_price =(total_price /2) ;
     printf(" \naverage price is :%f", avg_price);
} 