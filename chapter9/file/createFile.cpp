#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string myText;
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
  }