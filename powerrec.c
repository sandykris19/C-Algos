#include<stdio.h>
#include<string.h>
int fact(int n){
    if(n<=1)
    return 1;
    else
    {
        return n*fact(n-1);
    }
    
}
void main(){
printf("%d",fact(2));
}