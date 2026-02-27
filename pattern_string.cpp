#include<stdio.h>
main()
{
	int i , j = 0;
	char str[] = "C PROGRAMMING|";
	for(i=0 ; i<12 ; i++)
	{
		j = i+1;
		printf("%-12.*s\n",j,str); 
	}
	printf("_____________\n");
	printf("_____________ \n");
	printf("\n");
	for(i=12 ; i>0; i--)
	{
		j = i+1;
		printf("%-12.*s\n",j,str); 
	}
	
	
	
}
