#include <stdio.h>
//하노이탑 재귀함수
void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        printf("%d : %c -> %c\n", n, a, c);
    }
    else {
        hanoi(n-1,a,c,b);
        printf("%d : %c -> %c\n", n, a, c);
        hanoi(n-1, b,a,c);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    hanoi(n,'A', 'B', 'C');
    return 0;
}
/* 하노이탑 빅오표기법 = n^2
    n이 3일때 값은 7, 4일때에는 15가 나옴. 이것으로 식이
    n^2-1로 추측할 수 있으며, main함수에서 나온 +2를 하면
    n^2 + 1이 되어 빅오표기법으로 하면 n^2가 됨
*/