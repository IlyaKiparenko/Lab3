#include "arithmetic.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
  cout << "enter the expression: " << endl;
  string expression;
  string note;
  double result;
  cout << "   ";
  cin >> expression;
  try {
    note = arithmetic::arithmetic_notation(expression);
	cout<<"Input values"<<endl;
	int n = Size(note);
	double *mas = new double[n];
	for (int i=0; i<n; i++)
		cin>>mas[i];
    result = arithmetic::calculation(note,mas,n);
  }
  catch (...) {
    cout << "Error! Invalide input" << endl;
    return 1;
  }
  cout << endl;
  cout << "Postfix note: " << endl;
  cout << " " << note << endl;
  cout << endl;
  cout << "Result: " << endl;
  cout << " " << result << endl;
}
