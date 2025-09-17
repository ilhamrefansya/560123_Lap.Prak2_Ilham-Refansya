#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int num1 = 200, num2 = 39800, num3 = 489688, num4 = 0;
	cout << right;
	cout << "Tabel Penjualan" << endl;
	cout << "------------------" << endl;
	cout << "bulan   " << setw(10) << "Penjualan" << endl;
	cout << "------------------" << endl;
	cout << "Januari " << setw(10) << num1 << endl;
	cout << "Februari" << setw(10) << num2 << endl;
	cout << "Maret   " << setw(10) << num3 << endl;
	cout << "april   " << setw(10) << num4 << endl;
	
	return 0;
}
