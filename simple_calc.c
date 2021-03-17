#include<stdio.h>
#include<conio.h>
int main()
{
    int operation,firstNum,secondNum,result;
    char option;
    do{
    printf("\nWHAT OPERATION DO YOU WANT TO PERFORM: 1, 2, 3 or 4?");
    printf("\n1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n\n>>");
    scanf("%d",&operation);
    if (operation<5 && operation>0){
        printf("Enter first number:\n>>");
        scanf("%d",&firstNum);
        printf("Enter second number:\n>>");
        scanf("%d",&secondNum);
        switch(operation)
        {
            case 1:result=firstNum+secondNum;
                printf("The Sum = %d",result);
                break;
            case 2:result=firstNum-secondNum;
                printf("The Difference = %d",result);
                break;
            case 3:result=firstNum*secondNum;
                printf("The Multiplication = %d",result);
                break;
            case 4:result=firstNum/secondNum;
                printf("The Quotient = %d",result);
                break;
            default:printf("Wrong operation selected!");
        }
    }else{
    printf("Wrong  operation!!");}
    printf("\nDo you want to continue y/n?\n>>");
    option=getche();
    }while(option=='y');
    getch();
    return 0;
}
