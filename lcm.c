#include<stdio.h>
#include<string.h>
int gcd(int a,int b)
{
int min=a,max=b;
if(a>b){
    min=b;
    max=a;
}
return (max%min==0)?min:gcd(max%min,min);

}
void main(){
    int a[3] = {91,29,19};
    printf("%d",(a[0]*a[1]*a[2])/(gcd(a[0],gcd(a[1],a[2]))));
}