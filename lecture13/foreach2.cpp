//
// foreach1.cpp
//
// Use the for_each algorithm with a function object

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Double
{
  public:
  void operator()(int& n) { n *= 2; }
};

int main()
{
  vector<int> v;
  v.push_back(11);
  v.push_back(7);
  v.push_back(12);
  v.push_back(32);
  v.push_back(47);

  for ( int i = 0; i < v.size(); i++ )
  {
    cout << v[i] << " ";
  }
  cout << endl;

  for_each(v.begin(), v.end(), Double() );

  for ( int i = 0; i < v.size(); i++ )
  {
    cout << v[i] << " ";
  }
  cout << endl;
}
