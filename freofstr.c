#include<stdio.h>
#include<string.h>
#define MAX 100
void main(){
int fre[26],i,j,k;
char sg[MAX];
printf("Enter string:");
gets(sg);
for(i=0;i<26;i++){
    fre[i] = 0;
}
k = strlen(sg);
for(i=0;i<k;i++){
    if(sg[i] >= 'a' && sg[i] <='z')
    fre[sg[i]-97]++;
}
for(i=0;i<26;i++)
{   
    while(fre[i]!=0){
    printf("%c = %d\n",i+97,fre[i]);
    break;
    }
}

}