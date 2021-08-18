#include <iostream>
#include <string>
#include "Serial.h"

using namespace std;

int main() {
  Serial s;
  s+="Testing string case1"s;
  string st;
  try{
    s.get(st);
    if (st!="Testing string case1"s){
	cerr << "Case96 failed" << '\n';
    }
  }
  catch (string msg) {
    cerr << "96 Error msg: " << msg << '\n';
  }
  catch (...) {
    cerr << "96 Error msg not std::string" << '\n';
  }
  return 0;
}
