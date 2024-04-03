#include<stdio.h>
#include<conio.h>
void main()
{
    char s[100],sub[50];
    int i,j,c=0;
    clrscr();
    printf("enter string and substring\n");
    gets(s);
    printf("\n");
    gets(sub);
    printf("\n");
    i=0;
    j=0;
    while(s[i]!='\0')
    {
        if(s[i]!=sub[j])
            i++;
        else if(s[i]==sub[j])
        {
            while(sub[j]!='\0')
            {
                if(s[i]==sub[j])
                {
                    i++;
                    j++;
                    c++;
                }
                else
                {
                    c=0;
                    break;
                }
            }
        }
    }
     if(c!=0)
     printf("\nsubstring  is present \n ");
     else
     printf("\nsubstring  is absent \n ");
    getch();
}