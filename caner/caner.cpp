
//Caner Erdoğdu

#include <iostream>

using namespace std;

int main() {
	
	int ogrenciNo;
	cout << "Ogrenci No giriniz: ";
	cin >> ogrenciNo;
	
	if (ogrenciNo == 5) {
		cout << "Caner Erdogdu\n";
	}
	else {
		cout << "yanlis no girdiniz";
	}

	int vize, final,ortalama;
	cout << "vize notu giriniz: ";
	cin >> vize;
	cout << "final notu giriniz: ";
	cin >> final;
	ortalama = (vize * 0.40) + (final * 0.60);
	
	if (ortalama >= 100) {
		cout << "AA"<<endl<<"Ogrenci Gecti";
	}
	else if (ortalama >= 85) {
		cout << "BB"<<endl<<"Ogrenci Gecti";
	}
	else if (ortalama >= 60) {
		cout << "CC"<<endl<<"Ogrenci Kosullu Gecti";
	}
	else if (ortalama >= 40) {
		cout << "DD"<<endl<<"Ogrenci Kaldi";
	}
	
	cout << "ogrencinin ortalamasi: "<<ortalama;

	return 0;
}

	



	
