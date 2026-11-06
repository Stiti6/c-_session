
#include <iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2) {

    bool found = false;

    for (int i = 0; i < size1; i++) {

        for (int j = 0; j < size2; j++) {

            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (found == false) {
        cout << "No intersection found";
    }
}

int main() {

    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int size1 = 3;
    int size2 = 3;

    intersection(arr1, size1, arr2, size2);

    return 0;
}
