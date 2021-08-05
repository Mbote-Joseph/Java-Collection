#include <stdio.h>
#include <stdlib.h>

#define PASSENGER_SIZE (sec_num+3)
#define FLIGHT_SIZE sum_dig(std_id)

int sec_num = 07;
int std_id  = 98794;

int sum_dig(int x)
{
        int num=x,res=0;
        while(num>0)
        {
                res += num%10;
                num /= 10;
        }
        return res;
}

void O_F1(int N,int arr[])
{
        int inp=0,flag=1;
        for(int i=0;i<N;i++)
        {
                if(inp==-9)
                        flag = 0;
                
                if(flag)
                {
                        scanf("%d",&inp);
                        arr[i] = inp;
                }
                else
                {       
                        arr[i]=-10;
                }
        }
}

float O_F2(int N,int arr[])
{
        int count=0;
        float avg=0;
        
        for(int i=0;i<N;i++)
        {       
                if(arr[i]!=-9 && arr[i]!=-10)
                {
                        avg += arr[i];
                        count += 1;
                }
        }
        avg /= count;
        
        return avg;
}

int main(int argc,char**argv)
{
        int IDs_passengers[PASSENGER_SIZE],IDs_flights[FLIGHT_SIZE]; 
        int Flight_frequency[PASSENGER_SIZE][FLIGHT_SIZE];
        char Freq_flyers[PASSENGER_SIZE];
        
        printf("Enter IDs of %d Passengers:\n",PASSENGER_SIZE);
        O_F1(PASSENGER_SIZE,IDs_passengers);
        
        printf("Enter IDs of %d Passengers:\n",FLIGHT_SIZE);
        O_F1(FLIGHT_SIZE,IDs_flights);
        
        printf("Enter Number of Trips for each Passenger:\n");
        for(int i=0;i<PASSENGER_SIZE;i++)
        {
                if(IDs_passengers[i]!=-9 && IDs_passengers[i]!=-10)
                {
                        printf("For Passenger with ID = %d :\t",IDs_passengers[i]);
                        O_F1(FLIGHT_SIZE,Flight_frequency[i]);
                }
        }
        
        printf("-------------------------------------------------------\n\n");
        
        printf("\tPassenger ID\tAverage Trips\n");
        printf("     --------------     ------------------\n");
        for(int i=0;i<PASSENGER_SIZE;i++)
        {
                if(IDs_passengers[i]!=-9 && IDs_passengers[i]!=-10)
                {
                        printf("\t %d \t\t %f\n",IDs_passengers[i],O_F2(FLIGHT_SIZE,Flight_frequency[i]));
                }
        }
        
        printf("\n-------------------------------------------------------\n");
        
        return 0;
}