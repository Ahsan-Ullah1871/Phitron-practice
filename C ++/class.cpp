
#include<bits/stdc++.h>

using namespace std;

 class student{
  public:
      int roll;
      string name;
      int age;


 };


 class information{
   public:
       student s_details;
       string father_name;
       string mother_name;


 void print_details()
      {
          cout << s_details.roll <<" " << s_details.name <<" " << s_details.age << " " << father_name <<" " << mother_name;


      }
 };

int main()
{
    information s1;
    s1.s_details.roll=12;
    s1.s_details.name="Ahsan";
    s1.s_details.age=20;

    s1.mother_name = "Tahmina";
    s1.father_name = "Ismail";
    s1.print_details();

    return 0;
}
