
#include<bits/stdc++.h>

using namespace std;




int main()
{
   int a,b,c;
   cin >> a >>b >> c;

   int max_v = max({a,b,c});
   int min_v = min({a,b,c});
   int add_v = a+b+c;
   int multi_v = a*b*c;

   cout<<max_v<<", "<<min_v <<", "<<add_v<<", "<<multi_v;

    return 0;
}
