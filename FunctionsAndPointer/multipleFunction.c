#include<stdio.h>
int japan(){
    printf("You are in Japan\n");
}
int england(){
    printf("You are in England\n");
    japan();
}
int india(){
    printf("You are in India\n");
    england();
}
int main(){
    printf("You are in main\n");
    india();
    return 0;
}