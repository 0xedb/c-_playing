#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// template<class T>
// struct Node {
//   T data;
//   T* next;
// } node;

 

class Point {
  public:
    int x, *y;
    Point(int x): x(x) {};
    Point operator + (const Point& another) {
      x += another.x;
      return *this;
    }
    Point(const Point& another): x(another.x), 
    y(new int(x)) {}
    
};

int main() {

  int x = 10;

  try {
    throw "1000";

  } catch(int e) {cout << "Error:\t" << e << endl;}
  catch(...) {cout << "Well, can't handle that!"<< endl;}
  

  return 0;
}
