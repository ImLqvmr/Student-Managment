#include <iostream>

int addRecord(std::string prevGrade[], std::string Class[], std::string rollNo[], std::string name[], int reg[]);
void viewRecord(std::string prevGrade[], std::string Class[], std::string rollNo[], std::string name[], int reg[]);

int currentReg = 0;

int main() {
   	std::string name[100];
   	std::string prevGrade[100];
   	std::string Class[100];
   	std::string rollNo[100];
   	int reg[100] = {0};

	char addView;

do{
	std::cout << '\n';
	std::cout << " (A) Add a Record: \n (V) View a Record: \n (E) Exit! ";
	std::cin >> addView;
	std::cin.ignore();
	std::cout << '\n';
	
	if(addView == 'a' || addView == 'A'){
		int currentReg = 0;
		addRecord(prevGrade, Class, rollNo, name, reg);
		
	}
	
	else if(addView == 'v' || addView == 'V'){
		viewRecord(prevGrade, Class, rollNo, name, reg);
	}
	
	else if(addView == 'e' || addView == 'E'){
		std::cout << "Thanks for Visiting!";
		break;
	}
	
	else{
		std::cout << "Invalid Input! \n";
	}
	
}while(addView != 'a' || addView != 'A');


    return 0;
}

int addRecord(std::string prevGrade[], std::string Class[], std::string rollNo[], std::string name[], int reg[]){
char add;
char exit;

do{
	std::cout << " (A) Add Student: \n (E) Exit! ";
	std::cin >> add;
	std::cin.ignore();

	
	if(add == 'a' || add == 'A'){
			
			std::cin.ignore();
			std::cout << "********************Student Record********************* \n";
			std::cout << "\n";
			std::cout << "Student's Name: ";
			std::getline(std::cin, name[currentReg]);
			
			std::cout << "Class: ";
			std::getline(std::cin, Class[currentReg]);
			
			std::cout << "Roll No. ";
			std::getline(std::cin, rollNo[currentReg]);
			
			std::cout << "Previous Year Grade: ";
			std::getline(std::cin, prevGrade[currentReg]);
			std::cout << "\n";
			std::cout << "\n";
			std::cout << "Registration No. = " << currentReg + 1;
			currentReg++;
			std::cout << "\n";
			
			
			std::cout << "******************************************************* \n";
			std::cout << '\n';
	
	}
	
	else if(add == 'e' || add == 'E'){
		std::cout << '\n';
		break;
	}
	
	else{
		std::cout << '\n';
		std::cout << "Invalid Input! \n";
		std::cout << '\n';
	}
	
}while(add != 'e' || add == 'E');
	
	return currentReg;
}

void viewRecord(std::string prevGrade[], std::string Class[], std::string rollNo[], std::string name[], int reg[]){
int inReg;
std::cout << '\n';
	std::cout << "Registration Number?: ";
	std::cin >> inReg;
	std::cin.clear();
	fflush(stdin);
	std::cout << '\n';
	
	if(inReg <= currentReg){
	
		inReg = inReg - 1;
	
		std::cout << "Name:" << name[inReg] << '\n';
		std::cout << "Class: " << Class[inReg] << '\n';
		std::cout << "Roll No: " << rollNo[inReg] << '\n';
		std::cout << "Previous Year Grade: " << prevGrade[inReg] << '\n';
	
}

	else if(inReg >> currentReg || inReg << 0){
		std::cout << "Student Not Registered! \n";
	}
	
	else{
		std::cout << "Invalid Input!";
	}
	
}

