
#include<bits/stdc++.h>

using namespace std;

 class student{
  public:
      int roll;
      string name;
      int age;


      student()
      {

      }
      student(int roll , string name , int age)
      {

          this-> roll = roll;
          this-> name = name;
          this-> age =  age;

      }


      //
      void print_vl()
      {
          cout <<"\n ROLL:" << roll <<" " <<"Name:" <<name <<" " <<"Age:" <<age ;
      }

 };


 class information{
   private:
       string father_name;
       string mother_name;
   public:
       student s_details;


  void set_velue(string f_name, string m_name)
  {
      father_name = f_name;
      mother_name = m_name;
  }

 void print_details()
      {
          cout << s_details.roll <<" " << s_details.name <<" " << s_details.age << " " << father_name <<" " << mother_name;


      }
 };


 class user{
  protected:
      int age ;
      string name;

 };

 class teacher:user{
   private:
       int id ;

   public:
   void set_vl(int _id , string _name , int _age)
   {
       id = _id;
       name = _name;
       age = _age;

   }

   void print_vl()
   {
       cout<<id <<"\n"<<name <<"\n" <<age;
   }

 };

 bool comp(student s1, student s2)
 {
     return s1.roll < s2.roll;
 }

int main()
{
   vector <student> s;
    for(int i=0; i<10;i++)
    {

        s.push_back( student(20-i,"Ahsan",22));

    }


    sort(s.begin(),s.end(),comp);

   for(int i=0; i<10;i++)
    {

        s[i].print_vl();

    }

    return 0;
}
