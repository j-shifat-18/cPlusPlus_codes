#include<stdio.h>
#include<conio.h>


int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s",&name);

    for (int i=1;i<=100;i++)
    {
         printf("I LOVE YOU %s \n",name);

    }

    getch();
}

