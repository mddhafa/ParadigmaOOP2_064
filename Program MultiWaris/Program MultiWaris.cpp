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

class manusia {
public:
	string jeniskelamin;

	manusia(string pJeniskelasmin) :
		jeniskelamin(pJeniskelasmin) {
		cout << "manusia di buat\n" << endl;
	}
	~manusia() {
		cout << "manusia di hapus\n" << endl;
	}
};