#include <stdio.h>
int main() {
    int n, m;
    scanf("%d",&n);
    x(n);
    return 0;
}

int x(int n) {
    int r = 0;
     for(int i = 1; i < n; i++) {
         if(n % i == 0) {
             printf("%d ", i);
             r += i;
					 if(n / 2 == i) {
						 break;
					 }
					 printf("+ ");
         }
     }
	printf("= %d", r);
     return 1;
}