#include <stdio.h>
// Binary search function.
int binary_search(int arr[],int lower,int upper,int num)
{
    int mid = (lower+upper)/2;
    if(num==arr[mid]) return mid;
    else if(num<arr[mid]) upper = mid - 1;
    else lower = mid + 1;

    // If lower > upper it means element doesnot exist in array. So return -1.
    if(lower>upper) return -1; 
    // Else call the binary search function with new lower and upper values.
    else binary_search(arr,lower,upper,num);
}

int main()
{
    int size;
    // Step-1 Scanning the size of the array.
    printf("Please enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    // Step-2 Scanning the array.
    printf("Please enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    // Step-3 Scanning the number to search.
    int num;
    printf("Please enter the number to search: ");
    scanf("%d",&num);
    // Step-4 Declaring the initial lower and upper values.
    int lower=0,upper=size-1;
    // Step-5 Using a flag variable to store the position of requires number.
    int flag = binary_search(array,lower,upper,num);
    // Step-6 Printing the postion stores in flag variable.
    if(flag == -1) printf("The element does not exist in array.");
    else printf("The element is present in %d position.",flag);
    return 0;
}