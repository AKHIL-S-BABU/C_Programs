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
    for(i=0;i<n;i++)
    {
        printf("Enter string %d:",i+1);
        scanf(" %[^\n]%*c",&strn[i]);
    }
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
    for(i=0;i<n;i++)
    {
        strupr(c[i]);
    }
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
    printf("The Short forms are: ");
    for(i=0;i<n;i++)
    {
        printf("%s\n",&c[i]);
    }
   return 0;
}
