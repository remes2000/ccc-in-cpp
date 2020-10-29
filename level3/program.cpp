#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char *argv[]) {
  string filepath = argv[1];
  fstream file;
  file.open(filepath, ios::in);
  
  string line;
  while(getline(file, line)) {
    cout << line << " - Konrad Woźniak" << endl;
  }


  file.close();
  return 0;
}