
#include<iostream>
#include<string>






// testing for copy using the operator =
// eg
// Myclass c1;
// Myclass c2;
// c1 = c2  ==> this copies c2 into c1


class Tester2{

   public:
   Tester2(){
      std::cout << "first one\n";
   }

   Tester2& operator= (const Tester2& rhs){

      std::cout << " copy detected ooo\n";

      return *this;
   }

};

int main(){
   Tester2 test;
   Tester2 test2;
   test2 = test;  // when we use the equal to a copy is detected.

}

