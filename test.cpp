#include <iostream>
using namespace std;
int main() {
   int count;
   cin >> count;
   for (int i = 0; i < count; i++) {
      for (int j = 1; j <= i; j++)
      {
         cout << " ";
      }
      for (int j = 1; j <= count - i; j++)
      {
         cout << "*";
      } cout << "아아아아\n";
        cout << "\n";
   }
   test();
   
}

void test(){
    for (int j = 1; j <= 10; j++)
      {
         cout << " ";
      }
}
