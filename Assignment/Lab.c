#include <stdio.h>
const int PASSENGER_SIZE=8;
const int FLIGHT_SIZE=33;
void O_F1_6(int arr[], int N);
float O_F2_6(int arr[]);
void O_F4_6(int arr[][FLIGHT_SIZE], int IdPass[],char frqflyr[]);
int O_F3_6(int arr[], int IdFlight[], int numtrips);
int main()
{
   int IDs_passengers [PASSENGER_SIZE];
   int IDs_flights [FLIGHT_SIZE];
   int Flight_frequency[PASSENGER_SIZE][FLIGHT_SIZE];
   char Freq_flyers [PASSENGER_SIZE];
   int i, j, p, f, pos, flid;
   float avg=0;
   int M1=5, M2=7, M3=4, M4=9, M5=8;
   
   printf("Student ID:\n");
   printf("M1 is equal to %d  M2 is equal to %d  M3 is equal to %d  M4 is equal to %d  M5 is equal to %d\n", M1, M2, M3, M4, M5);
   printf("Enter the Ids of %d passengers: ",PASSENGER_SIZE);
   for (i=0; i < PASSENGER_SIZE; ++i) {
       scanf("%d", IDs_passengers + i);
       if(*(IDs_passengers + i)==-11)
       break;
       
   }
   for (j=i;j<PASSENGER_SIZE; ++j)
     *(IDs_passengers + j)=-10;
     
printf("Enter the Ids of %d flights: ", FLIGHT_SIZE);
     for (i = 0; i < FLIGHT_SIZE; ++i){
         scanf("%d", IDs_flights + i);
         if(*(IDs_flights + i)==-11)
         break;
         
     }
     for(j=i;j<FLIGHT_SIZE; ++j)
       *(IDs_flights + j)=-10;
 printf("Enter the number of trips for each passenger: \n");
 for (i =0; i < PASSENGER_SIZE; ++i){
     if(*(IDs_passengers + i)==-10)
       break;
    else
    {
        printf("Passenger with ID=%d : ",*(IDs_passengers + i));
        O_F1_6(*(Flight_frequency+i),i);
        
    }
}
printf("\n-----------------------------------------------------------------\n");
printf("\tPassenger Id\t Average trips\n");
printf("\t-------------\t--------------\n");
  for (i = 0 ; i < PASSENGER_SIZE; i++)
  {
      avg=O_F2_6(*(Flight_frequency+i));
      printf("\t\t %d \t %.3f\n",*(IDs_passengers + i), avg);
}
printf("\n-----------------------------------------------------------------\n");
O_F4_6(Flight_frequency, IDs_passengers, Freq_flyers);
printf("\n-----------------------------------------------------------------\n");
printf("Enter the Passenger id and frequency of trip for a flight :\n");
scanf("%d%d",&p,&f);
pos=-1;
for (i =0; i < PASSENGER_SIZE; i++)
 {
    if((*(IDs_passengers + i))==p)
 {
     pos=i;
     break;
     
 }
     
 }
 if(pos!=-1)
 {
     flid=O_F3_6(*(Flight_frequency+pos), IDs_flights, f);
     if(flid!=-1) {
         printf("The flight id is %d",flid);             }
     else         { 
         printf("Required information not found");       }
     
 }
 else           {
     printf("Required information not found");         }
 printf("\n-----------------------------------------------------------------\n");

 int number[]={5,7,4,9,8};

    for(int i=0, n=5; i<5; i++){
        for(int j=0; j<number[i];j++){
            printf("+ ");
        }
        printf("\n");
    }
 return 0;
}
void O_F1_6(int arr[], int N)
{
    int i,j;
    for (i = 0; i < FLIGHT_SIZE; ++i) {
        scanf("%d", arr + i);
        if(*(arr + i)==-11)
        break;
        
    }
    for(j=i;j<FLIGHT_SIZE; ++j)
    *(arr + j)=-10;
}
float O_F2_6(int arr[])
{
    int count=0;
    float avg;
    // sum=c=0;
    for(int i = 0; i < FLIGHT_SIZE; ++i){
        if(arr[i]!=-9 && arr[i] !=-10){
            avg +=arr[i];
            count +=1;
        // sum=sum+(*(arr + i));
        // c++;
        }
        
    }
    avg /=count;
    return avg;
}
// }  REMOVED
int O_F3_6(int arr[], int IdFlight[], int numtrips)
  {
  
    int rt=-1;
    for(int i=0;i<FLIGHT_SIZE;i++)
    {
        if(*(arr + i)==numtrips)
        {
            rt=IdFlight[i];
            return rt;
        }
    }
//  } REMOVED
// {  REMOVED 
return rt;
}
void O_F4_6(int Flight_frequency[][FLIGHT_SIZE], int Id_Pass[],char frqflyr[])
{
    int i, j, sum;
    printf("\tPassenger Id\t Frequent Flyer\n");
    printf("\t-------------\t----------------\n");
    for (i= 0; i < PASSENGER_SIZE; i++)
    {
        sum=0;
        for(j = 0; j < FLIGHT_SIZE; ++j) {
            if(*(*(Flight_frequency + i) + j)!=-10){
                sum=sum+(*(*(Flight_frequency + i) +j));
                
                
            }

        }
        if(sum<250){
                    frqflyr[i]='R';
                    printf("\t\t%d \t Regular\n",*(Id_Pass + i));
                    
                }else if((sum>=250)&&(sum<=1150)){
                    frqflyr[i]='S';
                    printf("\t\t%d \t Silver\n",*(Id_Pass + i)) ;
                    
                }else if((sum>1150)&&(sum<2150)){
                    frqflyr[i]='P';
                    printf("\t\t%d \t Platinum \n",*(Id_Pass + i));
                    
                } else{
                    //Do nothing
                }
        
    }
     
    
}

