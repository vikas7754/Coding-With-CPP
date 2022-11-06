#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
    string txt;
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "This is a text file.";
    MyFile.close();
    
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, txt))
    {
        // Output the text from the file
        cout << txt<<endl;
    }
    // Close the file
    MyReadFile.close();
}