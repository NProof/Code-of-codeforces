// [https://codeforces.com/contest/382/problem/A]
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
  std::ifstream is = std::cin;
  int c; // character storage
  long lLeft = 0, lRight = 0, lSecond = 0;
  bool passed = false;
  while((c = is.get()) != EOF && c != '\n') {
    if(c == '|')
      passed = true;
    else if(passed) {
      ++lRight;
    }
    else {
      ++lLeft;
    }
  }
  while((c = is.get()) != EOF) {
    ++lSecond;
  }
  if(lLeft > lRight) {
    if(lLeft != lRight + lSecond)
      printf("Impossible");
  }
  else {
    if(lRight != lLeft + lSecond) {
      printf("Impossible");
    }
  }
  return 0;
}
