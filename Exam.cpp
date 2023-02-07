
#include<bits/stdc++.h>

using namespace std;



int main()
{
    vector <int>a= {7,2,13,2,11,4};

    //Bubbol sort;

    for(int i=0; i<a.size(); i++)
    {
        cout<<i+1 <<" iteration: \n";

        int last = a.size()-1-i;
        for(int j=0; j<last; j++)
        {
            for(int i=0; i<a.size(); i++)
            {
                cout<<a[i] <<" ";
            }
            cout<<"-->";
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);

            for(int i=0; i<a.size(); i++)
            {
                cout<<a[i] <<" ";
            }

            cout<<"\n";

        }

        cout<<"\n";
    }


    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i] <<", ";
    }
}


