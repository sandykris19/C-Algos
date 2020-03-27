#include<stdio.h>
#include<string.h>
#define MAX 50
void main(){
char a[MAX],b[MAX];
printf("Enter Value:");
gets(a);
printf("Enter Value:");
gets(b);
int i=0;
while(a[i]!='\0')
{
i++;
}
printf("%d\n",i);
int j=0;
while(b[j] != '\0'){
a[i] = b[j];
i++;
j++;
}
a[i]='\0';
puts(a);
}