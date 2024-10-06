#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  int ctr = 0;
  
  cout << "Entra 10 enteros: ";

  for (int i = 0; i < 10; i++) {
    cin >> n;
    if (n % 2 == 1) ctr++;
  }

  double percentage = (ctr / 10.0) * 100;

  cout << "Porcentaje de Impares: " << fixed << setprecision(2) << percentage <<"%" << endl;



  return 0;
}
