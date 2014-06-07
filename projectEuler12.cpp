#include <iostream>
#include <cmath>

long long int number(int i) {
  long long int N = 0; 
  for (long long int k = 1; k<=i; ++k) {
    N = N + k;
  }
  return N;
}

int divisors(int i) {
  int counter;
  int amount = 1;
  for (long long int j = 2; j<=i; ++j) {
    counter = 0;
    while (i%j == 0) {
      i = i/j;
      ++counter;
    }
    amount = amount * (counter + 1);
  }
  return amount;
}

int main() {
  long long int i = 10;
  while (divisors(number(i))<501) {
    ++i;
  }

  std::cout << number(i);
  

}
