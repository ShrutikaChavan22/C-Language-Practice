#include<stdio.h>
#include<math.h>
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping value of a and b:");
    printf("%d , %d",a,b);
}
int main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}