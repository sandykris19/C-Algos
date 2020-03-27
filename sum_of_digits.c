#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 500
void main(){
    int i,j,n,count=0;
    printf("Enter n : ");
    scanf("%d",&n);
    /*while (n!=0)
    {
        i = n%10;
        count = count+i;
        n = n/10;

    }*/
    count = log10(n)+1;
    printf("%d ",count);
    
    
}