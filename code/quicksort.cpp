#include <algorithm>
using namespace std;
void quickSort(int arr[],
               int begin,
               int end) {
  int i, j, t, pivot;
  if (begin > end)
    return;

  pivot = arr[begin];
  i = begin;
  j = end;
  while (i != j) {
    while (arr[j] >= pivot && i < j)
      j--;
    while (arr[i] <= pivot && i < j)
      i++;
    if (i < j)
      swap(arr[i], arr[j]);
  }

  arr[begin] = arr[i];
  arr[i] = pivot;
  quickSort(arr, begin, i - 1);
  quickSort(arr, i + 1, end);
}