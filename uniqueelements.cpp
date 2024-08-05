#include<iostream>
using namespace std;

void uni(int arr[], int arr1[], int n, int m) {
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        
        for (int j = 0; j < m; j++) {
            if (arr[i] == arr1[j]) {
                isUnique = false;
                break;
            }
        }
        
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 11};
    int arr1[] = {1, 2, 3, 4, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr1) / sizeof(arr1[0]);
    
    uni(arr, arr1, n, m);
    
    return 0;
}
