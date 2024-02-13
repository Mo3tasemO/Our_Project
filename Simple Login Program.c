#include<stdio.h>
#include<conio.h>
//Users Information
    char User1[] ="Ahmed";
    int ID1 = 1234;
    int Pass1 = 7788;
    char User2[] ="Amr";
    int ID2 = 5678;
    int Pass2 = 5566;
    char User3[] ="Wael";
    int ID3 = 9870;
    int Pass3 = 1122;
int main()
{
    int id,pass;
    int max =3,tr=1;
    printf("Please Enter Your ID: ");
    scanf("%d",&id);
    if(id == ID1)
    {
        printf("Please Enter Your Password: ");
        scanf("%d", &pass);
        if(pass == Pass1)
        {
            printf("Welcome %s\n", User1);
        }
        else
        {
            printf("Incorrect password you have 3 tries\n");
            while(tr<=max)
            {
                if(pass == Pass1)
                {
                    printf("Welcome %s", User1);
                    break;
                }
                else
                {
                    printf("Try again: ");
                    scanf("%d", &pass);
                    tr++;
                }
            }
        }
    }
    else if(id == ID2)
    {
        printf("Please Enter Your Password: ");
        scanf("%d", &pass);
        if(pass == Pass2)
        {
            printf("Welcome %s\n", User2);
        }
        else
        {
            printf("Incorrect password you have 3 tries\n");
            while(tr<=max)
            {
                if(pass == Pass2)
                {
                    printf("Welcome %s", User2);
                    break;
                }
                else
                {
                    printf("Try again: ");
                    scanf("%d", &pass);
                    tr++;
                }
            }
        }
    }
    else if(id == ID3)
    {
        printf("Please Enter Your Password: ");
        scanf("%d", &pass);
        if(pass == Pass3)
        {
            printf("Welcome %s\n", User3);
        }
        else
        {
            printf("Incorrect password you have 3 tries\n");
            while(tr<=max)
            {
                if(pass == Pass3)
                {
                    printf("Welcome %s", User3);
                    break;
                }
                else
                {
                    printf("Try again: ");
                    scanf("%d", &pass);
                    tr++;
                }
            }
        }
    }
    else
    {
        printf("You are not registered");
    }
    getch();
}