#include<iostream>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;
int x =5 ;

int sum(int a, int b )
{

    return a+b*2;
}


namespace extra
{
int x =9;

int sum(int a, int b )
{

    return a+b;
}

}

int main()
{

    int s = extra::sum(1,2);

    cout<<s;

    return 0;
}
