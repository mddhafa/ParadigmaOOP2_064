#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang di buat\n" << endl;
	}
	~orang() {
		cout << "orang di hapus\n" << endl;
	}
};

