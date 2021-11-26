#include <stdio.h>

typedef struct typeGear {
	int index;
	int gas;
}GEAR;

//인자로 받은 변수를 스위칭시키는 함수
void Swap(GEAR* A, GEAR* B)
{
	GEAR Temp = *A;
	*A = *B;
	*B = Temp;
}
int Partition(GEAR DataSet[], int Left, int Right)
{
	int First = Left;
	int Pivot = DataSet[First].index;

	++Left;

	while (Left <= Right)
	{
		while (DataSet[Left].index <= Pivot && Left < Right)
			++Left;
		while (DataSet[Right].index >= Pivot && Left <= Right)
			--Right;
		if (Left < Right)
			Swap(&DataSet[Left], &DataSet[Right]);
		else
			break;
	}

	//
	Swap(&DataSet[First], &DataSet[Right]);

	return Right;
}


void QuickSort(GEAR DataSet[], int Left, int Right)
{
	
	if (Left < Right)
	{
		
		int Index = Partition(DataSet, Left, Right);
		QuickSort(DataSet, Left, Index - 1);
		QuickSort(DataSet, Index + 1, Right);
	}
}

int main() {
	GEAR gears[100];

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &gears[i].index, &gears[i].gas);
	QuickSort(gears, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", gears[i].index, gears[i].gas);

}