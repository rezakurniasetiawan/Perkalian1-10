#include <iostream>
using namespace std;

int main(){
	
	int i,n,batas=10,jumlah;
	
	menu:
  cout<<"=================================\n";
  cout<<"WELCOME TO PERKALIAN 1 - 10\n\n";
  cout<<"Reza Kurnia Setiawan\n";
  cout<<"NIM : 19051397021\n";
  cout<<"PRODI : MANAJEMEN INFORMATIKA\n";
  cout<<"================================\n";
	cout<<"\n\n";
	cout<<"masukkan agka yang ingin dikalikan\n";
	cin>>n;
	cout<<"maka....\n\n";
	
	for(i=1;i<=batas;i++){
		jumlah=i*n;
		cout<<i<< " x " <<n<<" = "<<jumlah<<endl;
	}
	return 0;
	
}
