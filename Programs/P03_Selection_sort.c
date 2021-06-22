//Author: AKHIL S BABU

//Implementation of selection sort with an example
//Selection sort iterates all the elements and if the smallest element in the list is found then that number of selection sort 
// Then it is swapped with the first element of the array
//A seperation occurs with sorted an unsorted elements


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
// main program to check the above function
int main()
{
    int arr[]={7,18,55,23,86,99,8,61};
    int len=sizeof(arr)/sizeof(arr[0]);
    sorted(arr,0,len);
    printf("The sorted array is : \n");
    for(int i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}


Output:
The sorted array is : 
7       8       18      23      55      61      86      99

    
    
    
