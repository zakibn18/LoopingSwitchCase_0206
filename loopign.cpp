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


  // Looping dengan while
   srand(time(0));
   i = rand() % 10;

   cout << "Nilai awal i = " << i << endl;
   while (i < 7) {
       cout << "Nilai i = " << i << " TI UMY" << endl;
       i = rand() % 10;
       perulanganWhile++;
   }

   cout << "Jumlah perulangan = " << perulanganWhile << endl;
   cout << "Nilai akhir i = " << i << endl << endl;

  // Loop dengan do-while
  cout << "Perulangan Do While = " << endl;
  do {
      cout << "Nilai i = " << i << " TI UMY" << endl;
      i = rand() % 10;
      perulanganDO++;
  } while (i < 7);  // Perbaikan kondisi

  cout << "Jumlah Perulangan = " << perulanganDO << endl;
  cout << "Nilai akhir i = " << i << endl;

}