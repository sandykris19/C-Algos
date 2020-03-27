#include<stdio.h>
#include<string.h>
#include<math.h>
void arm(int n);
void arm(int n)
{
    for(int i=10;i<=n;i++){
        int temp=i,temp1=i,count=0,rem,res=0;
        while(temp1!=0){
            count++;
            temp1= temp1/10;
        }
        while(temp!=0){
            rem = temp%10;
            res = res + pow(rem,count);
            temp = temp/10;
        }
        if(i==res)
        printf("%d ",i);
    }
}

void main(){
    arm(100000000);
}


