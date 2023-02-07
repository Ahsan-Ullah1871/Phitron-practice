#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Create an array to store the input
    int a[n-1];
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    // Iterate through the numbers from 1 to n
    int missing = 0;
    for (int i = 1; i <= n; i++) {
        bool found = false;

        // Check if the current number is in the input array
        for (int j = 0; j < n-1; j++) {
            if (a[j] == i) {
                found = true;
                break;
            }
        }

        // If the current number is not in the input array, it's the missing number
        if (!found) {
            missing = i;
            break;
        }
    }

    cout << "Missing number: " << missing << endl;

    return 0;
}
