#include <iostream>
using namespace std;

int main() {
  int c[3][5] = { {1, 3, 5, 77, 9}, {10, 20, 3, 4, -1}, {0, 0, 8, 5, 3} };
  
  int *p = &c[0][0];
  
  for (int i = 0; i < 3 * 5; i++) {
    cout << *(p + i) << " "; 
    if (i % 5 == 4) 
      cout << endl;
  }

  return 0;
}
