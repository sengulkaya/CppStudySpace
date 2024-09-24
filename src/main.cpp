#include <initializer_list>
#include <iostream>
#include <ostream>
#include <string>



int main()
{
   using namespace std;

   string s1(20, 'a');
   string s2{20, 'a'};

   cout << s1.length() << endl;
   cout << s2.length() << endl;

   /*
    *20
    *2
    */

}
