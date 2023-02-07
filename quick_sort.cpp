
#include<bits/stdc++.h>

using namespace std;


vector<int> quick_sort(vector<int>a)
{

    //base case
    if(a.size()<=1)
    {
        return a;
    }

    int pivot = rand()%a.size();

    vector<int>b;
    vector<int>c;

    for(int i=0;i<a.size();i++)
    {
        if(i==pivot)
            continue;
        if(a[i]<=a[pivot])
          b.push_back(a[i]);
        else
         c.push_back(a[i]);
    }


    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);

    vector<int>sorted_a;


     for(int i=0;i<sorted_c.size();i++)
      sorted_a.push_back(sorted_c[i]);

     sorted_a.push_back(a[pivot]);

     for(int i=0;i<sorted_b.size();i++)
      sorted_a.push_back(sorted_b[i]);



    return sorted_a;

}

int main()
{
   int b;
    cin>>b;

    vector<int>numbers(b);
    for(int i=0;i<b;i++)
      cin>>numbers[i];

    vector<int>ans = quick_sort(numbers);

   for(int i=0;i<ans.size();i++)
    {
       cout<< ans[i] <<" ";
    }

    return 0;
}
