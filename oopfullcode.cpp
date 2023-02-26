#include<iostream>
#include<string>

using namespace std;
//here we will learn  to make the class and object.
/*class teacher{
  //class is a template that contains data and functions to create object
  //this is known as access specifier:by default this is private and cant be accessed from the outside
private:
  void teach(){//this is the object:it is an implementation or an instance of the class

  }
public://this we can access from outside the class and this is known as ABSTRACTION
  int id;
  string name;
  void show(string n){// this is the parametrized function:
    this->name =n;
    cout<<name;
  }//here both the name of the fuction"show" are same and concept is called polymorphism
  void show(int idn){
    this->id=idn;
    cout<<id;
  }
  //here we will learn about the constructor:is a special type of function in which we dont give the return type and made up of name of class
  teacher(string n){//parametrized constructor
    this->name=n;
    cout<<name<<endl;
  }
  teacher(){
    cout<<"default,value not set"<<endl;
  }
  //destructor is always not parametrized :after class operation completes to make the memory used by class empty we use destructor.
  ~teacher(){
    cout<<"end of class using of destructor to make the memory unallocate"<<endl;
  }
};

int main(){

//teacher h1("ABHINAV");


  /*teacher h1;
  h1.show("abhinav");
  h1.show(123);
  teacher h2;
  h2.show("mishra");

  h1.name="abhinav";
  h1.id=167;
  teacher h2;
  h2.id=001;
  h2.name"ali";
  teacher h3;

  return  0;
}*/
//ABSTRACTION: is a process to show essential information and hides unnecessary information
//ENCAPSULATION:is a process that binds together data and functions in a single unit
//POLYMORPHISM:is a ability or a process of object to take a multiple forms with same interface
//constructor:special type of function which does not have return type but having the name of class these are of two types parametrized and default
//Deconstructor:used to deallocate the memory used by the class having name of class starting with ~ sign
//INHERITANCE:
/*class human{
protected://protected access specifier we can access this in inherited class used as a private
  int rollNum=123;
public://can accessed from outside the class also

  string name;
  int id;

};
class teacher:public human{//yaha pr human se characters teacher me aagye isi ko INHERITANCE kehte hai{
public:
  rollnum=342;
  void teach(){

  }


};
/*class student : public teacher{//example of multilevel inheritance


};*/
/*class student : public human{//exxample of hirearchial inheritance

};*/
/*class student: public human,teaher{//example of multiple inheritance means ek bacche do papa
  //can access  the objects of both the classes
};*/
/*int main(){
  student s1;
  s1.teach();
  teacher t1;
  t1.name="abhinav";
  return 0;
}*/
/*single inheritance:
base class
   |
derived class*/


/*multilevel inheritance:
base class human
    |
derived class 1 teacher
    |
derived class 2 student*/

/*hirearchial inheritance(ek balid bahut sare bacche)
                 base class
                /          \

              /             \
 derived class 1(techer)    derived class 2(student)   */

 /*multiple inheritance:

 base class 1(human)    base class 2(teacher)
           \                          /
             \                      /
              derived class (student)*/
//Hybrid INHERITANCE : mixer of many types of inheritances
/*OVERRIDING:child class same fun override kr leti hai aur apna chala keti hai
class human{
public:
  string name;
  int id;
  void teach(){
    cout<<"i m human";
  }
};
class teacher : public human{
public:
  void teach(){
    cout<<"i m teacher";
  }

};
int main(){


  teacher  t1;
  t1.teach();
  return 0;
}*/

/*Abatract class:
class human{
public:
  string name;
  int id;
  void teach(){
    cout<<"i m human";
  }
  virtual void show()=0;//this make it a abstract class and its object cant be made and only can be used as inheritance class;
};
class teacher : public human{
public:
  void teach(){
    cout<<"i m teacher";
  }
  void show(){
    cout<<"i am child";
  }

};
int main(){
  human h1;
  return 0;

}*/
/*Friend class:
class human{//can access the private variablr of class using friend function
private:
  string name="abhinav";
public:
  friend class teacher;
};
class teacher{
public:
  void show(){
    human h1;
    cout<<h1.name;
  }

};
int main(){
  teacher t1;
  t1.show();
  return 0;
}*/
refrence:cppexams.blogspot.com
