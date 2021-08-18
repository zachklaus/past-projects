#include <iostream>
#include <string>
#include "Serial.h"

using namespace std;

int main() {
  Serial s;
  int a = 45678;
  s+=a;
  int i;
  try{
    s.get(i);
    if (i!=45678){
	cerr << "Case85 failed" << '\n';
    }
  }
  catch (string msg) {
    cerr << "85 Error msg: " << msg << '\n';
  }
  catch (...) {
    cerr << "85 Error msg not std::string" << '\n';
  }
  return 0;
}
