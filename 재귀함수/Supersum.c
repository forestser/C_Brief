# include <stdio.h> 
int SuperSum(int k,int n) {
    int i,sum = 0; if(k == 0) return n; 
    for(i = 1; i<=n; i++) {
        sum +=SuperSum(k-1,i);
        }
        return sum; 
    
}
int main() {
    int k,n; 
    while( scanf("%d %d",&k,&n) != EOF) 
    printf("%d\n",SuperSum(k,n));
    return 0;
    }
