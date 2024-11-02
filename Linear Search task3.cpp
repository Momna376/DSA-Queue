#include <iostream>
using namespace std;

class LinearSearch {
public:
    int search(int arr[], int n, int target) {
        for (int i = 0; i < n; i++) {
            // Check if target is present at index i
            if (arr[i] == target)
                return i;
        }
        // Return -1 if target is not found
        return -1;
    }
};

int main() {
    LinearSearch linearSearchObj;
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = linearSearchObj.search(arr, n, target);

    if (result == -1)
        cout << "Element not present" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}

