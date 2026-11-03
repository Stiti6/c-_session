
#include <iostream>
using namespace std;

int main() {

    int arr[] = {8, 15, 2, 30, 6};
    int n = 5;

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {

        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }

        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    cout << "Largest Number: " << arr[maxIndex] << endl;
    cout << "Largest Index: " << maxIndex << endl;

    cout << "Smallest Number: " << arr[minIndex] << endl;
    cout << "Smallest Index: " << minIndex << endl;

    return 0;
}
