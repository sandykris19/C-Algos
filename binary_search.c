#include<stdio.h>
#include<string.h>
void main(){
int low=0,high=9,length,n,count=0,mid,a[10]={21,34,57,81,97,112,124,132,159,201};
printf("Enter number:");
scanf("%d",&n);
while(low <= high){
    mid = (low+high)/2;
    if(a[mid] == n){
        count++;
        printf("Found %d at index %d\n",n,mid);
        break;        
    }
    else if (n<a[mid]){
        high = mid - 1;
    }
    else if (n > a[mid]){
        low = mid +1;
    }

}
if(count!=1)
printf("%d not found\n",n);


}