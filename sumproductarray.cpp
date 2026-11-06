
#include <iostream>
using namespace std;

void calculate(int arr[], int size) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}

int main() {
    int arr[] = {2, 3, 4, 5};
    int size = 4;

    calculate(arr, size);

    return 0;
}
