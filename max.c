#include<stdio.h>
void main(){
    int a[5] = {2,5,67,10,99},max=0;
    int smax=0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(max < a[i])
        max = a[i];

    }
    for(int i =0;i<5;i++){
        if(a[i]<max && smax<a[i])//arr[i] > max2 && arr[i] < max1
        smax = a[i];
    }
    printf("%d",smax);

}