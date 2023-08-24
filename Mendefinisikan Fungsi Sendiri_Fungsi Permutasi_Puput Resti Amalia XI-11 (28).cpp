#include <cstdlib>
#include <iostream>
using namespace std;

int Permutasi (int x, int y) {
	int Nilai_Permut, selisih;
	int faktorial = 1;
	selisih = x-y;
	
	while (x > 0) {
		faktorial = faktorial * x;
		x = x-1;
	}
	Nilai_Permut = faktorial/selisih;
	return(Nilai_Permut);
}

int main () {
	int n, r;
	cout << "Masukan Nilai n : ";
	cin >> n;
	while (n < 0) {
		cout << "Masukan Nilai n Kembali : ";
		cin >> n;
	}
	cout << "Masukan Nilai r : ";
	cin >> r;
	while (r < 0) {
		cout <<"Masukan Nilai r Kembali : ";
		cin >> r;
	}
	
	cout << "Nilai Permutasi " << r << " dari " << n << " adalah " << Permutasi(n, r) << endl;
   	system ("PAUSE");
	return (0);
}
