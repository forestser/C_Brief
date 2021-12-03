#include<stdio.h>
 
 
int main(){
 
    int Score_Buf1[50];
    int Score_Buf2[50];
    char Name_buf[50][50] = {0, };
    
    int i_friendNum;
    scanf("%d",&i_friendNum);
    
    for(int i = 0; i < i_friendNum; i++){
        scanf("%s %d",Name_buf[i],&Score_Buf1[i]);
        Score_Buf2[i] = Score_Buf1[i];
    } // score information input
    
    int temp =0 ;
    for(int i = 0 ; i < i_friendNum-1 ; i ++) {
        for(int j = i+1 ; j < i_friendNum ; j ++) {
            if(Score_Buf2[i] < Score_Buf2[j]) {
                temp = Score_Buf2[j];
                Score_Buf2[j] = Score_Buf2[i];
                Score_Buf2[i] = temp;
            }
        }
    }
    
    for(int i = 0 ; i <  i_friendNum ; i ++) {
        if(Score_Buf1[i] == Score_Buf2[2]){
            printf("%s",Name_buf[i]);
        }
    }
    
    return 0;
    
 
}