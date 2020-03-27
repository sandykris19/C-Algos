#include<stdio.h>
#include<string.h>
void main(){
char a[10],b[10],n=0,i,j,k;
printf("1:");
gets(a);
printf("2:");
gets(b);

//To find length of the string
i = strlen(a);
printf("Length = %d\n",i);

//To convert to lower & upper case
printf("%s\n",strlwr(a));
printf("%s\n",strupr(b));

//To concat two strings
printf("%s\n",strcat(a,b));

//To compare two strings if returns 0 true else false
printf("%d\n",strcmp(a,b));

//To copy a string
printf("%s\n",strcpy(a,b));

}