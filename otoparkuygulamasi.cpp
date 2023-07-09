#include<iostream>
using namespace std;
class otopark{
	private:
		int ucret;
		int secim;
		int aracturu;
		int saat;
		int toplamucret;
		void hesapla();
	public:	
		void menu();
};
void otopark::hesapla(){
	if(aracturu==1){		
		cout<<"minibus icin kac saat kaldigini giriniz:";
		cin>>saat;
		toplamucret=15 + saat*6;
		cout<<"toplam ucretiniz: "<<toplamucret<<endl;
		}
	else if(aracturu==2){
		cout<<"otomobil icin kac saat kaldigini giriniz:";
		cin>>saat;
		toplamucret=12 + saat*4;
		cout<<"toplam ucretiniz: "<<toplamucret<<endl;
		
	}
    else if(aracturu==3){
    	cout<<"kamyon icin kac saat kaldigini giriniz:";
		cin>>saat;
		toplamucret=18 + saat*8;
		cout<<"toplam ucretiniz: "<<toplamucret<<endl;
		
	}
	else{
		cout<<"hatali islem!!!"<<endl;
	}
	system("pause");
}

void otopark::menu(){
	while(true){
	system("cls");
	cout<<"********************************"<<endl;
	cout<<"otopark uygulamasina hosgeldiniz!!"<<endl;
	cout<<"arac turunu seciniz"<<endl;
	cout<<"1-minibus  2-otomobil  3-kamyon  "<<endl;
	cin>>secim;
	if(secim==0){
		cout<<"cikis gerceklesti!..";
		break;
	}
	else if(secim>0 && secim<4 ){
		aracturu=secim;
		hesapla();
		system("cls");
	}

	}
	
}
int main(){
	otopark nesne;
	nesne.menu();
	
	return 0 ;
}
