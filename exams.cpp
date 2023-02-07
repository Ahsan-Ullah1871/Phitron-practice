
#include<bits/stdc++.h>

using namespace std;


vector<int> quick_sort(vector<int>values)
{

    //base case
    if(values.size()<=1)
    {
        return values;
    }

    int pivot = rand()%values.size();

    vector<int>left_elements;
    vector<int>right_elements;

    for(int i=0;i<values.size();i++)
    {
        if(i==pivot)
            continue;
        if(values[i]<=values[pivot])
          left_elements.push_back(values[i]);
        else
         right_elements.push_back(values[i]);
    }


    vector<int> sorted_left_elements = quick_sort(left_elements);
    vector<int> sorted_right_elements = quick_sort(right_elements);

    vector<int>sorted_values;


    for(int i=0;i<sorted_right_elements.size();i++)
      sorted_values.push_back(sorted_right_elements[i]);

     sorted_values.push_back(values[pivot]);


     for(int i=0;i<sorted_left_elements.size();i++)
      sorted_values.push_back(sorted_left_elements[i]);


    return sorted_values;

}

int main()
{
    int total_values;
    cin>>total_values;
    vector<int>input_values;
    int temp;


    for(int i =0 ;i<total_values;i++)
    {
        cin>>temp;
        input_values.push_back(temp);

    }

    vector<int> sorted_ans = quick_sort(input_values);

   for(int i=0;i<total_values;i++)
    {
       cout<<sorted_ans[i] <<" ";
    }

    return 0;
}
