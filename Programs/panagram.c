
//A pangram or holoalphabetic sentence is a sentence using every letter of a given alphabet at least once.
//The best-known English pangram is "The quick brown fox jumps over the lazy dog".


#include<conio.h>
int main()
{
    int n=0;
    char S[100]="The Quick Brown Fox Jumps OverThe Lazy Dog ";
    int arr[26]={0},i;
    int c=0;
    
    for(i=0;S[i]!='\0';i++)
    {
        if('a'<=S[i] && S[i]<='z')
        {
            n=S[i]-'a';
            c=c+!arr[n];
            arr[n]=1;
            //printf("%d\t",n+1);
        }
        else if('A'<S[i] && S[i]<'Z')
        {
            n=S[i]-'A';
            c=c+!arr[n];
            arr[n]=1;
            //printf("%d\t",n+1);
        }
   
            
    }
printf("Count= %d",c);
    return 0;
}
