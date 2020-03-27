#include<stdio.h>
#include<string.h>
void main(){
printf("::");
char a[10],b[10];
int i,j,k,n;
gets(a);
n=strlen(a);
j=0;
for(i=n-1;i>=0;i--)
{
    b[j] = a[i];
    j++;
}
k=strcmp(a,b);
if(k==0)
printf("They are same");
else
printf("They are not same");
puts(b);
}