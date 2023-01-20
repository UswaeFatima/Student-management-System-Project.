#include<iostream> 
#include<cmath>
#include <conio.h>
#include<fstream>
#include<string>
#include<limits>
using namespace std;

float sum()
{
	float sum, a, b;
	while (true) {
        cout << "enter  the first number" << endl;
		cin >> a;
		cout << "enter the second number" << endl;
		cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	sum = a + b;
	cout<< "Sum of " << a << " & " << b << " is " << sum;
	return sum;
}
float mul()
{
	float mul, a, b;
	while (true) {
        cout << "enter the first number" << endl;
		cin >> a;
		cout << "enter the second number" << endl;
		cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	mul = a * b;
	cout<< "Multiplication of " << a << " & " << b << " is= " <<mul;
	return mul;
}
float min()
{
	float min, a, b;
	while (true) {
        cout << "enter the first number" << endl;
		cin >> a;
		cout << "enter the second number" << endl;
		cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	min = a - b;
	cout<< "Subtraction of " << b <<" from " << a << " is= " << min;
	return min;
}
float div()
{	
	float div, a, b;
	while (true) {
        cout << "enter the first number" << endl;
		cin >> a;
		cout << "enter the second number" << endl;
		cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	div = a / b;
	cout << "Division of " << a <<" with "  << b << " is= "<< div;
	return div;
}
float expo() {
	float expo, a, b;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
		cout << "enter the exponent" << endl;
		cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	expo = pow(a, b);
	cout<< "Power of " << a << " with exponent " << b << " is= " << expo;
	return expo;
}
float square() {
	float square, a, b;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	square = sqrt(a);
	cout << "Sqaure Root of " << a << " is= " << square;
	return square;
}
float logg() {
	float logg, a;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	logg = log(a);
	cout << "Log of " << a <<" is=" << logg;
	return logg;
}
float logg10() {
	float logg10, a;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	logg10 = log10(a);
	cout << "Log with base 10 of " << a << " is= " <<logg10 << endl;
	return logg10;
}
float anlogBase2() {
	float anlogBase2, a;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	anlogBase2 = pow(2, a);
	cout << "Antilog with base 2 of " << a << " is= " << anlogBase2;
	return anlogBase2;
}
float anlogBase10() {
	float anlogBase10, a;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	anlogBase10 = pow(10, a);
	cout << "Antilog with Base 10 of " << a  << " is = "<< anlogBase10;
	return anlogBase10;
}
double anlogBasee() {
	float anlogBasee, a;
		while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	anlogBasee = pow(2.718281828, a);
	cout<<"AnaLog with base e of "<< a <<" is= "<< anlogBasee;
	return anlogBasee;
}
int table() {
	int table ;
	int a, b;
	while (true) {
        cout << "enter 1st digit" << endl;
		cin >> a;
		cout << "enter the 2nd digit" << endl;
		cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	cout << "the table of " << a << "is:" << endl;
	for (int i = 0; i <= b; i++)
	{
		cout << a << "x" << i << "=" << a * i << endl;
	}
	return table;
}
float cuberoot() {
	float cuberoot, a;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	cuberoot = pow(a, (1.0 / 3.0));
	cout << "Cube Root of " << a << " is=" <<cuberoot;
    return cuberoot;
}
float sine() {
	float sine, a;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	sine = sin(a);
	cout<<"sine of "<< a << " is= "<< sine;
	return sine;
}
float cose() {
	float cose, a;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }

	cose = cos(a);
	cout<<"Cos of " << a << " is="<< cose;
	return cose;
	
}
float tann() {
	float tann, a;
		while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }

	tann = tan(a);
	cout<< "Tan of " << a <<" is= " << tann;

	return tann;
}
float invssin() {
	float PI = 3.14159265;
	float invssin, a;
	while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	
	invssin = asin(a) * 180.0 / PI;
	cout<< "Invssin of  " << a <<" is= "<< invssin;
	return invssin;
}
float invscos() {
	float PI = 3.14159265;
	float invscos, a;
		while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	invscos = acos(a) * 180.0 / PI;
	cout<<"Invscos of " << a <<" is= "<<invscos;
	return invscos;
}
float invstan() {
	float PI = 3.14159265;
	float invstan, a;
		while (true) {
        cout << "enter the number" << endl;
		cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
        } else {
            break;
        }
    }
	invstan = atan(a) * 180.0 / PI;
	cout<<"Invstan of " << a << " is= "<<invstan;
	return invstan;
}
void history()
{
    string line;
    ifstream file("history.txt");
    if (file.is_open())
	{
        while (getline(file, line))
		{
            cout << line << endl;
        }
        file.close();
    } 
	else
	{
        cout << "Unable to open file.";
    }
}
int main() {
    ofstream outfile;
    outfile.open("History.txt", std::ios::app);
    
	
	float a, b, PI,c;
	int  check;
	cout << "Programming Fundamentals Project" << endl;
	cout << "Designed By:\n \t \t ~Abdul Rehman Qureshi  46453 \n \t \t ~Ali Raza  \t        47052" << endl;
	cout << " \t \t \t Welcome To\n \t \t \t \t --->DIGITAL CALCULATOR<---" << endl;
	cout << "---------------------------------------------------------------------------------------------------" << endl;
	cout << "Operations\t" << "\tTrigonometric Functions" << "\t\tLogarithmic Functions" << endl;
	cout << "---------------------------------------------------------------------------------------------------" << endl;
	cout << "1: Division\t\t" << "9: Sin\t\t" << "\t\t15: Log" << endl;
	cout << "2: Multiplication\t" << "10: Cos\t\t" << "\t\t16: Log with base 10" << endl;
	cout << "3: Subtraction\t\t" << "11: Tan\t\t" << "\t\t17: AntiLog with base 2" << endl; 
	cout << "4: Addition\t\t" << "12: Inverse of Sin" << "\t\t18: AntiLog with base 10" << endl;
	cout << "5: Exponent\t\t" << "13: Inverse of Cos" << "\t\t19: AntiLog with base e" << endl;
	cout << "6: Square root\t\t" << "14: Inverse of Tan" << endl;
	cout << "7: Cube root" << endl;
	cout << "8: Table(till the\nnumber you want)\t\t" << endl;
	cout << "20: Calculation history:" << endl;
	cout << "\nEnter the function that you want to perform : ";
	
	cin >> c;
	PI = 3.14159265;	
	check=round(c);
	switch (check)
	{
	
	case 1:
		cout << " You selected division:" << endl;
        outfile <<"Division : "<< div() <<endl;
        outfile.close();
		break;
	case 2:
		cout<< " You selected Multiplication"<<endl;
		outfile << "multiplication : " << mul() <<endl;
        outfile.close();
        break;
	case 3:
		cout << " You Selected Subtraction" << endl;
		outfile << "Subtraction : " << min() << endl;
        outfile.close();
		break;
	case 4:
		cout << " You Selected Addition " << endl;
		outfile << "Sum : "<< sum() << endl;
		outfile.close();
		break;
	case 5:
		cout << " You Selected Exponent" << endl;
		outfile << "Exponent: "<< expo() << endl;
		outfile.close();
		break;
	case 6:
		cout<< " You Selected Square Root"<<endl;
		outfile << "Square Root: "<< square() << endl;
		outfile.close();
		break;
	case 7:
		cout << " You Selected Cube Root" << endl;
		outfile << "Cube Root: "<< cuberoot() << endl;
		outfile.close();
		break;
	case 8:
		cout << " You Selected table " << endl;
		outfile << "Table : "<< table() << endl;
		outfile.close();
		break;
	case 9:
		cout<<" You selected Sin"<<endl;
	    outfile << "Sin : "<< sine() << endl;
		outfile.close();
		break;
	case 10:
		cout<<" You selected Cose "<<endl;
	    outfile << "Cos : "<< cose() << endl;
		outfile.close();
		break;
	case 11:
		cout<< " You selected Tan "<<endl;
		outfile<< "Tan :"<< tann() << endl;
        outfile.close();
		break;
	case 12:
	    cout <<" You selected Inverse of Sin"<< endl;
		outfile<< "Inverse of Sin : " << invssin() <<endl;
        outfile.close();
		break;
	case 13:
		cout<<" You selected Inverse of Cos"<< endl;
		outfile << " Inverse of Cos: " << invscos() <<endl;
        outfile.close();
		break;
	case 14:
		cout<<" You selected Inverse of Tan"<<endl;
		outfile<< "Inverse of tan : " << invstan() <<endl;
        outfile.close();
		break;
	case 15:
		cout<< " You Selected Log" << endl;
		outfile << "Log: "<< logg() << endl;
		outfile.close();
		break;
	case 16:
			cout<< " You Selected Log with base 10 " << endl;
		outfile << "Log with base 10: "<< logg10() << endl;
		outfile.close();
		break;
	case 17:
			cout<< " You Selected Antilog with base 2" << endl;
		outfile << "AntiLog with base 2: "<< anlogBase2() << endl;
		outfile.close();
		break;
	case 18:
		cout << " You Selected Antilog with Base 10" << endl;
		outfile << "AntiLog with base 10: "<<anlogBase10() << endl;
		outfile.close();
		break;
	case 19:
		cout<<" You Selected AntiLog with base e:"<<endl;
	    outfile << "AntiLog with base e : "<< anlogBasee() << endl;
		outfile.close();
		break;	
	case 20:
		history();
		break;		
	default:
		cout << "Wrong Input" << endl;
	}
	getch();
}
