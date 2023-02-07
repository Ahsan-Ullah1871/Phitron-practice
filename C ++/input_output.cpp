#include<iostream>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //string s;

    ///cin>>s;

    //getline(cin,s);
    //cout<<s ;

    // ofstream of;
    //of.open("input.txt");

    ifstream ifs;
    ifs.open("input.txt");

    int x;
    int y;

    ifs >> x >> y;

    cout <<x","<<y;

ifs.close();

    return 0;
}
