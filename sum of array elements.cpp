#include <iostream>
using namespace std;

int main() {
    int arr[100], n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];  
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}

