//
// remove2.cpp
//
// Similar to remove1.cpp but using a list<int>

#include<list>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
  int array[] = { 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4 };
  // initialize list with array
  list<int> l(array,array+12);

  cout << " initial value: " << endl;
  cout << " l: ";
  for ( list<int>::iterator i = l.begin(); i != l.end(); i++ )
    cout << *i << " ";
  cout << endl;

  list<int>::iterator iter;

  iter = remove(l.begin(), l.end(), 3);

  cout << " after remove: " << endl;
  cout << " l: ";
  for ( list<int>::iterator i = l.begin(); i != l.end(); i++ )
    cout << *i << " ";
  cout << endl;

  // print elements of v up to iter
  cout << " up to iter: " << endl;
  cout << " l: ";
  for ( list<int>::iterator i = l.begin(); i != iter; i++ )
    cout << *i << " ";
  cout << endl;
}
