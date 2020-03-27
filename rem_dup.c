#include<stdio.h>
#include<string.h>
void main(){
char a[4]={'b','b','b','c'};
int res[10],count=0,j;
for(int i=0;i<4;i++){
    for(j=0;j<count;j++){
        if(a[i]==res[j])
        break;
    }
    if(j == count){
    res[count] = a[i];
    count++;
    }
}
for(int i=0;res[i]!='\0';i++)
printf("%c ",res[i]);
}
/*
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < count; j++)
    {
      if(a[i] == b[j])
        break;
    }
    if (j == count)
    {
      b[count] = a[i];
      count++;
    }
  
*/