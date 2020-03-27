#include<stdio.h>
#include<string.h>
void main(){
int i,j,n,count=1,nrr[20];
char a[20],arr[20];
printf("Enter string:");
gets(a);
arr[0] = a[0];
for(i=0;a[i]!='\0';i++){
    for(j=0;arr[j]!='\0';j++){
        if(a[i]!=arr[j]){
            
            count++;
        }
    }
}
for(i=0;arr[i]!='\0';i++){
printf("%c",arr[i]);
}
}