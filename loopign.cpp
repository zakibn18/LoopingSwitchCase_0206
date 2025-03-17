#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
  int counter;
  int i;
  int perulanganWhile = 0;
  int perulanganDO = 0;

  //Loop with for
  //Loop for ascending
  for(counter = 0; counter < 5; counter++) {
    cout << "Nilai counter = " << counter << " TI UMY" << endl;
  }
  cout << "Nilai counter terakhir = " << counter << endl << endl;

  //Loop for descending
  for(counter = 5; counter > 0; counter--) {
    cout << "Nilai counter = " << counter << " TI UMY" << endl;
  }
  cout << "Nilai counter terakhir = " << counter << endl << endl;

}