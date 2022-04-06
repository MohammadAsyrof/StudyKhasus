using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Selamat datang di Rumah Makan cilebak \n";
      cout<< "Daftar menu : \n\n";
      cout<< "1. Ayam Geprek  Rp.21000 \n";
      cout<< "2. Ayam Goreng  Rp.17000 \n";
      cout<< "3. Udang Goreng Rp.19000 \n";
      cout<< "4. Cumi Gorengk Rp.20000 \n";
      cout<< "5. Ayam Bakar   Rp.25000 \n";
		}

    void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << bnyk_aymGr << endl;
			tulis_data << bnyk_aymBk;
			tulis_data.close(); 
    }

    private :
      ofstream tulis_data;
      int bnyk_
    
};