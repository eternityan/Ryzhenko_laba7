#include <iostream>
using namespace std;
int main() {
   int size = 10;
   int *arr = new int[size];
   int position;
   do {
      cout << "Enter position to change arr 0-" << size << endl;
      cin >> position;
   } while (position < 0 || position > size);
   cout << "Enter value to set" << endl;
   int value;
   cin >> value;
   arr[position] = value;
   cout << "arr[" << position << "] = " << arr[position] << endl;
   return 0;
}
