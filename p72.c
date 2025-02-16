#include <stdio.h>

int removeDup(int arr[], int n) {
    if (n == 0) return 0;
  
    int j = 0;
    for (int i = 1; i < n - 1; i++) {

          // If a unique element is found, place
          // it at arr[j + 1]
        if (arr[i] != arr[j])
            arr[++j] = arr[i];
    }
  
      // Return the new ending of arr that only
      // contains unique elements
    return j + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Remove duplicates
    n = removeDup(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}