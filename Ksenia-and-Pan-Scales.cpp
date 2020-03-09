// [https://codeforces.com/contest/382/problem/A]
#include <iostream>

int main(int argc, char **argv) {
  int c; // character storage
  long lLeft = 0, lRight = 0, lSecond = 0;
  bool passed = false;
  while((c = std::cin.get()) != '\n' && c != EOF) {
    if(c == '|')
      passed = true;
    else if(passed) {
      ++lRight;
    }
    else {
      ++lLeft;
    }
  }
  while((c = std::cin.get()) != '\n' && c != EOF) {
    ++lSecond;
  }
  if(lLeft > lRight) {
    if(lLeft != lRight + lSecond)
      printf("Impossible\n");
  }
  else {
    if(lRight != lLeft + lSecond) {
      printf("Impossible\n");
    }
  }
  return 0;
}
