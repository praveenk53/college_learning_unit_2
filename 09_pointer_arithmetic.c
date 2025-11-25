#include<stdio.h>
int main()
{
    int arr[] = {5,10,15,20,25};
    int *ptr = arr;
    printf("ptr = %p,*ptr = %d\n", ptr , *ptr); 
    ptr++ ; //move to next element
    printf("after ptr++ : ptr = %p, *ptr = %d\n", ptr , *ptr);
    ptr++ ; //move 2 steps
    printf("after ptr +=2: ptr =%p, *ptr = %d\n", ptr , *ptr);
    return 0;
}