#include<stdio.h>
int main()
{
    int n1,n2;
    char opt;
    float result;
    printf("choose an operator (+,-,*,/): \n");
    scanf("%c",&opt);
    printf("enter the first number:\n");
    scanf("%d",&n1);
    printf("enter the second value \n");
    scanf("%d",&n2);
        if(opt=='+'){
        result=n1+n2;
        printf("%d+%d=%.2f",n1,n2,result);
        }
        else if(opt=='-'){
        result=n1-n2;
        printf("%d-%d=%.2f",n1,n2,result);
        }
        else if(opt=='*'){
        result=n1*n2;
        printf("%d*%d=%.2f",n1,n2,result);
        }
        else if(opt=='/'){
            if(n2==0){
            printf("\n divisor cannot be zero, please enter another value:");
            scanf("%d",&n2);
            }
            result=n1/n2;
            printf("%d/%d=%.2f",n1,n2,result);
        }
        else {
        printf("you have entered wrong inputs");
        }
        return 0;
}
r
