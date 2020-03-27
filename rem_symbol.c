#include<stdio.h>
#include<string.h>
void main(){
printf("Enter string");
char a[50],temp;

gets(a);
int i,j;
int n = strlen(a);
for( i=0;i<n-1;i++){
    for( j=i+1;j<n;j++){
        if(a[i] > a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        }
    }
}
puts(a);
}