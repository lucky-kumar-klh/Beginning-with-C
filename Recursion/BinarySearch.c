#include <stdio.h>

int search (int arr[], int size, int key, int start, int end){

  if ( start > end )   
    return -1;

  int mid = (start + end)/2;

  if ( arr[mid] == key ) 
    return arr[mid];

  else if ( arr[mid] > key )  // end = mid - 1
    return search (arr, size, key, start, mid-1);

  else if ( arr[mid] < key )  // start = mid + 1
    return search (arr, size, key, mid+1, end);

}

int main(){

  int arr[5] = {1,2,3,4,5};
  int key = 0, size = 5;
  int found = search(arr, size, key, 0, size-1); 
  if ( found != -1 )
    printf("%d is Present", found);
  else 
    printf("%d not found", key);

  return 0;
}