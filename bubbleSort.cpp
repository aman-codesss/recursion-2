#include <iostream>

using namespace std;

void print(int* arr,int n){
     cout << "Before" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void sortRecursive(int arr[], int n) {
    // Base case
    if (n == 0 || n == 1)
        return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortRecursive(arr, n - 1);
}


int main() {
    int arr[] = {2, 8, 4, 9, 5};
    int n = 5;


    print(arr,n);


    // Recursive call
    sortRecursive(arr, n);

    // Print array after sorting
    print(arr,n);

    return 0;
}

