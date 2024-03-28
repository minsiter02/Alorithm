/* #include<stdio.h>

int a(int n){
    if(n == 0)
        return 0; 
    else if(n == 1)
        return 1;
    else 
        return a(n-2) + a(n-1);
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n", a(n));
    return 0;
} */
#include<stdio.h>
int main(){
    int a;
    long long int b;
    long long int number[90];

    scanf("%d",&a);
    for(int i = 1; i <= a ; i++){
        if (i == 0){
            number[i] = 0;
            //printf("%lld\n", number[i]);
        }else if (i == 1 || i == 2){
            number[i] = 1;
            //printf("%lld\n", number[i]);
        }else{    
            number[i] = number[i-1] + number[i-2];
            //printf("%lld\n", number[i]);
        }
        b = number[i];
    }
    printf("%lld\n", b);
}