
#include<bits/stdc++.h>

using namespace std;



int main()
{
    int i,k;
    cin>>i >>k;

    vector <int>a(i);

    for(int j = 0;j<i;j++)
    {
        cin>>a[j];

    }



    int low = 0 , high = i-1;

    while(low<=high)
    {

        int mid = (low+high)/2;
        if(a[mid]==k)
        {
          cout<<"YES";
          break;
        }
        if(a[mid]<k)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return 0;
}


/*
10 5
1 2 3 4 5 6 7 8 9 10
*/
