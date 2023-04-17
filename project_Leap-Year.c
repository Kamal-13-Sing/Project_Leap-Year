// program to find enter year is leap year or not
#include<stdio.h>
    int main(){
    int yr;
    printf("Enter the Year:");
    scanf("%d",&yr);

    if(yr%400==0)
        printf("%d is a leap year.",yr);

    else if(yr%4==0 && yr%100 !=0)
        printf("%d is a leap year.",yr);

    else
        printf("%d is Not leap year.",yr);
    return 0;
    }
