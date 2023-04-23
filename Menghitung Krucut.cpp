#include <iostream>
#include <conio.h>

#define phi 3.14

using namespace std;
int main(){
	float r_alas, r_selimut, t, volume_krucut, luas_alas, luas_selimut;
	
	cout<<"masukkan jari jari alas = ";
	cin>>r_alas;
	cout<<"masukkan jari jari selimut = ";
	cin>>r_selimut;
	cout<<"masukkan tinggi kerucut = ";
	cin>>t;
	
	luas_alas=phi*r_alas;
	volume_krucut=luas_alas*t;
	luas_selimut+phi*r_selimut*r_selimut/3;
	
	cout<<"luas_alas adalah "<<luas_alas<<endl;
	cout<<"volume_krucut adalah "<<volume_krucut<<endl;
	cout<<"luas permukaan krucut "<<(luas_selimut+luas_alas)<<endl;
	
	getch();
}