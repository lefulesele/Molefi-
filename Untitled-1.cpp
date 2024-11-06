#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main(){
	
	srand(time(0));
	
	int numbers[5];
	for(int i=0;i<5;i++){
		numbers[i]=rand()%50+1;
	}
	
	int guesses=0;
	while(guesses<5){
		for(int i=0;i<5;i++){
		int guess;
		cout<<"guess the"<<i+1<<"th number:";
		cin>>guess;
		if(guess==numbers[i]){
			cout<<"correct!"<<i+1<<"th guess is correct."<<endl;
			
		}else{
			cout<<"incorrect.try again."<<endl;
			
		}
	}
	guesses++;
}
cout<<"you guessed all 5 numbers correctly!"<<endl;
return 0;
}