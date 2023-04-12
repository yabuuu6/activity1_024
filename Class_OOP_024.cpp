#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:
	void inputandata() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}

}; 

class Matakuliah {
private:
	string kode;
	string namamk;
	int sks;

public:
	void InputMK();
	void TampilMK();

};

void Matakuliah::InputMK() {
	cout << "\nMasukan Kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Masukan Sks Mata Kuliah : "; 
	cin >> sks;
}

void Matakuliah::TampilMK() {
	cout << "\nKode : " << kode << endl;
	cout << "Nama Matakuliah : " << namamk << endl;
	cout << "Jumlah SKS : " << sks << endl;
}

int main()
{
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.inputandata();
	mhs.tampildata();

	mk.InputMK();
	mk.TampilMK();
}

