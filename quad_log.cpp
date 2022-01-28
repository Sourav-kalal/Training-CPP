#include <iostream>
#include <cmath>
#include <fstream>
#include <time.h>
using namespace std;

int main() {
    time_t my_time = time(NULL);
    ofstream outfile;
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    
    if(a==0){
        outfile.open("file.txt", ios_base::app); 
        outfile<<"\n"<< ctime(&my_time)<< "\t\t\t\t\t\tNot a quadratic equation"<<"\t wrong input"<<endl; 
    }
    
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        outfile.open("file.txt", ios_base::app); 
        outfile<< ctime(&my_time) << "\t\t\t\t\t\treal roots and unequal"<<"\t right input"<<endl; 
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
        outfile.open("file.txt", ios_base::app); 
        outfile<< ctime(&my_time) << "\t\t\t\t\t\treal roots and equal"<<"\t right input"<<endl; 
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        outfile.open("file.txt", ios_base::app); 
        outfile<< ctime(&my_time) << "\t\t\t\t\t\timaginary roots "<<"\t right input"<<endl; 
    }

    return 0;
}