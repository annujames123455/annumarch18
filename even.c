#include<stdio.h>
int iseven(int);
int main(){
    int num,check;
    printf("enter a number:");
    scanf("%d",&num);
    check=iseven(num);
    if(check==1){
        printf("number is even:");

    }
    else{
        printf("num is odd");

    }
    return 0;
}
int iseven(int num ){
    if(num %2==0){
    return 1;
    }
    else{
    return 0;
    }
    }

