#include<stdio.h>
#include "math.h"
 
int Fn(int n) {
    int i;
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0)
        return 0;
    for (i = 3;i<=sqrt((float) n );i+=2) {
        if (n%i == 0) return 0;
    }
    return 1;
}
 
int main(){
    
    int number;
    scanf("%d",&number);
 
    int a,b;
    a = 0;
    b = 0;
    for(int i = 0; i<=number; i++){
        if(i == 0){continue;}
        else{
            if(number%i == 0){
                if(Fn(i)){
                    if(Fn(number/i)){
                        a = i;
                        b = number/i;
                        break;
                    }
                }
            }
        }
        
    }
    if(a != 0 && b!= 0){
        printf("%d %d",a,b);
    }
    else{
        printf("wrong number");
    }
    return 0;
}