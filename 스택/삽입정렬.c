/* 삽입정렬 : 값의 적절한 위치를 찾아 삽입하는 동작을 반복해가는 정렬 방법 */
#include <stdio.h>
int main()
{
    int i,j,n=4,temp,key;
    int list[4]={4,5,1,2};
    for(i=1; i<n; i++)
    {
        key=list[i];    //key(박스)에 왼쪽에서 2번째 값을 넣음
        for(j=i-1; j>=0 && list[j]>key; j--)    //조건이 j값이 0보다 클 때 "그리고" list[j]값이 key 값보다 클 때
        {
            list[j+1]=list[j]; // 그럴때 j + 1의 값을 j에 넣음(교환아님)
        }
        list[j+1]=key; //for문을 나온 후, key 값이 들어가야 할 곳(교환이 다 끝나 빈 곳)
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",list[i]);
    }
    //출력문
    return 0;
}