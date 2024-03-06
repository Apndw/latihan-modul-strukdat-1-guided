#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  char op;
  float num1, num2;

  cout << "Enter operator (+, -, *, /): ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch (op) {
    case '+':
      cout << "Result: " << num1 + num2 << endl;
      break;

    case '-':
      cout << "Result: " << num1 - num2 << endl;
      break;

    case '*':
      cout << "Result: " << num1 * num2 << endl;
      break;

    case '/':
      if (num2 < 1) cout << "Division by zero is not allowed" << endl;
      else cout << "Result: " << fixed << setprecision(2) << num1 / num2 << endl;
      break;

    default:
      cout << "Invalid operator" << endl;
      break;
  }

  return 0;
}

