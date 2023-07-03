#include <iostream>
using namespace std;
 bool EsPrimo(int n);
int main(){
	int num;
	cout<<"ingrese un numero";
	cin>>num; 
	bool b= EsPrimo(num);
	if(b==true){
		cout<<"es primo";
	}
	if(b==false){
		cout<<"no es primo";
	}
	return 0;
}
 bool EsPrimo(int n){ 
 bool flag=false;
 if(n%n==0 && n%1==0){
 	flag=true;
 }
 return flag;
 }
