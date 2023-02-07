
#include<bits/stdc++.h>

using namespace std;


vector<int> merge_sort(vector<int> a)
{

    if(a.size()<=1)
        return a;

    int mid = a.size()/2;

    vector<int> b;
    vector<int> c;

    for(int i =0; i<mid; i++)
        b.push_back(a[i]);

    for(int i =mid; i<a.size(); i++)
        c.push_back(a[i]);

    vector<int>  sorted_b = merge_sort(b);
    vector<int>  sorted_c = merge_sort(c);

    vector<int>  sorted_a;
    int idx =0 ;
    int idx2 = 0;

    for(int i =0; i<a.size(); i++)
    {
        if(sorted_b.size()==idx)
        {
            if(sorted_a[sorted_a.size()-1] != sorted_c[idx2])
                sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(sorted_c.size()==idx2)
        {
            if(sorted_a[sorted_a.size()-1] != sorted_b[idx])
                sorted_a.push_back(sorted_b[idx]);
            idx++;
        }
        else if(sorted_b[idx]<sorted_c[idx2] && sorted_b[idx]!=sorted_c[idx2] )
        {
            sorted_a.push_back(sorted_b[idx]);
            idx++;
        }
        else
        {
            if(sorted_a[sorted_a.size()-1] != sorted_c[idx2])
                sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }

    return sorted_a;

}


int main()
{
    vector<int>a= {5,1,2,3,8,4};
    vector<int>ans = merge_sort(a);

    for(int i=0; i<ans.size(); i++)
    {
        cout<< ans[i] <<" ";
    }

    return 0;
}
