#include<stdio.h>
void initialize(int* a, int* b){
    for(int i = 0; i < 5; i++){
        *(b + i)  = 1;//changed
        for(int j = 0; j <(*(a + i) + 1) % 5; j++ ){
            *(b + i) = *(b + i) * (*(a + i));//changed
        }
        *(b + i) %= (*(a + i) + 1);//changed
    }
}
int fix(int* a ,int n, int i){
    n = 1;
    for(int j = 0; j <(*(a + i) + 2) % 5; j++ ){
        n = n * (*(a + i));//changed
    }
    n %= (*(a + i) + 2);
    return n;
}
void swap(int* a, int* b) {//changed
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a[5];
    for(int i=0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    int b[5];
    initialize(a, b);
    for(int i = 0; i < 5; i++){
        if(b[i] == a[i]){
            int value = fix(a, b[i], i);
            int *one = &value, *two = &b[i];
            swap(one, two);
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", b[i]);
    }
}
