#include<stdio.h>
#include <math.h>
void insertionSort(int array[], int n)
{
    int i, count, j,size,temp;
    for (count = 1; count < size; count++) {
        temp = array[count];
        j = count - 1;
 
      
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
    void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int array[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(array) / sizeof(array[0]);
 
    insertionSort(array, n);
    printArray(array, n);
 
    return 0;

}}

