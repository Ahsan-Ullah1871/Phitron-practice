
#include<bits/stdc++.h>

using namespace std;

 class student{
  public:
      int roll;
      string name;
      int age;


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


int main()
{
//    information s1;
//    s1.s_details.roll=12;
//    s1.s_details.name="Ahsan";
//    s1.s_details.age=20;
//
//    s1.set_velue( "Ismail", "Tahmina");
//
//     s1.print_details();

teacher t1;
//t1.id = 02;
//t1.age = 22;
//t1.name = "Ahsan";
t1.set_vl(02,"Ahsan",22);
t1.print_vl();

    return 0;
}
