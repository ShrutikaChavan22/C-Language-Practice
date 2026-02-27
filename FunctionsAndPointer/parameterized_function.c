#include<stdio.h>
void OddEven(int no){
   if(no%2==0){
     printf("%d is Even",no);
   }
   else{
     printf("%d is Odd",no);
   }
}
int main(){
    int no;
    printf("Enter Number:");
    scanf("%d",&no);
    OddEven(no);
    return 0;
}