/*#include<iostream>
using namespace std;

int main() {
	int bilangan1, bilangan2;
	cout << "masukkan dua bilangan (pisahkan dengan spasi): ";
	cin >> bilangan1 >> bilangan2;
	
	cout << "bilangan pertama: " << bilangan1 << endl;
	cout << "bilangan kedua : " << bilangan2 << endl;
	
	return 0;
	
}
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string kalimat;
	cout << "masukkan kalimat: ";
	getline(cin, kalimat);
	cout << "kalimat yang anda masukkan: " << kalimat << endl;
	return 0;
}
