#include <iostream>
#include <string>
#include "Serial.h"

using namespace std;

int main() {
  Serial s;
  string st {"You may assume that a string constant will not contain a double quote, backslash, or a newline."s};
  s.put(st);
  if (s.str()!= "\x53\x10\x5f\x59\x6f\x75\x20\x6d\x61\x79\x20\x61\x73\x73\x75\x6d\x65\x20\x74\x68\x61\x74\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x20\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20\x77\x69\x6c\x6c\x20\x6e\x6f\x74\x20\x63\x6f\x6e\x74\x61\x69\x6e\x20\x61\x20\x64\x6f\x75\x62\x6c\x65\x20\x71\x75\x6f\x74\x65\x2c\x20\x62\x61\x63\x6b\x73\x6c\x61\x73\x68\x2c\x20\x6f\x72\x20\x61\x20\x6e\x65\x77\x6c\x69\x6e\x65\x2e"s){
      cerr << "Case52 failed" << endl;
  }
  return 0;
}
