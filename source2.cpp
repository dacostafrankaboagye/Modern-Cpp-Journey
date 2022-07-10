
#include<iostream>
#include<string>




/*

#include <iostream>




int main()
{
    
    

    

    // std::cout << "Hello World." << '\n' << "This is Frank" ;

    bool isFalse = false;
    bool isTrue = true;

    char a = 'a';
    char a1 = 97;  // same as 'a'
    char z1 = 122;  // same as 'z'

   // std::cout << "this is letter" << a ;

   bool det {true};
   bool det1 = false;

   // std::cout << "It is " << sizeof(a) << "\n";

   

   // --- integer types

   int x = 12;
   int y = -67;
   int m0 = 10; // same as 10 -- decimal literal
   int m1 = 012; // same as 10 -- octal literal
   int m2 = 0xA;  // same as 10 -- hexadecimal literal
   int m[] = {10, 012, 0xA};

   for(int i=0; i<3; i++){
    std::cout<< m[i] << "\n";
   }

   // -- 4 Floating-Point Types


   double d = 3.14;
   double d1 = 1.;
   double d2 = .12;


// -- modifiers

   // 4 bit = nibble
// 8 bit  = 1 byte
   
unsigned long int c  = 10;   // 4 byte = 32 bit
unsigned short int d = 65535;  // 2 byte = 16 bit
   



//  -- n initialize an object

int a  = 54;

int b = {28}; 

int c {66}; // initializer list



   

   std::cout << " variable is  " << a;
   std::cout << " variable is  " << b;
   std::cout << " variable is  " << c;

//





+ // addition
- // subtraction
* // multiplication
/ // division
% // modulo



   int a = 4;
   int b = 3;
   
   int result = a/b;  // instead of 1.333, it gives 1

   // If we want a floating-point result, we need to use the type double and make sure at
least one of the division operands is also of type double:

   int a = 4;
   double b = 3;
   
   double result = a/b;  // 1.333, it gives 





   int a = 4;
   double b = 3;
   
   std::cout << "before  = " << a;

   ++a;

   std::cout << "\nafter  = " << a;
   

   // std::cout << "resut is = " << a;




   //----- standard input

   -- 

   
   std::cout << "Enter a your gpa: " ;

   int gpa = 0;

   std::cin >> gpa;

   std::cout << "Your gpa is " << gpa; 


   -- two input




   



   // Standard Input

   std::cout << "Enter a your age and gpa separated by space: " ;

   int age = 0;
   double gpa = 0;

   std::cin >> age >> gpa;

   std::cout << "Age: " << age << "\nGPA: " << gpa; 
   
   std::cout <<  "\nEnded.";




   int arr[3];
   arr[0] = 12;
   arr[1] = 19;
   arr[2] = 67;

   std::cout << "The array is :" << arr ;

   
   std::cout << "\n";

   for(int i=0; i<= 3; i++){
      std::cout << arr[i] << '\n';
   }

   
   
   
   
   
   // pointers 

   // nullptr

   int* p = nullptr;  // initialising  a pointer
   std::cout << "The value is : " << p<< '\n';

   // assigning the pointer to an exisiting object;

   char thec = 'c';
   char* cpointer = &thec;  // the address of operator  &

   std::cout << "Value is " << thec << '\n';

   std::cout << "Ptr of c is " << cpointer;

   // dereferencing pointer *  == allows us to see the value and also change the value 

   int a = 909 ;
   int* aPtr = &a ;
   
   int aDrf = *aPtr;

   std::cout << "\nThe 'a' pointer is  " << aPtr << '\n'; 
   
   std::cout << "dereferened value is " << aDrf ;

   // changing the value
   //\\ find out the pointer for  an array

   int numberArr = 2;

   std::cout << numberArr << '\n';

   int* arrPtr= &numberArr;

   std::cout << "ptr value is " << arrPtr ;

   *arrPtr = 85;  // chnging from 2 t 85;  // we have changed the value of the number to 85 through the address

   std::cout << "\nValue is " << numberArr ;



   // reference 

   // one obj exist in memory but two or more different assignment. references must be initialised
   // type_name followed by ampersand

   double v = 67.09;
   double& m = v;

   std::cout << "value 1 is " << v << '\n';
   std::cout<<"value 2 is " << m ;

   // changing one will affect the other

   v = 78;
   //std::cout <<  "New value of m is " << m;

   // testing for address 

   std::cout << "\nv address is " << &v << "\nm address is " << &m; // they have the same address



   // const reference -- its read only

   int a = 56;
   const int& b = a;  // const ref

   std::cout << "a = "<< a << "\nb = " << b ;

   // verifying it read only
   // changing a
   
   a = 77;   
   std::cout << "\na = "<< a << "\nb = " << b;

   //b = 25;  // this is an ERROR 
   //std::cout << "\na = "<< a << "\nb = " << b;

 
  


}

*/

// lesson 2 


/*
#include<iostream>
#include<string>


int main(){

   

   std::string fname = "Frank";
   
   std::cout << "My name is " << fname;

   std::string Surname;
   std::cout << "\nEnter Surname: ";
   std::cin >> Surname;

   std::cout << "\nMy full name is " << Surname;

   

  // concatenation

  std::string fn="Fra";
  fn += "nk";  // fn = Frank

  std::cout << "Name: " << fn ;

  char exclamation = '!';

  std::string surName = "Aboagye";

  std::string greet = "Greetings";
  greet += exclamation;



  std::cout << "\n" << greet << ' '+ fn + ' ' + surName;

  

 // indexing

   std::string school = "University";

   char theU = school.at(0) ;// this brings out the U;
   //same as
   char theUr = school[2];

   std::cout << theU; 
   std::cout << theUr;



   // compring strings

   std::string a = "frank";
   std::string b = "aboagye";
   std::string c = "frank";

   if(a==c){std::cout<< "true";}
   else{std::cout<<"false";}



   // accepting input i the right way

   std::cout << "\nEnter your Full name: ";
   std::string fullname;
   std::getline(std::cin, fullname);
   std::cout << "\n Confirm if "<<fullname<<" is your correct(y/n): ";
   std::string verify;
   std::cin >> verify;
   if(verify=="y"){std::cout<<"Thanks";}
   else{std::cout<<"oops";}
   

  // string pointer   .c_str()  ==> member function of const char*

  std::string name = "frank";
  std::string ptr = name.c_str();

  std::cout << "The string pointer is " << name.c_str() ;

  


 // substrings  .substr(start, length)

 std::string txt ="Hello World.";
 std::string theWorld = txt.substr(6,5);

 std::cout<< "The " << theWorld << " will end soon.";

 

 std::string myTxt = "This is a good day for everyone.";

 // finding 'good' in the txt

 std::string::size_type ans = myTxt.find("good") ;// returns the position of the char of the word if found == the first instance though

 if(ans != std::string::npos){
   std::cout << "\nFound the word you were looking for.";
   std::string theWord = myTxt.substr(ans,4);
   std::cout<<"The word: " << theWord; 
 }else{
   std::cout << "\nNot Found";
 }

 //std::cout << "\nResult is : " << ans;
 std::cout << std::string::npos;

 

// Automatic Type Deduction


auto a = 78;  // deduces the type to int
auto b = 7.90;  // deduces the type to double
auto c = "Frank";  // deduces the type to std::string
int x = 78;
auto& y = x; // deduces the reference type to int&

std::cout << a << " " << b <<  " "<< c << "\n" ;

std::string fullname = "Dacosta Frank Aboagye";

std::string::size_type foundCharPosition = fullname.find("Frank"); 
// instead of writing that long type do this :
auto foundPos = fullname.find("Aboagye");

std::cout<< "Found Aboagye at " << foundPos;

std::cout << "\nFound Frank word at "<< foundCharPosition ;



 std::cout << "\nEnded";
 

}



*/


// lesson 3


/*


#include<iostream>
#include<string>


int main(){

   std::cout << "Started\n";
   
   

   

  // 1
  double arr[5] = {1.2, 6.8, 0.7, .5, 8.2};
  arr[0] = 4.8;
  arr[4] = 67.99;
  std::cout<<"First: "<<arr[0]<<"\nLast: "<<arr[4];


   //2
   double a = 5.7;
   double* pt = &a;
   std::cout<<"The pointed-to object is: "<< *pt;

   //3
   double mydouble  = 7.4;
   double& myreference = mydouble;
   myreference = 57;
   std::cout << "\nObject Value[reference] = "<<myreference;
   std::cout<<"\nObject Value[original] = "<<mydouble;
   mydouble = 778.007;
   std::cout<<"\nmydouble is: "<<mydouble<<"\nmyreference is: "<<myreference;

   //4
   std::string a="Frank";
   std::string b=" Aboagye";
   std::string c = a+b;
   std::cout << "Resulting string :" << c;

   //5
   
   std::cout<<"\nEnter fullname : ";
   std::string fullname;
   std::getline(std::cin,fullname);
   std::cout << "Full name is "<<fullname;

   //6
   std::string name = "John Doe";
   std::string firstName = name.substr(0,4);
   std::string lastName = name.substr(5,3);
   std::cout<<"Full name is : " << name;
   std::cout << "\nFirst Name: "<< firstName<<"\nLast Name: "<<lastName;


   //7
   std::string txt= "Hello C++ World.";
   char c = 'C';
   std::string::size_type chP = txt.find(c);

   if(chP != std::string::npos){
      std::cout<< "Character found at position "<< chP;
   }else{
      std::cout<<"Character not found";
   }

   

   //8 
   std::string txt= "Hello C++ World.";
   std::string mySubString = "C++";
   auto chP = txt.find(mySubString);
   auto notFoud = std::string::npos;
   if(chP != notFoud){
      std::cout << "Charater found at position: "<<chP;
   }else{
      std::cout << "Not found";


   }


   // statements

   int arr[5] = {36,89, 370, 5, 190};

   for(int i=0; i<=5;i++){
      //if even
      if(arr[i]%2==0){
         std::cout<< arr[i] << " = Even\n";
      }else{  // if odd
         std::cout<< arr[i] << " = Odd\n";
      }
   }

   // unary operator

   bool conditon;
   int arr[5] = {36,89, 370, 5, 190};

   for(int i=0; i<=5; i++){
      (arr[i]%2==0) ? (
         std::cout<<arr[i]<<" = Even\n"
         ):
         (std::cout<<arr[i]<<" = Odd\n"
         );
   }

   int a = 1;

   if(a==1){
      std::cout<<"a = 1";
   }else if(a == 6){
      std::cout<<"a = 6";
   }else{
      std::cout<<"a = "<<a;
   }


   int a = 1;
   std::string res;
   if(a){
      res = "Statement if was excuted"    ;  // prints if a = any integer excepts 0
   }else{
      res = "statement else was executed";
   }

   std::cout<<res;
   

  int score = 95;
  std::string grade="null";
  switch (score)
  {
  case (50):   // what is inside the case should be a constant expression/ should evluate to a const expresion
   grade="Fail";   
   break;

  case (90):
   grade="Pass";
   break;
  
  default:
  grade = "Contact Lecturer For grade";
   break;
  }

  std::cout << grade;

  
   
   //for loop
   

   for(int i=0; i<10; ++i){  
      std::cout<<"number "<<i<<'\n';
   }

// while loop

   int a = 0;

   while(a<10){
      std::cout<<"a = "<<a<<'\n';
      a++;
   }
   std::cout<<"Yes";

   

  // do statements
  int a = 0;

  do{
   std::cout<<"Number: "<<a<<'\n';
   a += 1;
  }while(a<10);


  // -------------constants

  const int price = 67 ; // it is now immutable

 //price++; not possible : can’t modify a read-only object

  std::cout<<"The price of the bag is " << price << "$"<<'\n';

  // constexpr

  constexpr int a = 12;  // complie time constant expression.
  constexpr double b = 89;  // Complie time constant expression.
  
  constexpr double c = b;  // constant expression.

  int x = 56;
  // constexpr int y = x;  // compile time error
  // the value of x isnt known at compile time
  // this is AN error: the value of 'x' is not usable in a constant expression
  

 // ============ Exercise

 //1
 bool a = false;

 if(a){
   std::cout << "The statement is true";
 }else{
   std::cout << "The statement is false";
 }
 

// 2

int m = 256;
bool n = true;

if(m>100 && m<300){
   std::cout << m << " is greater than 100 and less than 300\n";
}else{
   std::cout << m << " is not the opposite\n";
}

if(m>100 || n==true){
   std::cout << "The value is greater than 100 and the boolean is true\n";
}else{
   std::cout << "Its all false\n";
}

bool neg_n = !n;  // the negation of n




// 3

int a = 13;
constexpr int arr[4] = {1,2,3,4};

switch(a){
   case(arr[0]):
    std::cout << a <<" =  Value is valid";
    break;
   case(arr[1]):
    std::cout << a <<" =  value is valid";
    break;
   case(arr[2]):
    std::cout << a <<" = value is valid";
    break;
   case(arr[3]):
    std::cout << a <<" = value is valid";
    break;
   default:
   std::cout << a <<" = Invalid Value. Not in the range of [1...4]";
}



// 4

  for (int i=0; i<15; i++){
   std::cout << i <<'\n';
  }




int arr[5] = {33,66,35,90,78};

for(int i=0; i<5; i++){
   std::cout << "Value = " << arr[i] << " Index = " << i << '\n';
}


   
   const int a= 9;
   const double b = 8.7;
   const std::string c = "txt";

   const int d = a;

   std::cout <<"a = " << a <<'\n';
   std::cout <<"b = " << b <<'\n';
   std::cout <<"c = " << c <<'\n';
   std::cout <<"d = " << d <<'\n';


   
   std::cout<<"\nEnded";
   


   



}







*/



// lesson 4

/*
#include<iostream>
#include<string>

void tester(int x, int y);  // function declaration;

void form(std::string, int); // function declaration; 
// you can omit the params variable in the declaration. but you have to state the types.

double sumOnCondition(double, double); 

void sumOnConditionRef( const std::string& Surname );

// passing an argument by reference
int testFun(int& anyNum){  // the parameter is areference type oooo... it will change the  original
   anyNum += 5;
   return anyNum;
}

int main(){

   //tester(7, 9);
   //form("frank", 22);
   //double ans = sumOnCondition(0.8, 3.1);

   // testing the passing by reference.....
   //int x = 10;
   //std::cout << "\nBefore is = " << x;
   //int y = testFun(x);

   //std::cout << "\nAfter is = " << x;  // the value of the x changes
   // this is because , the original argument was placed in ... by using the reference type
   //When passing by reference, we need to pass the variable itself; we can’t pass in a literal representing a value. Passing by reference is best avoided
   // ... unless of course you want that

   // use the const reference... it is preferred and even it helps in efficiency...

   //--------- like the example below

   std::string n="Aboagye";
   std::cout << "\nBefore: " << n;

   sumOnConditionRef(n);  
   // no new argument is created.. the original argument is being used and its read-only [powerful]

   std::cout << "\nAfter: " << n;

   




}


// the function definition
void tester(int x, int y){
   std::cout << "The sum of " << x << " and " << y << " is = "<< x+y <<'\n';
}


// the function definition 
void form(std::string name, int age){
   std::cout << "Name : " << name << "\nAge : "<< age <<'\n';

}


double sumOnCondition(double a, double b){
   if(a > b){
      return a+b;
   }
   return 0.0;
}

void sumOnConditionRef(const std::string& Surname){

   //Surname += "--";   // gives an error cos.. its read only
   
}



*/


// lesson 5

/*
#include<iostream>
#include<string>

//... function overloading : same function name but different prameter types

void myfun(int a);
void myfun(double a);
void myfun(std::string a);

int main(){
   
   int a = 4;
   //myfun(a);
   double b = 8.9;
   //myfun(b);
   std::string c = "frank";
   myfun(c);

   // note liteals and their constant types in c++
   //'c' - char 
 //123 - int 
 //456.789 - double 
 //true - boolean 
 //"Hello" - const char[6]

}

void myfun(int a){
   std::cout << "\nThe parameter type is integer ";
}


void myfun(double a){
   std::cout << "\nThe parameter type is double ";
}

void myfun(std::string a){
   std::cout << "\nThe parameter type is string ";
}


*/

//....... lesson 4 and  5 Exercise

/*

#include <iostream>
#include<string>




//1 
void printmessage();

// 2
int multiplication(int, int);

//3
void custommessage(const std::string& txt);

//4
int division(int, int);
double division(double, double);

int main(){

   // 1

   //printmessage();



   //2

   //int m,n;
   //m= 4;
   //n = 6;
   //int c = multiplication(4, 6);
   //std::cout << m << " x " << n << " = " << c;



   //3

   //std::string mssg = "Your price is $29.99";
   //custommessage(mssg);


   
   //4
   int a = 123;
   int b = 5;
   double c = 123.0;
   double d = 5.0;
   std::cout << "\nFor integer : " << a << "/" << b << " = " << division(a,b);
   std::cout << "\nFor double  : " << a << "/" << b << " = " << division(c,d);





  

std::cout << "\nEnded";

}



void printmessage(){
   std::cout<<"Hello World from a function";
}

int multiplication(int a, int b){
   return a*b;
}

void custommessage(const std::string& txt){
   std::cout << txt;
}

int division(int a, int b){
   return a/b;
}

double division(double a, double b){
   return a/b;
}



*/


// lesson 6

/*
#include<iostream>

int main(){

   

   // scope 

   int x = 56;

   {
      // block scope
      int x = 988;
      std::cout << " the x = " << x;
   }

   std::cout << "\nThe value of x is " << x;

   


  // lifetime of objct --- memory storage duration
  // automatic(stack memory), dynamic(heap memoory), static (using the static identifier) == access it any where

  // static memory == through the pointer and the new key word
  int* a =  new int;

  *a = 34;

  std::cout << " the value is " << *a;
  //  note you can derefence a pointer using  *a or  a[0]

  // terminates it life
  delete a;


  // for an array
  int* p = new int[3];
  p[2] = 99;
  p[0] = 34;
  p[1] = 56;

  for(int i=0; i<3; i++){
   std::cout << "\nValue is = " << p[i] ;

  }

  // exercise

  // 1.
  int a = 77;
  int b = 83;

  // a and b have automatic storage duration;
  // they are placed on the stacked

  // 2.
  // object with dynamic storage duration (placed on the heap)
  
  int* c = new int;
  
  *c = 89;
  std::cout << " value: " << *c;

  delete c;


  int x = 688;

  int* m = new int {55};

  std :: cout << "\nx = " << x;
  std :: cout << "\nm = " << *m;



  




  std::cout << "\nEnded";



}


*/




// lesson 7

// classes

// has data memebers and member functions
   // Another way to write a class is to write a struct. A struct is also a class in which
//members have public access by default. So, a struct is the same thing as a class but
//with a public access specifier by default:

/*

#include<iostream>

class MyClass{

   int age = 90;


  // you can define a member funcion in the class as this:
   void toDisplay(){
      std::cout << "to just display";
   }

   // declare it here;
   void outsideFunction();

   public :   
   void printOutAge(){
      std::cout << "Age is " << age;
   }

   // this makes the printOutAge public.
   // when not specified it is private by default





};


// you can define a member function outside of the class as this:
// the type - class name - scope rsolution operator - the fn name - params and there you go

void MyClass::outsideFunction(){
   std::cout << "yes1";
}



#include <iostream>
#include<string>

struct MynewClass{

   int w =90;

   void textPrint(){
      std::cout << "Value is : " << w;
   }

};

class Tester1{

   public:
   // default constructor
   Tester1(){

   }

   public:
      int yt = 67;
      std::string na = "frank";

   private:
     int age = 99;

   public :
     void printAgeOut(){
      std::cout << "Age is " << age;  
     }

     //note that member fields can access each other no matter the access type
};


int main(){

   //MynewClass cy;

   //std::cout <<cy.w;  // can see the value because of the struct --  it make everything public

   Tester1 t1;
   //std::cout << t1.na; // it can see because it is private 

   t1.printAgeOut();



}

*/


/*
// -- stillo on classes, constructors


#include<iostream>
#include<string>


class TestClass{

   public:
   TestClass(){
      std::cout << "\ndefault";
   }

};



int main(){

   TestClass test1;  // once it is initialised, the default prints out.
   
}





// initialising 



#include<iostream>
#include<string>

class TestClass{

   public:
   int x;
   std::string y;

   public: 
   TestClass(int a, std::string b){
      x = a;
      y = b;
   }
};

int main(){

   TestClass test1{23, "iii"};
   std::cout << test1.y;

}


// a preferred way of doing the above 


class TesterClass{

   public:
      int x,y;
      TesterClass(int a, int b) 
         : x{a}, y{b}
         {

         }


};

int main(){

}


*/


/*

/// -- copy constructor

// 1. default copy

class TestClass{
   public :
   int x, y;
   TestClass(int a, int b)
     :x{a},y{b}
    {

    }
};

// 2. user defined copy constructor

class TestU{
   //public : 
   //int x, y;
   //TestU(int a, int b)
   //:x{a}, y{b}{

   //}

   // user-defined copy constructor
   //TestU(const TestU& rhs)
   //:x{rhs.x}, y{rhs.y}{
    //  std::cout << "prints anytime there is a copy";
   //}

   //user - defined copy constructor- for pointers
   
   public :
   int m;
   int* p;  // a pointer  [for pointers you know we cant do this --> int* p = 90  xxxx no no no way. We use idea from dynamic memory storage]
   TestU(int s, int b)
   :m{s}, p{ new int(b) }
   {


   }

   // when a copy is made
   TestU(const TestU& rhs)
   :m{rhs.m},p{ new int (*rhs.p)}{
      std::cout << "when copy is made";
   }


};


int main(){

   //TestClass test1{12, 56};
   //TestClass test2 =test1; // note that a default copy is made. Default copy has problems examples with pointers and arrays and the likes

   TestU test3{4, 7}; // its constructor just set the values as defined
   TestU test4 = test3;  // since this is a copy, the user defined copy constructor is evoked


}


*/



// revison.
// testing 
class Tester1{

   private:
      int x = 20;
      int*p ;
   
   public:
   // constuctor
   Tester1(int xx, int pp)
   : x{xx}, p{new int(pp)}
   {
      std::cout << "It is the first\n";

   }

   // when  a copy is made
   Tester1(const Tester1& rhs)
   : x{rhs.x}, p{new int {*rhs.p}}
   {
      std:: cout << "\n A copy is made ooo\n";

   }
   
   

};

int main(){

   Tester1 testCase1{20, 89};
   Tester1 ab = testCase1;

}



