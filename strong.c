#include<stdio.h>
#include<string.h>
int fact(int n){
    int sum=1;
    for(int i=n;i>1;i--){
    sum = sum*i;
    }
    return sum;
}
int octal(int deci){
int oct=0,i=1;
while(deci!=0){
    oct += (deci%2)*i;
    deci /= 2;
    i=i*10;
}
return oct;
}
void main(){
int n= octal(12);
printf("%d",n);
}
