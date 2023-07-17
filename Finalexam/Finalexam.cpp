#include <iostream>
#include <string>
using namespace std;
//isi disini



	const int mahasiswa[100];
	int NIM[100];
	string nama[];
	string jurusan[];
	int tahunMasuk[100];
	int jumlahMahasiswa = 0;

//isi disini
	void tambahMahasiswa() {
		if (jumlahMahasiswa < 100) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Jurusan : ";
			getline(cin, jurusan[jumlahMahasiswa]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();
			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}
}
void tampilkanSemuaMahasiswa() {
	cout << "=========SEMUA DATA MAHASISWA============" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM : " << NIM[i] << endl;
		cout << "Nama : " << nama[i] << endl;
		cout << "Jurusan : " << jurusan[i] << endl;
		cout << "Tahun Masuk : " << NIM[i] << endl;
		cout << endl;
	}

};


void algorithmacariMahasiswaByNIM() {
	cout << "=========CARI MAHASISWA BERDASARKA NIM============" << endl;
	int cariNIM;
	cout << "Masukan NIM yang dicari";
	cin >> cariNIM;
	cin.ignore();

	bool found = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == cariNIM) {
			cout << "Data Mahasiswa dengan NIM " << cariNIM << " ditemukan:" << endl;
			cout << "NIM     : " << NIM[i] << endl;
			cout << "Nama    : " << nama[i] << endl;
			cout << "Jurusan : " << jurusan[i] << endl;
			cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
			found = true;
			break;
		}
	}

	if (!found) {
		cout << "Data Mahasiswa dengan NIM " << cariNIM << " tidak ditemukan." << endl;
	}


}
void algorithmaSortByTahunMasuk() {

};


int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
};/* 2. menggunakan bubble sort dan insertion sort *//* 3. stack menggunakan LIFO yg bekerja berdasarkan prinsip LIFO. Saat Anda 
menghapus buku dari tumpukan, buku paling atas akan dihapus terlebih dahulu.Anda perlu
mengembangkan metode untuk memeriksa apakah tanda kurung dalam ekspresi aritmatika
bersarang dengan benar. Sedangkan Queues menggunakan FIFO (frist in dan frist out) data yg masuk paling awal adalah data yg keluar paling awal*/

/* 4. stack contoh kehidupan nyata yang bekerja berdasarkan prinsip LIFO. Saat Anda 
menghapus buku dari tumpukan, buku paling atas akan dihapus terlebih dahulu. Anda perlu 
mengembangkan metode untuk memeriksa apakah tanda kurung dalam ekspresi aritmatika 
bersarang dengan benar. di gunakan di saat :
- undo/redu
- panggilan fungsi dalam rekursi
- riwayat navigasi */

/* 5.	a. 5
		b. in salah
		preorder benar
		post benarP*/
