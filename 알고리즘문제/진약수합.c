#include <stdio.h>
//자연수 n이 주어지면 자연수 n의 진약수(자기 자신의 제외한 약수)의 합을 구하는 코드
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