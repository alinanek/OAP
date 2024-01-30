#include <iostream>
#include <math.h>
#include <iomanip> 
using namespace std;

int main() {
  long double yx, sx, a;
  cout << setw(10) << "x" << setw(15) << "y(x)" << setw(15) << "s(X)" << endl;
  for (float x = 0.1; x < 1; x += 0.09){
    yx = exp(x * sin(x));
    sx = 1;
    a = 1;
    for (float n = 1; n != 120; n++)
    {
      a *= (x * sin(x)) / (n);
      sx += a;
    }
    cout << setw(10) << x << setw(15) << yx << setw(15) << sx << endl;
    sx = 1;
  }
} 