#include<stdio.h>

int main(){
    char s1[5];
    s1[0] = 'a';
    s1[1] = 'b';

    int length =sizeof(s1)/sizeof(s1[0]);
    printf("%d ", length);
    return 0;
}