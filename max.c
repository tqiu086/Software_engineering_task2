// edit by: Tian Qiu (Skye)
#include <stdio.h>
#include <assert.h>

/* This function should return the maximum value in the array a of n elements. 
   We assume n > 0.

   The function has a bug.  You need to:
   (1) Add a test case to main that exposes the bug.
   (2) Fix the bug.
   (3) Submit your changes on GitHub as a pull request */

int max(int n, int *a) {
  assert(n > 0);
  int max = a[n - 1];
  for (int i = n - 2; i >= 0; i --) { // change ">" to ">="
    if (a[i] > max) {
      max = a[i];
    }
  }
    
  return max;
}


int main(int argc, char** argv) {
  int a[] = {6, 2, 3, 4}; 
  /*  the problem of the origional code is, 
      the for loop could not detect the first element
      in the array.
      When changing the first element 1 to 6, then 
      change number 4 in the assert method to 6, it catches
      the failure.
  */
  int max_a = max(4, a);
  printf("max(4, a) = %d\n", max_a);
  assert(max_a == 6);

  int b[] = {7, 3, 5, 3, 7, 9, 4};
  int max_b = max(7, b);
  printf("max(7, b) = %d\n", max_b);
  assert(max_b == 9);
}
