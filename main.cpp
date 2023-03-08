// Write a Program to Remove vowels from a string
#include <iostream>
using namespace std;
void vowels(string a) {
  string c = "";
  int len = a.length();
  for (int i = 0; i < len; i++) {
    char k = a[i];
    if (k != 'a' && k != 'e' && k != 'i' && k != 'o' && k != 'u' && k != 'A' &&
        k != 'E' && k != 'I' && k != 'o' && k != 'U') {
      c += k;
    }
  }
  cout << c;
}

int main() {
  string a = "remove";
  vowels(a);
}