#include<stdio.h>
int main() {
    int min, max;
    int j;
    scanf("%d %d",&min, &max);
    for(int i = min; i<=max; i++){
        for(j = 2; j<=i ; j++ ){
            if(i%j == 0){
                break;
            }
        }
        if(i==j){
            printf("%d\n",i);
        }
    }
}