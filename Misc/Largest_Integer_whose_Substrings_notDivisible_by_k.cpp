#include <iostream>

using namespace std;

int largest_number(int digit) {
  if (digit < 2 || digit > 9) {
    throw invalid_argument("Invalid k value: " + to_string(digit));
  }

  int largest_number = 0;
  for (int i = 1; i < digit; i++) {
    largest_number *= 10;
    largest_number += digit - 1;
  }

  return largest_number;
}

int main() {
  int k = 3;
  int N = largest_number(k);

  cout << "k = "<<k<<"\nN = "<<N << endl;

  return 0;
}
