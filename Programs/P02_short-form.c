Implement the following scenario using C programming language.
The user has to read various abbreviations from the keyboard and construct
acronyms for the phrases entered (you may avoid the prepositions in the
phrases read). The Acronyms must be displayed in the sorted order and must
be displayed in capital letters.
*
*
*
*
*
*Test case
Input
World Health Organization
American standard code for information interchange
Do it yourself
As soon as Possible
Laugh Out Loud

Output
ASCII
ASAP
DIY
LOL
WHO
******
*******
********

#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i,k,j,n;
    char d[10];
    char strn[15][50];
    char c[15][50];
    printf("Enter the number of strings:");
    scanf("%d",&n);
    //to enter the string from input into a 2D array
   
    for(i=0;i<n;i++)
    {
        printf("Enter string %d:",i+1);
        scanf(" %[^\n]%*c",&strn[i]);
    }
    
    //split the words in each sentence and then taking only the first alpabet of each word
    
    for(i=0;i<n;i++)
    {
        int k=1;
        c[i][0]=strn[i][0];
        for(j=0;strn[i][j]!='\0';j++)
        {
            if (strn[i][j]==' ' && strn[i][j+1]!=' ' && strn[i][j+1]!='\0')
            {
                c[i][k]=strn[i][j+1];
                k++;
            }
        
        }
        c[i][k]='\0';
    }
    
    //to make the alphabet in UPPERCASE i used strupr
    
    for(i=0;i<n;i++)
    {
        strupr(c[i]);
    }
    
    //to sort the array of alphabet in alphabetic order
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(c[j],c[j+1])>0)
            {
                strcpy(d,c[j]);
                strcpy(c[j],c[j+1]);
                strcpy(c[j+1],d);
            }
        }
    }
    
    // at last print the alphabets in the array
    printf("The Short forms are: ");
    for(i=0;i<n;i++)
    {
        printf("%s\n",&c[i]);
    }
   return 0;
}
