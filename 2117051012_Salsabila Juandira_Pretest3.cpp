#include <iostream>
using namespace std;
/*salsabila juandira
  2117051012*/
int main(){
	cout<<"Masukan nilai Mata Kuliah DDP anda : ";
	int nilai;
	cin>>nilai;
	if (nilai>=76)
	cout<<"A";
	else if (nilai>=71)
	cout<<"B+";
	else if(nilai>=66)
	cout<<"B";
	else if (nilai>=61)
	cout<<"C";
	else if(nilai>=56)
	cout<<"D";
	else if(nilai>=50)
	cout<<"E";
	else if(nilai<=50)
	cout<<"F";
	return 0;
}

