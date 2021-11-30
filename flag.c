/* Zach Zweibach

This program will print a neat little flag based on user input. */
#include <stdio.h>

int main(){
	
	int rows;
	
	printf("How many rows for your star design?\n");
	scanf("%d",&rows);
	
	if(rows>=1)
		{
		int stars;
		
		printf("How many stars on the first row?\n");
		scanf("%d",&stars);
		
		if(stars>=1)
			{
			int spots=stars+stars-1, rowsD=0;
			
			while(rows>0)
				{
				if(rowsD%2==0)
					spots=stars+stars-1;
				else
					spots=stars+stars-2;
					
				while(spots>0)
					{
					if(spots%2==1)
						{
						printf("*");
						spots--;
						}
					else
						{
						printf(" ");
						spots--;
						}
					}
				printf("\n");
				rowsD++;
				rows--;
				}
			}
		else
			printf("You did not enter a valid star amount.");
		}
	else
		printf("You did not enter a valid row amount.");
	
	return 0;
}
