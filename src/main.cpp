#include <initializer_list>
#include <string>
#include <vector>

int main()
{
   const int arr[] = {1, 4, 6, 7, 9};
   using namespace std;
   initializer_list<int> ilist{3, 6, 7, 9, 2}; //you can not mutate it is read only
    //initializer_list<int>::iterator const_iterator = ilist.begin(); //const int *
   ilist.begin();
   ilist.size();
    ilist.end();
  // const int * iterator = ilist.end();
}