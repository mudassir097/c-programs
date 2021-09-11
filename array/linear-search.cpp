#include <stdio.h>
#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{

 for (int i = 0; i < n; i++)
 {
  if (arr[i] == key)
  {
   return i;
  }
 }
 return -1;
}

int main()
{
 int arr[50] = {2, 5, 21, 64, 25, 35, 85, 34, 114, 43, 23}, n, key;

 n = sizeof(arr) / sizeof(int);

 cout << "enter the key to be found";
 cin >> key;

 int index = linearsearch(arr, n, key);
 if (index != -1)
  cout << "the element is found at index " << index;
 else
  cout << "element not found";

 return 0;
}