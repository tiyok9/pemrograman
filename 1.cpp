#include<iostream>
#include<conio.h>
#include <stdio.h>
#include<windows.h>
using namespace std;

class luar{
	private:
	int a;
	double harga,uang,bali;
	public:
	//t(int a,double harga,double uang,double bali);
		void bayar(){
		
		harga=a*60000;
		cout<<"total bayar = "<<harga<<endl;
		cout<<"masukan uang anda = ";
		cin>>uang;
		bali=uang-harga;
		if(uang<harga){
			cout<<"uang kurang"<<endl<<endl;
		bayar();
		}
		else{
			cout<<"kembalian anda rp."<<bali<<endl;
			getch();
			system("cls");
			cout<<"selamat menonton -_-";	
			getch();
			system("cls");
		}
		
	}

	void avg(){
		
		cout<<"================================="<<endl;
		cout<<"	TIKET AVENGERS FILM			"<<endl;
		cout<<"================================="<<endl;
		cout<<"Masukan jumlah pembelian tiket : ";
		cin>>a;
		bayar();
	}
	
		void dc(){
		system("cls");
		cout<<"================================="<<endl;
		cout<<"	TIKET DC FILM				"<<endl;
		cout<<"================================="<<endl;
		cout<<"Masukan jumlah pembelian tiket : ";
		cin>>a;
		bayar();
	}
	
};

class indo{
	private:
		int a;
		double harga,uang,bali;
	public:
	void bayar(){
		
		harga=a*40000;
		cout<<"total bayar = "<<harga<<endl;
		cout<<"masukan uang anda = ";
		cin>>uang;
		bali=uang-harga;
		if(uang<harga){
			cout<<"uang kurang";
		}
		else{
			cout<<"kembalian anda rp."<<bali<<endl;
			getch();
			system("cls");
			cout<<"selamat menonton -_-";
			getch();
			system("cls");	
				
		}
		getch();
	}
	void raid(){
		system("cls");
		cout<<"================================="<<endl;
		cout<<"	TIKET THE RAID FILM			"<<endl;
		cout<<"================================="<<endl;
		cout<<"Masukan jumlah pembelian tiket : ";
		cin>>a;
		bayar();
	}
	void mika(){
		system("cls");
		cout<<"================================="<<endl;
		cout<<"	TIKET MIKA FILM			"<<endl;
		cout<<"================================="<<endl;
		cout<<"Masukan jumlah pembelian tiket : ";
		cin>>a;
		bayar();
	}

};

void tampil(){
	cout<<"========================================="<<endl;
	cout<<"PROGRAM PEMBELIAN TIKET FILM BIOSKOP OOP"<<endl;
	cout<<"	DENGAN 2 CLASS FILM				"<<endl;
	cout<<"		17.11.1597					"<<endl;
	cout<<"	   informatika 10				"<<endl;
	cout<<"========================================="<<endl;
}
main(){
	
	  int pilihan;
      atas :
      luar l;
	  indo i;
	  tampil();
	  cout<<endl<<" Menu Pilihan Film "<<endl;
      cout<<" 1. Avengger "<<endl;
      cout<<" 2. DC "<<endl;
	  cout<<" 3. The Raid "<<endl;
	  cout<<" 4. Mika"<<endl;
      cout<<" 0. Exit Program "<<endl;
      cout<<endl;
      cout<<" Input Nomor Menu Pilihan = ";cin>>pilihan;
      cout<<endl;
           
      switch (pilihan)
      {
     	case 1 : l.avg ();
            goto atas;
            break;
    	case 2 : l.dc ();
            goto atas;
            break;
		case 3 : i.raid ();
    		goto atas;
           	break;
		case 4 : i.mika ();
    		goto atas;
           	break;
		case 0 : exit:
            cout<<" Terima Kasih  "<<endl;
            break;
    	default: cout <<"Anda Salah Input Pilihan"<<endl;
            goto atas;
     
      }
    
      return 0;
}
