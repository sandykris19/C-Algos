#include<stdio.h>
#include<string.h>
void square(int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c ",'*');
        }
        printf("\n");
    }
}
void rectangle(int l,int b){
        for(int i=0;i<b;i++){
        for(int j=0;j<l;j++){
            printf("%c ",'*');
        }
        printf("\n");
    }
}
void hrectangle(int l,int b){
        for(int i=0;i<b;i++){
        for(int j=0;j<l;j++){
            if(i==0 || j==0 || j==l-1 || i==b-1)
            printf("%c ",'*');
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}
void hsquare(int n)
{
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n)
            printf("* ");
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}

void main(){
//square(5);
//rectangle(10,4);
//hrectangle(10,4);
//hsquare(5);
}