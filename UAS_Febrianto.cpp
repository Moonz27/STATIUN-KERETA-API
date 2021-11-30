#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char mad='y';
	do
	{
		char nama[50],kode1,kelas[10],jurusan[15],usia[30],bonus[50];
		long ktp,tiket,kode2,asuransi,disc,hrgtiket,tambahan,total;
		
		system("cls");
		cout<<"|||       SELAMAT DATANG DI STATIUN KERETA API       |||"<<endl;
		cout<<"||| PEMESANAN KHUSUS PEMBERANGKATAN TIKET DARI MEDAN |||"<<endl;
		cout<<"--------------------------------------------------------"<<endl;

		cout<<"Nama Pemesan                      : ";cin.getline(nama,sizeof(nama));
		cout<<"No. KTP/KIA                       : ";cin>>ktp;
		cout<<"Masukan Kode Jurusan [A,B,C,D,E]  : ";cin>>kode1;
		cout<<"Kelas Kereta Api                  : ";cin>>kelas;
		cout<<"Jumlah Tiket                      : ";cin>>tiket;
		cout<<"Pilihan Usia [3,4]                : ";cin>>kode2;
		
		switch(kode1)
		{
			case 'A':asuransi=45000;strcpy(jurusan,"Perbaungan");break;
			case 'B':asuransi=35000;strcpy(jurusan,"Ranto");break;
			case 'C':asuransi=25000;strcpy(jurusan,"Kisaran");break;
			case 'D':asuransi=20000;strcpy(jurusan,"Tebing");break;
			case 'E':asuransi=15000;strcpy(jurusan,"Binjai");break;
		}
		
		if(strcmp(jurusan,"Perbaungan")==0)
		{
			{
				tambahan=(asuransi*0.05)+7000;
			}
				if(strcmp(kelas,"Bisnis")==0)
				{
					hrgtiket=155000;	
				}
				else if(strcmp(kelas,"Eksekutif")==0)
				{
					hrgtiket=170000;
				}
				else if(strcmp(kelas,"Ekonomi")==0)
				{
					hrgtiket=120000;
				}
				
		}else if(strcmp(jurusan,"Ranto")==0)
		{
			{
				tambahan=(asuransi*0.07)+6000;
			}
				if(strcmp(kelas,"Bisnis")==0)
				{
					hrgtiket=255000;	
				}
				else if(strcmp(kelas,"Eksekutif")==0)
				{
					hrgtiket=270000;
				}
				else if(strcmp(kelas,"Ekonomi")==0)
				{
					hrgtiket=220000;
				}		
		
		}else if(strcmp(jurusan,"Kisaran")==0)
		{
			{
				tambahan=(asuransi*0.06)+8000;
			}
				if(strcmp(kelas,"Bisnis")==0)
				{
					hrgtiket=350000;	
				}
				else if(strcmp(kelas,"Eksekutif")==0)
				{
					hrgtiket=375000;
				}
				else if(strcmp(kelas,"Ekonomi")==0)
				{
					hrgtiket=300000;
				}
				
		}else if(strcmp(jurusan,"Tebing")==0)
		{
			{
				tambahan=(asuransi*0.08)+9000;
			}
				if(strcmp(kelas,"Bisnis")==0)
				{
					hrgtiket=205000;	
				}
				else if(strcmp(kelas,"Eksekutif")==0)
				{
					hrgtiket=207000;
				}
				else if(strcmp(kelas,"Ekonomi")==0)
				{
					hrgtiket=175000;
				}
				
		}else if(strcmp(jurusan,"Binjai")==0)
		{
			{
				tambahan=(asuransi*0.09)+5000;
			}
				if(strcmp(kelas,"Bisnis")==0)
				{
					hrgtiket=425000;	
				}
				else if(strcmp(kelas,"Eksekutif")==0)
				{
					hrgtiket=470000;
				}
				else if(strcmp(kelas,"Ekonomi")==0)
				{
					hrgtiket=400000;
				}
				
		}else{
			tambahan=0;
			hrgtiket=0;
		}
		
		
		if(strcmp(kelas,"Bisnis")==0)
			{
				strcpy(bonus,"Kue Lastbox");	
			}
		else if(strcmp(kelas,"Eksekutif")==0)
			{
				strcpy(bonus,"Nasi lastbox");
			}
		else if(strcmp(kelas,"Ekonomi")==0)
			{
				strcpy(bonus,"Roti Bobo");
			}
		
		switch(kode2)
		{
		case 3 : strcpy(usia,"Dewasa");break;
		case 4 : strcpy(usia,"Anak-anak");break;
		}	
		
		if(strcmp(usia,"Anak-anak")==0)
			{
				disc=0.2*hrgtiket;			
			}
		else{
				disc=0;
			}
		
		total=(tiket*hrgtiket)+(asuransi+tambahan)-disc;
		
		
		cout<<"-------------------------------------"<<endl;
		cout<<"Jurusan yang dituju   = "<<jurusan<<endl;
		cout<<"Biaya Asuransi        = "<<asuransi<<endl;
		cout<<"Kategori Usia         = "<<usia<<endl;
		cout<<"Discount Khusus       = "<<disc<<endl;
		cout<<"Harga Satuan Tiket    = "<<hrgtiket<<endl;
		cout<<"Bonus                 = "<<bonus<<endl;
		cout<<"Biaya Tambahan        = "<<tambahan<<endl;
		cout<<"------------------------------------+"<<endl;
		cout<<"Harga Tiket Sesuai Pesanan = "<<total<<endl;
		cout<<endl;
		
		
		printf("Input Ada Data Lagi [y/t] : ");
		mad=getche();
		fflush(stdin);
		getch();
		}
		while (mad=='Y'||mad=='y');
	return 0;
}
