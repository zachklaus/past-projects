#include <string>
#include "Serial.h"
#include <iostream>

using namespace std;

int main() {
  Serial s;

  s.put(3);
  s.put(4);
  s.put('*');
  int x;
  try{
    s.get(x);
    s.get(x);
  }
  catch (string msg) {
    cerr << "77 Error msg: " << msg << '\n';
  }
  catch (...) {
    cerr << "77 Error msg not std::string" << '\n';
  }
  
  s.put("testing"s);
  s.put(true);

  char ch; string ss;
  bool caught = false;

  try {
    s.get(ss);
  } catch (string st) {
    if (st.size() > 0) caught = true;
  }

  if (!caught){
	cerr << "Case77 failed" << '\n';
    }

  try{
    s.get(ch); s.get(ss);
    bool b;
    s.get(b);
  }
  catch (string msg) {
    cerr << "77 Error msg: " << msg << '\n';
  }
  catch (...) {
    cerr << "77 Error msg not std::string" << '\n';
  }
  
  if (s.empty() != true){
	cerr << "Case77 failed" << '\n';
    }
  return 0;
}
