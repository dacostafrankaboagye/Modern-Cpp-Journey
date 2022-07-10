
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



// exercise

#include<iostream>
#include<string>


int main(){
   
   /*

   

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
   }*/

   


   



}



















































