#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream MyFile("filename.txt");

    MyFile << "Files\ncan\nbe\ntricky,\nbut\nit\nis\nfun\nenough!";

    // Close the file
    MyFile.close();
    string myText;
    int count = 1;

    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText << endl;
        MyFile << myText + "\n";
        if (count == 5)
        {
            MyFile << "Name";
            MyFile << "\n";
        }
        count++;
    }
    cout << count;
    MyReadFile.close();
}