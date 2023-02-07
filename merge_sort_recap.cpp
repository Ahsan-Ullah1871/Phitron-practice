#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int arr[], int low, int high, int k) {
    if (low > high)
        return false;

    int mid = (low + high) / 2;
    if (arr[mid] == k) {
        // Check if there is another occurrence of k in the left or right
        if ((mid > 0 && arr[mid - 1] == k) || (mid < high && arr[mid + 1] == k)) {
            return true;
        }
    }

    if (arr[mid] >= k) {
        return binarySearch(arr, low, mid - 1, k);
    }
    else {
        return binarySearch(arr, mid + 1, high, k);
    }
}


int factorial(int value)
{
    if(value<=1)
        return 1;
    return value*factorial(value-1);
}

  vector<int>coins={1,3,4};

int coin_change(int n)
{

    if(n==0)
        return 0;

    int ans = 1000000;
    for(int i=0;i<coins.size();i++)
    {
        if(n>=coins[i])
        {
            ans = min(ans,1+coin_change(n-coins[i]));
        }
    }

    return ans;


}

int main() {
//    int n;
//    cin >> n;
//
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    int k;
//    cin >> k;
//
//    if (binarySearch(arr, 0, n - 1, k)) {
//        cout << "YES" << endl;
//    }
//    else {
//        cout << "NO" << endl;
//    }

cout<<coin_change(6);

    return 0;
}
