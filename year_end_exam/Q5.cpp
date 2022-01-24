#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  cout << setw(4) << setfill('+');
  for(int i = 0; i < 3; i++){
    cout << i;
  }
  cout << endl;
  for (int i = 0; i < 3; i++){
    cout << setw(4) << setfill('+') << i;
  }
  cout << endl;
  cout.setf(ios::showbase);
  cout.setf(ios::hex, ios::basefield);
  cout << 256 << endl;
}
/*実行結果
+++012
+++0+++1+++2
0x100
*/