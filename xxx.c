#include<stdio.h>
#include<string.h>
int* parr(int* a,int n)
{
    int b[n];
    for(int i=0;i<n;i++)
    {
    b[i] = a[n-1-i];
    printf("%d ",b[i]);
    }

}
void main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    parr(a,10);
}
