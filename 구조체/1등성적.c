#include <stdio.h>
char ch[101][11];
int sum1[100];
int sum2[100];
int main(){
    int n;
    int su;
    int hap;
    int a , b;
    int a1 , b1;
    int limit = 0;
    int limit2 = 0;
    int max = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
    scanf("%s %d %d %d",&ch[i],&su,&sum1[i],&sum2[i]);
    if(max < su){
    max = su;   
    hap = i;
    }
    }
    a = sum1[hap];
    b = sum2[hap];
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(sum1[i] < sum1[j]){
                int imsi = sum1[i];
                sum1[i] = sum1[j];
                sum1[j] = imsi;
            }
            if(sum2[i] < sum2[j]){
                int imsi = sum2[i];
                sum2[i] = sum2[j];
                sum2[j] = imsi;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(sum1[i]==a&&limit==0) {
            a1 = i;
            limit = 1;
        }
        if(sum2[i]==b && limit2==0) {
            b1 = i;
            limit2 = 1;
        }
        if(limit==1&&limit2==1) break;
    }
    printf("%s %d %d",ch[hap],a1+1,b1+1);
    return 0;
}