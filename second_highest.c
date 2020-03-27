#include<stdio.h>
#include<string.h>
void main(){
int a[10] = {10,20,30,40,50,60,70,80,90,100};
int max = 0,sec=0,i=0;

while(a[i]!='\0'){
    if(max<a[i]){
        max = a[i];
    }
    i++;
}
for(i=0;a[i]!='\0';i++){
    if(sec < a[i] && sec < max){
        if(a[i]!=max)
        sec = a[i];
    }
    
}
printf("second highest : %d\n",sec);
}