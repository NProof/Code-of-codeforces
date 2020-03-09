// [https://codeforces.com/contest/382/problem/A]
#include <iostream>

#define MAX_SIZE 37

int main(int argc, char **argv) {
  char str[2][MAX_SIZE];
  int c; // character storage
  long lLeft = 0, lRight = 0;
  bool passed = false;
  while((c = std::cin.get()) != '\n' && c != EOF) {
    if(c == '|')
      passed = true;
    else if(passed)
      str[1][lRight++] = c;
    else
      str[0][lLeft++] = c;
  }
  while((c = std::cin.get()) != '\n' && c != EOF) {
    if(lLeft > lRight)
      str[1][lRight++] = c;
    else
      str[0][lLeft++] = c;
  }
  str[0][lLeft] = '\0';
  str[1][lRight] = '\0';
  if(lLeft != lRight)
    printf("Impossible\n");
  else
    printf("%s|%s\n", str[0], str[1]);
  return 0;
}
