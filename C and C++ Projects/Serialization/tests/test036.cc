#include <string>
#include "Serial.h"
#include <iostream>

using namespace std;

int main() {
  Serial s;
  short x {6};
  s.put(x);
  if (s.str()!= "\x73\x06"s){
      cerr << "Case36 failed" << endl;
  }
  return 0;
}
