#include <iostream>

using namespace std;

int main () {
	int time = 0;
	
	cout<<"Ingresa la hora en formato de 24 hrs \n" ; cin >> time;
	
	if (time >= 1 && time<=11){
		cout<<"Good morning";
	} else if (time == 12){
		cout<<"Noon";
	} else if (time >= 13 && time <= 18){
		cout <<"Good evening";
	} else if(time >= 19 && time <= 23){
		cout<<"Good night";
	} else if (time==0){
		cout<<"midnight";
	} else{
		cout<<"Introduce una hora valida";
	}

		return 0;	
}
