# include <stdio.h> # include <stdlib.h>
int main() { 
    int n,i,j,cnt=0;
    scanf("%d",&n); 
    int *arr1 = (int*)malloc(n * sizeof(int)); 
    int *arr2 = (int*)malloc(500000 * sizeof(int));
    for(i = 0 ;i <n; i++) { 
        scanf("%d",&arr1[i]);
        ++arr2[arr1[i]];
        } for(i = 0; i<500000; ++i) { 
            if(arr2[i] > 0)
            arr2[i] = cnt++; 
            
        } for(i = 0; i<n; i++) {
            printf("%d ",arr2[arr1[i]]); 
            
        } free(arr1);
        free(arr2);
        return 0; 
    
}
