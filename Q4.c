#include <stdio.h>
#include <stdlib.h>


#include<time.h>

#define MAX 1000000

int a[MAX] = {0};

void printArray(int*, int);

//a
void insertItemAtLast(int a[], int n, int key) {
  a[n] = key;
  return;
}

//b
void insertItemAtFront(int a[], int n, int key) {
  for (int i = n; i > 0; i--)
    a[i] = a[i - 1];
  a[0] = key;
  return;
}

//c
void insertItemAtIndex(int a[], int n, int i, int key) {
  for (int x = n; x > i; x--)
    a[x] = a[x - 1];
  a[i] = key;
  return;
}

//d
void deleteItemFromLast(int a[], int * n) {
  -- * n;
  return;
}

//e
void deleteItemFromFirst(int a[], int n) {
  for (int x = 1; x < n; x++)
    a[x - 1] = a[x];
  return;
}

//f
void deleteItemFromIndex(int a[], int n, int i) {
  for (int x = i; x < n - 1; x++) {
    a[x] = a[x + 1];
  }
}

//g
int findItemUnsortedAsc(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    if (a[i + 1] < a[i])
      return i + 1;
  }
  return -1;
}

int findItemUnsortedDesc(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i + 1] > a[i])
      return i + 1;
  }
  return -1;
}

//h
int findItemSortedAsc(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    if (a[i] < a[i + 1])
      return i;
  }
  return -1;
}
