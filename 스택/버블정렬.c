/*버블 정렬 : 인접한 두 값을 비교하며 값에 크기에 따라 위치 교환을 반복하면서 정렬하는 방법*/
#include <stdio.h>
int main()
{
    int i,j,n=4,temp;
    int list[4]={4,5,1,2};

    for(i=n-1; i>0; i--) // i 는 n - 1(0번지부터 시작하니 마지막 배열의 값이 n - 1일 것이다)
    {
        for(j=0; j<i; j++)
        {
            if(list[j]>list[j+1]) // j의 값이 j + 1의 값보다 클 때 (바로 옆에 있는 두 값을 비교함)
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
                // 교환식
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",list[i]);
    }
    // 출력문
    return 0;
}