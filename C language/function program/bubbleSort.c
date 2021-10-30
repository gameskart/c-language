/* Bubble sort code */
#include <stdio.h>
#include <conio.h>
void array_read(int a[], int n)
{
  int i;
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
}

void array_print(int a[], int n)
{
  int i;
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
}

void bubble_sort(int arr[], int n)
{
  int i, j, swap;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
  }
}

int searching(int a[], int n, int key)
{
}

void ins(int a[], int n, int key, int val)
{
}

int main()
{
  int array1[100], array2[100], n, i, j, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  array_read(array1, n);
  bubble_sort(array1, n);
  array_print(array1, n);

  array_read(array2, n);
  bubble_sort(array2, n);
  array_print(array2, n);
  getch();
  return 0;
}