
// NOTE: To apply Binary search an array must be Sorted. 

#include <stdio.h>
int main() {
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; // we have these elements in an Array .
    int element, mid;
    printf("Enter element to find: ");
    scanf("%d", &element); // we have taken input which we will try to find.
    int left=0;
    int right = (sizeof(arr)/sizeof(arr[0]))-1; // here we have initialized the Value that is in the right of maximum element position.

    while (left<=right) // the loop will run until the condition meets.
    {
    mid = (left + right)/2; // Every time loop runs the mid will change.
    if (arr[mid] == element)
    {
        printf("Element Found!\n");
        printf("Position of the element is %d", mid+1); // +1 means the position since Array index starts from 0.
        break;
    }
    else if (element>arr[mid])
    {
        left = mid+1; //  left will be middle point +1 if the element that we are looking is greater then middle point.
    }
    else{
        right = mid-1; // Right will be middle point -1 if the element that we are looking is less then middle point.
    }
    }
    if (left>right) // if element not found this message will show.
    {
        printf("Element not found!\n");
    }
    
    return 0;
}