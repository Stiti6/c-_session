
#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
    int minIndex = 0;
    int maxIndex = 0;

    // Find minimum and maximum index
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }

        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap minimum and maximum elements
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, 5};
    int size = 6;

    swapMinMax(arr, size);

    cout << "Array after swapping: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
