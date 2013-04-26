#include <iostream>// for input/output services
#include <fstream>//for the file streaming
#include <string.h>//we can now create/manipulate strings!!
#include <stdio.h> // for NULL
#include <stdlib.h> // for use of random function
#include <time.h> // for time

using namespace std;

int main()
{

cout << "\nWelcome to the random x,y,z coordinate generator for debugging data analysis programs.\n\n";

int range;
cout << "Please enter the range of your data set(e.g. max - min): ";
cin >> range;

int size;
cout << "Please enter the sample size of your data set: ";
cin >> size;

string file;
cout << "Please enter the filename of the outputfile you would like your random numbers to be held in: ";
cin >> file;

string atom;
cout << "Please enter the atomic symbol for the atoms you have: ";cin >> atom;

ofstream outputfile;
outputfile.open(file.c_str());

srand((unsigned)time(0));

double x_numbers[size], y_numbers[size], z_numbers[size];

for (int i = 0; i <= size - 1; i ++)
{ 

x_numbers[i] = rand() % range;
y_numbers[i] = rand() % range;
z_numbers[i] = rand() % range;

outputfile << atom << "\t" << x_numbers[i] << "\t" << y_numbers[i] << "\t" << z_numbers[i] <<  endl;

}
outputfile.close();
return 0;
}
