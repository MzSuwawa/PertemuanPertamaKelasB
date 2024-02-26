#include <iostream>
using namespace std;

int main()
{//begin
	// numeric nPanjang, nLebar, nLuas
	// display 'Masukkan Panjang= '
	// accept nPanjang 
	// display 'Masukkan nLebar= '
	// accept nLebar
	//compute nLuas = nPanjang * nLebar
	// display 'Luasnya adalah = ' + nLuas

	int nPanjang, nLebar, nLuas;
	cout << "Masukkan nPanjang = ";
	cin >> nPanjang;
	cout << "Masukkan nLebar = ";
	cin >> nLebar;
	nLuas = nPanjang * nLebar;
	cout << "Luasnya adalah = " << nLuas << endl;

}