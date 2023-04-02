#include <stdio.h>
int main()
{
  int i, low, high, mid, n, k, array[100];
  printf("Enter total number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
  scanf("%d", &array[i]);
  printf("value to be find\n");
  scanf("%d", &k);
  low = 0;
  high = n - 1;
  mid = (low + high) / 2;
  while (low <= high)
  {
    if (array[mid] < k)
      low = mid + 1;
    else if (array[mid] == k)
    {
      printf("%d founded at %d location", k, mid + 1);
      break;
    }
    else
      high = mid - 1;
    mid = (low + high) / 2;
  }
  if (low > high)
    printf("Not found! %d isn't present in the list", k);
  return 0;
}