#include<stdio.h>
#include<string.h>

int main(){
  int n = 10, i , a=0, b = 1, next;
  printf("fibonacci series:");
  for(i = 0; i<n;i++){
    printf("%d", a);
    next = a+b;
    a = b;
    b = next;
  }
  return 0;
}