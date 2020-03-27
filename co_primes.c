#include<stdio.h>
#include<string.h>
#define MAX 100
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
    int a[10];
    int lcm,x,y;
    printf("enter two no:");
    scanf("%d,%d",&x,&y);
    lcm = (x*y)/gcd(x,y);
    printf("%d\n",lcm);
    /*for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;a[i]!='\0';i++){
        for(int j=i+1;a[j]!='\0';j++){
            if(gcd(a[i],a[j])==1)
            {
                printf("%d %d are coprime\n",a[i],a[j]);
            }
            else
            {
                printf("%d %d are not coprimes\n",a[i],a[j]);
            }
            
        }
    }*/
    

}