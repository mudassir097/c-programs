
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
 int low = 0, mid, high = n - 1;

 //sort(arr, arr + n);
 for (int i = 0; i < n; i++)
 {
  mid = (low + high) / 2;
  if (arr[mid] == key)
   return mid;
  else if (arr[mid] > key)
   high = mid;
  else
   low = mid;
 }

 return -1;
}

int main()
{
 int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n, key;
 n = sizeof(arr) / sizeof(int);
 cout << n;
 cout << "enter the key to be found";
 cin >> key;
 int index = binarysearch(arr, n, key);

 if (index != -1)
  cout << "the element is found at index " << index;
 else
  cout << "element not found";

 return 0;
}