#include <stdio.h>
#include <iostream>
using namespace std;
int arrayreverse(int arr[], int n)
{
 for (int i = n; i >= 0; i--)
 {
  cout << arr[i] << " ";
 }

 return -1;
}

int main()
{
 int arr[] = {10, 2, 60, 33, 21, 7, 85, 23, 56, 14, 10};
 int n;
 n = sizeof(arr) / sizeof(int);

 arrayreverse(arr, n);
 return 0;
}