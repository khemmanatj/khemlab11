#include<iostream>
using namespace std;

int main(){
	 cout<<"Please input grade of each student (A-F) or input 0 to exit."<<endl;
	 int count[5]={};
	 int i=1;
	 char x;
	 while(true){
		
		 cout<<"Student ["<<i<<"]: ";
		 cin>>x;
		 
		if(x=='A'){
           count[0]++;
		   i++;
		}else if(x=='B'){
		count[1]++;
		i++;
		}else if(x=='C'){
			count[2]++;
			i++;
		}else if(x=='D'){
			count[3]++;
			i++;
		}else if(x=='F'){
			count[4]++;
			i++;
		}else if(x=='0'){
			break;
			
		}else {
			cout<<"Wrong input. Please input again."<<endl;
		}  

	 }
     cout<<"In total "<<i-1<<" students."<<endl;
	 cout<<"A = "<<count[0]<<", ";
	 cout<<"B = "<<count[1]<<", ";
     cout<<"C = "<<count[2]<<", ";
	 cout<<"D = "<<count[3]<<", ";
	 cout<<"F = "<<count[4];
	 return 0;
}


