#include<stdio.h> 
#include<cs50.h>

int main(void) 
{ 
    string name1=get_string("What is your name ?");
    printf("My name is : %s\n",name1);
	char name[25]; 
	printf("What is your name ?"); 
    scanf("%[^\n]*c",name); 
	 
	printf("Welcome , %s",name); 
	 
} 