#include <iostream>
#include <string>
using namespace std;

int main () {
	string nama;
	cout << "Masukkan Nama Lengkap anda :";
	getline(cin,nama);
	
		string nim;
	cout << "Masukkan Nim anda :" ;
	getline(cin,nim) ;
	
		string fakultas;
	cout << "Masukkan Fakultas anda :"<<endl;
	getline(cin,fakultas);
		
	  string prodi;
	cout << "masukkan Program Studi anda :"<<endl;
	getline(cin,prodi) ;
	
	
	
	
	
	cout << "+++++++++Biodata Mahasiswa Universitas Negeri Surabaya 2024++++++++++++"<<endl<<endl<<endl;
	cout << "Nama Lengkap     :" << nama <<endl;
	cout << "Nim              :" << nim <<endl;
	cout << "Fakultas         :" << fakultas <<endl;
	cout << "Program Studi    :" << prodi <<endl;
	
	return 0;
}
