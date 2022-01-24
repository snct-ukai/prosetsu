#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int n;
  float w;
  float total;

  ifstream in("data.txt");
  while(!in.eof()){
    in >> n >> w;
    total += n * w;
  }

  in.close();

  ofstream out("output.txt");
  out << total;
  out.close();
}