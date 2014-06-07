#include <iostream>
#include <fstream>

using namespace std;


fstream f ("file.txt", ios::in);

void makeArray(int tab[50][100]) {

  int x = 0;
  int y = 0;
  char c = ' ';
  while (y < 100) {
    while (x<50) {
      f.get(c);
      tab[x][y] = int(c) - '0';
      ++x;
    };
    f.get(c);
    x = 0;
    ++y;
  };
  f.close();

};
      


int main() {
  
  int tab[50][100];
  makeArray(tab);
 
  int inMemory = 0;

  for (int i = 49; i>9; --i) {
    for (int j = 0; j<100; ++j) {
      inMemory = inMemory + tab[i][j]; 
    }
    inMemory = inMemory/10;
  }

  for (int i = 9; i>=1; --i) {
    for (int j = 0; j<100; ++j) {
      inMemory = inMemory + tab[i][j]; 
    }
    cout << inMemory % 10; 
    inMemory = inMemory/10;
  }

  for (int j = 0; j<100; ++j) {
    inMemory = inMemory + tab[0][j];
  }
  cout << inMemory;
  cout << endl;
  return 0;
}

