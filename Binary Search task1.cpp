#include <iostream>
using namespace std;

class BinarySearch {
public:
    int search(int arr[], int left, int right, int target) {
        while (left <= right) {
            int mid = left + (right - left) / 2;

            
            if (arr[mid] == target)
                return mid;

            if (arr[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
};

int main() {
    BinarySearch binarySearchObj;
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearchObj.search(arr, 0, n - 1, target);
    
    if (result == -1)
        cout << "Element not present" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}

