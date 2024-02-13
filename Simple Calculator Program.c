#include<stdio.h>
#include<conio.h>
double calc(int a,int b,int op);
int main()
{
    int a,b,op;
    printf("Please Choose The Operation: \n");
    printf("1- Add\n");
    printf("2- Subtract\n");
    printf("3- Multiply\n");
    printf("4- Divide\n");
    printf("5- And\n");
    printf("6- Or\n");
    printf("7- Not\n");
    printf("8- Xor\n");
    printf("9- Reminder\n");
    printf("10- Increment\n");
    printf("11- Decrement\n");
    scanf("%d", &op);
    if (op == 1)
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);
    }
    else if(op == 2)
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);
    
    }
    else if(op == 3)
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);
    
    }
    else if(op == 4)
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);
    
    }
    else if(op == 5)
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);
    }
    else if(op == 6)
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);
    }
    else if(op == 7)
    {
        printf("Enter One Number: ");
        scanf("%d", &a);
    }
    else if(op == 8)
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);
    }
    else if(op == 9)
    {
        printf("Enter Two Numbers: ");
        scanf("%d %d", &a, &b);
    }
    else if(op == 10)
    {
        printf("Enter One Numbers: ");
        scanf("%d", &a);
    }
    else if(op == 11)
    {
        printf("Enter One Numbers: ");
        scanf("%d", &a);
    }
    else
    {
        printf("Invalid Input");
    }
    calc(a,b,op);
    getch();
}
double calc(int a,int b,int op)
{
    int sum,sub,mult,and,or,not,xor,reminder,increment,decrement;
    float divide;
    switch(op)
    {
        case 1:
        {
            sum = a + b;
            printf("The Answer is: %d",sum);
            break;
        }
        case 2:
        {
            sub = a - b;
            printf("The Answer is: %d",sub);
            break;
        }
        case 3:
        {
            mult = a * b;
            printf("The Answer is: %d",mult);
            break;
        }
        case 4:
        {
            divide = a / b;
            printf("The Answer is: %d",divide);
            break;
        }
        case 5:
        {
            and = a & b;
            printf("The Answer is: %d",and);
            break;
        }
        case 6:
        {
            or = a | b;
            printf("The Answer is: %d",or);
            break;
        }
        case 7:
        {
            not = ~a;
            printf("The Answer is: %d",not);
            break;
        }
        case 8:
        {
            xor = a ^ b;
            printf("The Answer is: %d",xor);
            break;
        }
        case 9:
        {
            reminder = a % b;
            printf("The Answer is: %d",reminder);
            break;
        }
        case 10:
        {
            increment = a++;
            printf("The Answer is: %d",increment);
            break;
        }
        case 11:
        {
            decrement = a--;
            printf("The Answer is: %d",decrement);
            break;
        }
    }
}