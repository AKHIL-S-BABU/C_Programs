#include<stdio.h>
int sorted(int arr[],int b,int n)
{
    int i,c,min,j;
    for(i=b;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;                
            }
        }
        c=arr[i];
        arr[i]=arr[min];
        arr[min]=c;
        
    }
}
int main()
{
    int n,t,i,arr[50],a;
    printf("Enter the limit of the numbers: ");
    scanf("%d",&n);
    int l=n-1;
    a=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d :",i+1);
        scanf("%d",&t);
        if (t%2==1)
        {
            arr[a]=t;
            a=a+1;
        }
        else if(t%2==0)
        {
            arr[l]=t;
            l=l-1;
        }    
    }
    sorted(arr,0,a);
    sorted(arr,a,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
