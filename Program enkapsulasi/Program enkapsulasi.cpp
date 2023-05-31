#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10];
public:
	void serSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};

int main() {
	remoteLampu lampuRumah;

	lampuRumah.serSaklarNo(0, "Lampu Teras Rumah");
	lampuRumah.serSaklarNo(1, "Lampu Ruang Tamu");
	lampuRumah.serSaklarNo(2, "Lampu kamar tidur ");
	lampuRumah.serSaklarNo(3, "Lampu Dapur");

	cout << lampuRumah.getSaklarNo(0) << endl;
	cout << lampuRumah.getSaklarNo(1) << endl;
	cout << lampuRumah.getSaklarNo(2) << endl;
	cout << lampuRumah.getSaklarNo(3) << endl;

	return 0;
}