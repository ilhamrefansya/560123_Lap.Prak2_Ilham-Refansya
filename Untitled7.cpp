#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	int A, B, C, D, E, F, G, H, I;
	cout << "Masukkan baris 1(pisahkan spasi): " << endl;
	cin >> A >> B >> C;
	cout << "Masukkan baris 2(pisahkan spasi): " << endl;
	cin >> D >> E >> F;
	cout << "Masukkan baris 3(pisahkan spasi): " << endl;
	cin >> G >> H >> I;
	cout << right;
	cout << "Matriks anda: " << endl;
	cout << setw(3) << A << setw(3) << B << setw(3) << C << setw(3) << endl;
	cout << setw(3) << D << setw(3) << E << setw(3) << F << setw(3) << endl;
	cout << setw(3) << G << setw(3) << H << setw(3) << I << setw(3) << endl;
	
	return 0;
	
}
