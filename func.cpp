
#include<bits/stdc++.h>

using namespace std;

string delete_last(string s)
{
    s.pop_back();
    return s;
}

void Swap(int &a, int &b)
{
    int x = a;
    a = b;
    b= x;

}

int main()
{
    string s;
    //cin >>s;
    int x=4,y=6;

    Swap(x,y);

    cout<<x <<" --->" <<y;

    return 0;
}
