//
// predicate4.cpp
//
// use a function object
// store threshold value in the function object
// invoke the function object's operator()

#include<algorithm>
#include<iostream>
using namespace std;

// function object for predicate "greater than <value given in ctor>"
class Greater_than
{
  public:
  Greater_than(int t): threshold(t) {}
  bool operator() (int i) { return i > threshold; }
  private:
  const int threshold;
};

int main()
{
  // create an instance p of a Greater_than function object
  // expressing the predicate "greater than 8"
  Greater_than p(8);

  int a = 3;
  int b = 9;

  // evaluate the predicate on a and b
  cout << " a: " << boolalpha << p(a) << endl;
  cout << " b: " << boolalpha << p(b) << endl;

  // other form of invocation of the predicate operator()
  cout << " a: " << boolalpha << p.operator()(a) << endl;
}
