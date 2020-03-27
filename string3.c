#include<stdio.h>
#include<string.h>
void main(){
char a[10],b[10];
printf("::");
gets(a);
printf("::");
gets(b);
int i=0,count=0;
for(i=0;i<strlen(a);i++)
{
    if(a[i] == b[i])
    {
        count++;
    }
}
if(count == strlen(a))
printf("They are same");
else
{
    printf("They are not same");
}
if (/* condition */)
{
    /* code */
}

}