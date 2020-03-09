// [https://codeforces.com/contest/382/problem/A]
#include <iostream>

#define MAX_SIZE 37

int main(int argc, char **argv) {
  char str1[MAX_SIZE], str2[MAX_SIZE];
  int i; // index of str
  int c; // character storage
  long lLeft = 0, lRight = 0, lSecond = 0;
  bool passed = false;
  i = 0;
  while((c = std::cin.get()) != '\n' && c != EOF) {
    str1[i++] = c;
    if(c == '|')
      passed = true;
    else if(passed) {
      ++lRight;
    }
    else {
      ++lLeft;
    }
  }
  str1[i] = '\0';
  i = 0;
  while((c = std::cin.get()) != '\n' && c != EOF) {
    str2[i++] = c;
    ++lSecond;
  }
  str2[i] = '\0';
  if(lLeft > lRight) {
    if(lLeft != lRight + lSecond)
      printf("Impossible\n");
    else
      printf("%s%s\n", str1, str2);
  }
  else {
    if(lRight != lLeft + lSecond) {
      printf("Impossible\n");
    }
    else
      printf("%s%s\n", str2, str1);
  }
  return 0;
}
