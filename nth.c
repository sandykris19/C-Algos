#include<stdio.h>
#include<string.h>
#define MAX 256
void main(){
char ch[MAX];
printf("Enter string:");
gets(ch);
printf("Enter char:");
int n,i=0,count=0;
char c;
scanf("%c",&c);
printf("Enter occurence:");
scanf("%d",&n);
//printf("%d",n);
for(i=0;ch[i]!='\0';i++){
    if(c == ch[i]){
        count++;
    }
    if(count == n){
    printf("Found at index %d\n",i);
    break;}
    //printf("%d",count);
}
if(count!=n)
printf("Not found\n");

}