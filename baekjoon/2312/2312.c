#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int* arr = (int*)malloc(sizeof(int) * n);
    scanf("%d",&n);// 반복 횟수
        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]); //케이스 입력받기
    } 
    
    for(int i = 0; i < n; i++){
        // 케이스 

         for(int j = 1; j <= arr[i]; j++){ // 소인수 분해하기
            if(arr[i] % j == 0)
                printf("%d ", j); 
        }
        printf("\n");
    } 
    return 0;
}

/*
14
3   2
4   2
5   4
6   2
7   0
8
2193

*/