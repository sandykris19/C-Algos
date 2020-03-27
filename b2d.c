#include<stdio.h>
#include<string.h>
#include<math.h>
void main(){
int bnum,rem,res = 0,i=0;
printf("Enter binary:");
scanf("%d",&bnum);
while(bnum>0){
    rem = bnum%10;
    if((rem>=0) && (rem<=7)){
        res = res + rem*pow(8,i);
        bnum = bnum/10;
        i++;
    }
    else
    {
        printf("No cannot be converted into octal\n");
        break;
    }
    
}
printf("%d\n",res);
}