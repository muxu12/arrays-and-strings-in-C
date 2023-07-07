#include<stdio.h>
int main()
{
	int rows = 3 , col = 3;
	
	int arr1[3][3]= {{1,2,3},{1,2,3},{1,2,3} };
	
	int arr2[3][3]= {{1,2,3},{1,2,3},{1,2,3} };
	
	for(int i=0 ; i<rows ; i++)
	{
		int count = 0;
		int sum = 0;
		int k = 0;
		
		
		for(int j=0 ; j<rows*col ; j++)
		{
			sum+= arr1[i][count] * arr2[count][k];
			count++;
			
			if(count == col)
			{
				count = 0;
				k++;
				printf("%d ",sum);
				sum = 0;
			}
		}
		printf("\n");
	}	
	
}