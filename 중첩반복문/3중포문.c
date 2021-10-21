#include <stdio.h>
int main() {
   int n = 0;
   int a = 1;
   for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= n; i++) {
            for (int k = 1; k <= n; i++) {
                printf("%d", k);
            }
             printf("%d", j);
        }
         printf("%d", i);
   } 
   return 0;
}