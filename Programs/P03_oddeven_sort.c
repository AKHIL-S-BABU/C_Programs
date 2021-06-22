
//Author: AKHIL S BABU
// Problem on print a set of sorted numbers with both odd and even seperated


//Question

//Write a C program to read a set of numbers and 
//accumulate all odd number to the left of the list and even number to the right of the list.
//The even and odd sub lists are to be in sorted order.
// Input:    7    18    55    23    86    99     8    61
// Output:   7    23    55   61    99     8     18    86



#include<stdio.h>
    
 //defined function to perform the sort
 // Here I used selection sort 
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
//main program
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
    // calling the function sorted with the respective parameters
    sorted(arr,0,a);
    sorted(arr,a,n);
    //You could also make a function to print the numbers
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}


//output

\Users\akhil\Desktop\Programs\"P03_oddeven_sort
Enter the limit of the numbers: 8
Enter the number 1 :7
Enter the number 2 :18
Enter the number 3 :55
Enter the number 4 :23
Enter the number 5 :86
Enter the number 6 :99
Enter the number 7 :8
Enter the number 8 :61
7       23      55      61      99      8       18      86
