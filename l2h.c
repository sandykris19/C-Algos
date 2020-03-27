#include<stdio.h>
#include<string.h>
#define MAX 50
void main(){
char sg[MAX];
printf("eNTER string:");
gets(sg);
int n=strlen(sg);
for(int i=0;i<n;i++){
    if(sg[i] >= 'A' && sg[i] <= 'Z')
        sg[i] = sg[i] + 32;
}
puts(sg);
}