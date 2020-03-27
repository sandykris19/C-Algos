#include<stdio.h>
#include<string.h>
void main(){
int num;
printf("Enter Value:");
scanf("%d",&num);
int sum=0,rem;
int temp=num;
/*while(num>0){
    rem = num%10;
    sum = sum+rem;
    num = num/10;
}
if(temp%sum==0){
    printf("Harshad Number %d\n",sum);
}
else
{
    printf("Not an Harshad Number\n");
}*/
if(((num*num)%10)==num)
{
printf("Amorphic no");
}
}