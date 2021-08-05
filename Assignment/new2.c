#include <stdio.h>
const int PASSENGER_SIZE=7;
const int FLIGHT_SIZE=6;
void O_F1_6(int arr [], int N);
float O_F2_6(int arr[]);
void O_F4_6 (int arr[][FLIGHT_SIZE], int Id_Pass[], char frqflyr[]);
int O_F3_6 (int arr[], int IdFlight[], int numtrips);
int main()
{
    int IDs_passengers[PASSENGER_SIZE];
    int IDs_flights[FLIGHT_SIZE];
    int Flight_frequency[PASSENGER_SIZE][FLIGHT_SIZE];
    char Freq_flyers[PASSENGER_SIZE];
    int i,j,p,f,pos,flid;
    float avg;
    
    printf("Enter the ID's of %d passengers: \n", PASSENGER_SIZE);
    for (i=0;i<PASSENGER_SIZE;i++)
    {
        scanf("%d", IDs_passengers);
        if(*(IDs_passengers+i)==-11)
        break;
    }
    for (j=i;j<PASSENGER_SIZE;++j)
       *(IDs_passengers+j)=-10;
       
    printf("Enter the ID's of %d flights; \n", FLIGHT_SIZE);
    for (i=0;i<FLIGHT_SIZE;i++)
    {
        scanf("%d", IDs_flights+i);
        if(*(IDs_flights+i)==-11)
        break;
    }
    for (j=i;j<FLIGHT_SIZE;++j)
    *(IDs_flights+j)=-10;
    
    printf("Enter the number of trips for each passenger: \n");
    for(i=0;i<PASSENGER_SIZE;i++)
    {
        if(*(IDs_passengers+i)==-10)
        break;
      else
      {
        printf("Passenger with ID = %d : ", *(IDs_passengers+i));
        O_F1_6(*(Flight_frequency+i),i);
      }
    }
    printf("****************************************************\n");
    printf("Passenger ID\t Average trips\n");
     for(i=0;i<PASSENGER_SIZE;i++)
     {
         avg=O_F2_6(*(Flight_frequency+i));
         printf("%d\t%f\n", *(IDs_passengers+i),avg);
     }
    printf("\n************************************************\n");
    O_F4_6(Flight_frequency, IDs_passengers, Freq_flyers);
    printf("\n************************************************\n");
    printf("Enter the Passenger ID and frequency of trip for a flight: ");
    scanf("%d%d", &p, &f);
    pos=-1;
    for(i=0;i<PASSENGER_SIZE;i++)
    {
        if((*(IDs_passengers+i))==p)
        {
            pos=i;
            break;
        }
    }
    if (pos!=-1)
    {
        flid=O_F3_6(*(Flight_frequency+pos), IDs_flights, f);
        if(flid!=-1)
           printf("the flight ID is %d", flid);
        else
            {
                printf("Required information not found");
            }
    }
    else
        {
                printf("Required information not found");
        }
    printf("\n************************************************\n");
    return 0;
}
void O_F1_6(int arr[], int N)
{
    int i, j;
    for(i=0;i<FLIGHT_SIZE;i++)
      {
          scanf("%d", arr+i);
          if(*(arr+i)==-11)
          break;
      }
    for (j=i;j<FLIGHT_SIZE;++j)
    *(arr+j)=-10;
}
float O_F2_6(int arr[])
{
    int i,sum,c;
    float avg;
    sum=c=0;
    for(i=0;i<FLIGHT_SIZE;i++)
       {
           if(*(arr+i)!=-10)
               {
                   sum=sum+(*(arr+i));
                   c++;
               }
       }
    avg=sum/c;
    return avg;
}
void O_F4_6(int Flight_frequency[][FLIGHT_SIZE],int Id_Pass[],char frqflyr[])
{
    int i,j,sum;
     printf("Passenger ID\t Frequent flyer\n");
     for(i=0;i<PASSENGER_SIZE;i++)
        {
            sum=0;
            for(j=0;j<FLIGHT_SIZE;j++)
               {
                   if(*(*(Flight_frequency+i)+j)!=-10)
                     {
                         sum=sum+(*(*(Flight_frequency+i)+j));
                     }
               }
        }
    if(sum<250)
    {
        frqflyr[i]='R';
         printf("%d\t Regular\n", *(Id_Pass+i));
    }
    else if((sum>=250)&&(sum<=1150))
      {
          frqflyr[i]='S';
          printf("%d\t Silver\n", *(Id_Pass+i));
      }
     else if ((sum>1150)&&(sum<2150))
      {
          frqflyr[i]='P';
          printf("%d\t Platinum\n", *(Id_Pass+i));
      }
    else
    {}
}

int O_F3_6(int arr[], int IdFlight[], int numtrips)
{
    int i;
    int rt=-1;
    for(int i=0;i<FLIGHT_SIZE;i++)
    {
        if(*(arr+i)==numtrips)
         {
             rt=IdFlight[i];
             return rt;
         }
    }
    return rt;
}