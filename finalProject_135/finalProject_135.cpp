#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return ; }
	virtual void input() { return ; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	//isi disini
	
};
class Pemrograman : public MataKuliah { //isi disini
public:
	float hitungNilaiAkhir() {
		float nilaiakhir = presensi, activity, exercise, tugasakhir;
		return nilaiakhir;
	}
	void cekkelulusan() {
		float nilaiakhir = hitungNilaiAkhir();
		if (nilaiakhir > 75) {
			cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir 75 " << nilaiakhir << endl;
		}
		else {
			cout << "maaf, anda tidak lulus " << nilaiakhir << endl;
		}
	}
	void input() {
		float presensi, activity, exercise, tugasakhir;
		cout << "masukan nilai presensi (0-100): ";
		cin >> presensi;
		cout << "masukan nilai activity (0-100): ";
		cout << "masukan nilai exercise (0-100): ";
		cout << "masukan nilai tugas akhir (0-100): ";

		setPresensi(75);
	}
};
int main() { //isi disini
	Pemrograman pemrograman;

	cout << "program dibuat" << endl;

	Pemrograman.input();
	pemrograman.cekKelulusan();

	return 0;
}

