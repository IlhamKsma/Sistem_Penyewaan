
#include <iostream>
#define lantaiatas 450000
#define lantaibawah 300000

using namespace std;

   const int dp=150000;
   int jumlah,pilihan,jmlh,lama;
   float harga,total;
   char menu;
   
   struct Booking
   {
   	char nama[50],alamat[50],jenis[50];
   	int pilih;
   	float nomor;
   };
   
   int main()
   {
   	cout << "*********************************" << endl;
   	cout << "*       Program Sewa Kost       *" << endl;
   	cout << "*********************************" << endl;
   	
   	
   	atas:
   		Booking book[50];
   		cout << "********************************" << endl;
   		cout << "| Pilihan Menu                 |" << endl;
   		cout << "| 1. Daftar Sewa kamar Kost    |" << endl;
   		cout << "| 2. Data Daftar Penyewa       |" << endl;
   		cout << "********************************" << endl;
   		cout << "Masukan Pilihan = ";
   		cin >> pilihan;
   		
   		if(pilihan == 1)
   		{
   			cout << "Masukkan Jumlah Penyewa : "; cin >> jumlah;
   			
   			for (int i = 0; i < jumlah; i++)
   			{
   				cout << endl;
   				cout << "*****************************" <<endl;
   				cout << "Nama            : ";
   				cin >> book[i].nama;
   				cout << "Alamat          : ";
   				cin >> book[i].alamat;
   				cout << "Nomot Telepon   : ";
   				cin >> book[i].nomor;
   				cout << "Pilih Kamar Lantai [1 / 2] : ";
   				cin >> book[i].pilih;
   				
			       cout << endl;
			       cout << "*********************************" << endl;
			       cout << "*     Informasi Pendaftaran     *" << endl;
			       cout << "*********************************" << endl;
			       cout << "Nama                      : " << book[i].nama << endl;
			       cout << "Kode Pilihan kamar        : " << book[i].pilih << endl;
			       cout << "Jenis Kamar Yang Diambil  : " << book[i].jenis ;
			       
			       switch(book[i].pilih)
			       {
			       	case 1 :
			       		{
			       			cout <<"Lantai1=300.000/Bulan" <<book[i].jenis<< endl;
			       			harga= lantaibawah ;
						   }
						   break;
				    case 2 :
				    	{
				    		cout <<"Lantai2=450.000/Bulan" <<book[i].jenis<< endl;
				    		harga= lantaiatas;
						}
						break;
						
					default:
						cout<<endl;
						cout<<"Kode Kamar Yang Anda Masukkan Salah"<<endl;
				   }
  						cout << "Lama Menginap Per Bulan        : ";cin>>lama;
  						cout << "Uang Muka                      : "    <<dp    <<endl;
  							 jmlh=lama*harga;
  							 total=jmlh-dp;
			 		    cout << "Biaya Sewa                     : "    <<jmlh     <<endl;
			 		    cout << "Sisa Pembayaran                : "    <<total     <<endl;
			 		    cout << "<><><><><><><><><><><><><><><><><><><><><><><>" << endl;
			   }
		   }
		   else if (pilihan == 2)
		   {
		   	
		   	int i=0;
		   	do
		   	{
		   		cout << "*****************************" << endl;
		   		cout << "Nama                 : " << book[i].nama   << endl;
		   		cout << "Alamat               : " << book[i].alamat << endl;
		   		cout << "Nomor Telepon        : " << book[i].nomor  << endl;
		   		cout << "Kode Pilihan Kamar   : " << book[i].pilih  << endl;
		   		cout << "*****************************" << endl;
		   		
		   		i++;
			   }while(i<jumlah);
		   }
		   else
		   	   cout << "pilihan tidak ada";
		   	   
		   	   cout << "kembali ke menu?[Y/T]    :";cin>>menu;
		   	   goto atas;
		   	   cout<<endl;
   		
   }



