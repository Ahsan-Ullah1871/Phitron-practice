#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

     for (int i = 1; i <= n; i++) {
        sum ^= i;
     }



    int input;
    for (int i = 0; i < n-1; i++) {
        cin >> input;
        sum ^= input;

    }


    cout << sum << endl;

    return 0;
}
