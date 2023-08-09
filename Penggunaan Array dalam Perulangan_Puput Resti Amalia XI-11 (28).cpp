#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int i;
	float bil[7], jumlah=0.0, rata2;
	for(i = 0; i < 7; ++i)
{
cout <<1+1<< ". Masukan Angka ke-" <<1+1<<" : ";
cin >> bil[1];
while (bil [i] > 100 || bil[i] <= 0)
{
	cout << "Error! Angka di antara 1 s/d 100" << endl;
	cout <<1+1<< ". Masukan Angka ke-" <<1+1<< " : ";
	cin >> bil[1];
}

jumlah += bil[1];
}
rata2 = jumlah / 7;
cout << "Rata2 Bilangan di atas = " << rata2 << endl;

system ("PAUSE");
return 0;
}



