#include <stdio.h>
int main() {
    //빅O표기법
   int n = 0;//1
   int a = 1;//1
   for (int i = 1; i <= n; i++) { //n + 1(조건을 만족하지 않을 때까지 돌기 때문)
       for (int j = 1; j <= n; i++) { //n(n + 1)
             printf("%d", j);//n^2
        }
         printf("%d", i);//n
   } 
   return 0;//1
}
//총합 2n^2 + 2n + 4