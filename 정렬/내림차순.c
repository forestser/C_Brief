# include <stdio.h>

int main()
{
	int arr[100];
	int i,j,n,temp=0;
	
	scanf("%d",&n);
	
	for(i = 0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<n; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
			
		}
	}
	
	
	for(i =0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
