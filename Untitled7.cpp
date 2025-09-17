#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	int A, B, C, D, E, F, G, H, I;
	cout << "masukkan baris 1" << endl;
	cin >> A >> B >> C >> endl;
	cout << "masukkan baris 2" << endl;
	cin >> D >> E >> F >> endl;
	cout << "masukkan baris 3" << endl;
	cin >> G >> H >> I >> endl;
	cout << right;
	cout << setw(3) << A << setw(3) << B << setw(3) << C << endl;
	cout << setw(3) << D << setw(3) << E << setw(3) << F << endl;
	cout << setw(3) << G << setw(3) << H << setw(3) << I << endl;
	
	return 0;
	
	
	
}
