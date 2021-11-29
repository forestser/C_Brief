# include <stdio.h> 
void p(int a) { 
    printf("%d\n",a); 
    if(a == 1) return; 
    if(a%2 == 1) p(a*3+1);
    else p(a/2); 
    
} 
int main() { 
    int n; 
    scanf("%d",&n);
    p(n); 
    return 0; 
    
}
