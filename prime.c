#include<stdio.h>
int main(){
    int num,limit;
    printf("enter the limit:");
    scanf("%d",&limit);
    for(int i=2;i<limit;i++){
    int flag=0;
for(int j=2;j<i;j++){
    if(i%j==0){
    flag=1;
    break;
    }
    }
    if(flag==0){
    printf("number is prime");
    }
}
return 0;
}