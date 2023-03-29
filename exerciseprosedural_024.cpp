#include <iostream> 
using namespace std;


double rerata(double a, double b){
	return (a + b) / 2;
}

string status (double r ){
	if (r >= 70){
		return "lulus";
	}else {
		return "gagal";
	}
}

string status1(double r, double n) {
	if (r >= 70 || n >= 80) {
		return "lulus";
	}else {
		return "gagal";
	}
}

int main() {
	double nilaiMatematika, nilaiBinggris;

	cout << "Masukan Nilai matematika";
	cin >> nilaiMatematika;
	cout << "Masukan Nilai bahasa inggris";
	cin >> nilaiBinggris;


	cout << "nilai rata rata nya : " << rerata (nilaiMatematika, nilaiBinggris);
	cout << "\nStatus kelulusan nya : " << status(rerata(nilaiMatematika, nilaiBinggris));
	cout << "\nStatus kelulusan nya : " << status1(rerata(nilaiMatematika, nilaiBinggris), nilaiMatematika);
}