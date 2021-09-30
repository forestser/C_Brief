/* 선택정렬 : 현재 자료 중 가장 작은 값을 찾아 첫번째 위치로 가져가 놓은 후,
 두번째로 작은 값을 찾아 두번째 위치로 가져다놓는 작업을 반복해가는 정렬 방법 */
#include <stdio.h>
int main()
{
    int i,j,n=4,k,temp;
    int list[4]={4,5,1,2};
    for(i=0; i<n-1; i++)
    {
        k=i; //k를 i의 값과 같게 설정해 비교할 index를 정함
        for(j=i+1; j<n; j++)
        {
            if(list[j]<list[k]) // k번째에 있는 값보다 j번째에 있는 값이 작을 때
            {
                k=j; // 교환할 index를 k에 저장함
            }
        }
        temp=list[i];
        list[i]=list[k];
        list[k]=temp;
        // i의 값과 k의 값을 교환함 (교환식)
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",list[i]);
    }
    // 출력문
    return 0;
}