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
      } cout << "\n";
        cout << "\n";
   }
   cout<<"수정"<<endl;
   cout<<"수정2"<<endl;
   cout<<"수정3"<<endl;
}
}