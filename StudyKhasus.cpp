/* STUDI KASUS */

#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
int main(){	
	int a=7000 ,b=9000;
	int l, menu, jumlah, bayar, kembali;
	string nama;
	time_t now = time(0);
	char* dt = ctime(&now);
	
	cout<<"==========STRUK PEMBELIAN BENSIN========== "<<endl;
	cout<<"---------------SPBU CILEBAK--------------- "<<endl<<endl;
	cout<<"NAMA PEMBELI : ";
	cin>>nama;
	cout<<"Jenis bensin : "<<endl;
	cout<<"1. PERTALITE "<<endl;
	cout<<"2. PERTAMAX "<<endl;
	cout<<"Pilih jenis bensin : ";
	cin>>menu;
	
	if (menu==1){
		cout<<"Masukan Liter : "; cin>>l;
		jumlah = l*a;
		cout<<"Total harga Rp."<<jumlah<<endl;
	}
	else{
		cout<<"Masukan Liter : "; cin>>l;
		jumlah = l*b;
		cout<<"Total Harga Rp."<<jumlah<<endl;
	}
	cout<<"Total pembayar : Rp.";
	cin>>bayar;

	system("cls");
	
	cout<<"==================STRUK PEMBELIAN SPBU CILEBAK================="<<endl;
	cout<<"==============================================================="<<endl<<endl;
	cout<<"Nama Pembli \t\t: "<<nama<<endl;
	if (menu ==1 ){
	cout<<"Jenis bensin \t\t: "<<"PERTALITE"<<endl;
	}
	else {
	cout<<"Jenis bensin \t\t: "<<"PERTAMAX"<<endl;
	}
	cout<<"Total Liter \t\t: "<<l<<" Liter"<<endl;
	cout<<"Total Harga \t\t: Rp."<<jumlah<<endl;
	cout<<"Total pembayaran\t: Rp."<<bayar<<endl;
	kembali = bayar-jumlah;
	cout<<"Total kembalian \t: Rp."<<kembali<<endl<<endl;
	cout<<"\tTerimakasih telah berbelanja di SPBU CILEBAK"<<endl;
	cout<<"\t       semooga selamat  sampai tujuan"<<endl;
	cout<<"\t\t  "<<dt;
	getch();
}
