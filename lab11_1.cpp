#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {}; 
	int sum = 0;
	int i = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" <<i++ << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0] +=1;
			sum++;
		}else if(grade == 'B'){ // if grade is B
			count[1] +=1;
			sum++;
		//and so on ... for grade = C, D, F	
		}else if(grade == 'C'){ // grade is wrong input
			count[2] +=1;
			sum++;
		}else if(grade == 'D'){
			count[3] +=1;
			sum++;
		}else if (grade == 'F'){
			count[4] +=1;
			sum++;
		}else if(grade == '0'){
			break;
		}else{
			cout << "Wrong input. Please input again."<<endl;
			i--;
		}
		//}else{
			//cout<<“Wrong input. Please input again.”;
		//}
	}while(true);
	
	
	cout << "In total " <<sum << " students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;

	
	return 0;
}
