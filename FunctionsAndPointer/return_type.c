#include<stdio.h>
int min(int x,int y){
    if(x>y)
        return x;
    else
        return y; 
}
int main(){
    int a,b;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    int m=min(a,b);
    printf("minimum of %d and %d is: %d",a,b,m);
    return 0;
}