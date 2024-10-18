#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

int main() {
  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
  getch();
}

