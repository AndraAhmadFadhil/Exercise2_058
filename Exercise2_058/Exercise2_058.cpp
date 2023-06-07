#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui
	//fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { 
private:
	string jejari[];
public:
	void setJejari(int i, string value) {
		jejari[i] = value;
	}
	string getJejari(int i) {
		return jejari[i];
	}
};
class Bujursangkar :public bidangDatar {
private:
	string sisi[10];
public:
	void setSisi(int i, string value) {
		sisi[i] = value;
	}
	string getSisi(int i) {
		return sisi[i];
	}
};

float jejari(float a, float b) {
	return 3.14 * a * b;
}

float sisi(float l, float k) {
	return 3.14 * l * k;
}

int main() {
	bidangDatar Lingkaran;

	Lingkaran.setX(int a);
	cout << Lingkaran.getX();

	bidangDatar Bujursangkar;
	Bujursangkar.setX(int a);
	cout << Bujursangkar.getX();

}