#include <iostream>
using namespace std;

// Partition Function
 // Choose last element as pivot
 // Index of smaller element
 // Traverse the array
 // Place pivot at its correct position

// Quick Sort Function
 // Partition the array
 // Sort left part
 // Sort right part

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low, int high){
    if (low < high){
       int pivotIndex = partition(arr, low, high);
       quickSort(arr, low, pivotIndex - 1);
       quickSort(arr, pivotIndex + 1, high);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}