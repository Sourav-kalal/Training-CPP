#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // // Create and open a text file
    // fstream MyFile("filename.txt");

    // // Write to the file
    // MyFile << "Files\ncan\nbe\ntricky,\nbut\nit\nis\nfun\nenough!";

    // // Close the file
    // MyFile.close();

    string myText;
    int count = 0;

    fstream MyReadFile("filename.txt");
    fstream myfile("filename1.txt");
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText << endl;
        myfile << myText;
        if (count == 6)
        {
            myfile << "Name";
        }
        count++;
    }
    cout << count;
    MyReadFile.close();
}