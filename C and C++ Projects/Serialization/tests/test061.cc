#include <string>
#include "Serial.h"
#include <iostream>

using namespace std;

int main() {
  Serial s1;
  string x {"hello"s};
  s1.put(x);

  Serial s2(s1);
  string xx;
  try{
    s2.get(xx);
    if (xx!="hello"s){
	cerr << "Case61 failed" << '\n';
    }
  }
  catch (string msg) {
    cerr << "61 Error msg: " << msg << '\n';
  }
  catch (...) {
    cerr << "61 Error msg not std::string" << '\n';
  }
  return 0;
}
