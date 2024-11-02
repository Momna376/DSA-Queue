#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    
    if (n <= 0)
        return 0;
    else
        
        return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    int result = sumArray(arr, n);
    cout << "The sum of elements in the array is: " << result << endl;

    return 0;
}

