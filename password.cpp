#include <iostream>
#include <clocale>
#include <ctime>
#include <stdlib.h>
#include <string>


using namespace std;

int main() {
	
	setlocale(LC_ALL,"Turkish");
	
	int password,guess,multiplication = 1;
	int password_array[4];
	int guess_array[4];

		
	srand(time(0));

    password = rand() % 9000 + 1000;
    cout << password <<endl;
    
    for(int i = 3;i>=0;i--){
    	
    password_array[i]=(password / multiplication) % 10;
    	
    multiplication = multiplication*10;
	}
    
    do{
    	int counter = 0,anti_counter = 0;
    	multiplication = 1;
    	
    	cout << "Þifreyi tahmin et: ";
    	cin >> guess;
    	
     for(int j = 3;j>=0;j--){
    	
        guess_array[j]=(guess / multiplication) % 10;
    	
    	multiplication = multiplication*10;
    	
	   }
   	
   	 for(int k = 0;k<4;k++){
   		
   		if(password_array[k]==guess_array[k]){	
   			counter++;
   			
		   }}
		   
		   if(counter == 4){
		   cout << "Aferin þifreyi buldun.."; 
		   break;
	}
		for(int b =0;b<4;b++){
			for(int c=0;c<4;c++){
			
			if(guess_array[b] == password_array[c]){
				
				anti_counter++;
			}
			
		}
		}
   	
   	cout << counter <<" sayý doðru yerde." << endl;
   	cout << anti_counter-counter<<" sayý doðru ama yeri yanlýþ." << endl;	
  
    	
	}while(guess != password);
    
    
    
    
    
	return 0;
}
