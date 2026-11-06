
#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
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
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int size = 7;

    cout << "Unique numbers: ";
    printUnique(arr, size);

    return 0;
}
