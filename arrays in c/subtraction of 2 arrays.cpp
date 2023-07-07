#define rows 2

#define col  2

#include<stdio.h>
int main()
{
	

	int arr1[2][2] = { {4,2},{5,2} };
	
	int arr2[2][2] = { {3,2},{2,2} };
	
	int result = 0;
	
	for(int i=0 ; i<rows ; i++)
	{
		for(int j=0 ; j< col ;j++)
		{
			result = arr1[i][j] - arr2[i][j];
			printf("%d ",result);	
		}
		
		printf("\n");
	}
}