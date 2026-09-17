#include<stdio.h>
int main(){
    int fact = 1;
    int n = 5;
    int i;
    for(i = 1, i<= n; i++;){
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
    }