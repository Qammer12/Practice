void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_j,min_x;
 
   
    for (i = 0; i < n-1; i++)
    {
   
        min_j = i;
        min_x= arr[j];
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_j])
            min_j = j;
 
       
        swap(&arr[min_j], &arr[i]);
    }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
