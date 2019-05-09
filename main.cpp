// in JUCE there is already MIDI handler but ok.
#include <iostream>
#include<fstream>
#include<string.h>
//#include<mmsystem.h>
int rozmiar;
char* memblock;

using namespace std; //ifstream not working without, VS problem
int done;
// from main to diffrent functions could be good JK gonna do it later
int midieventhandler() {};
int midiparser() {};
int main()
{
	std::cout << "Welcome to MIDI Parser!\n"; //sth to show bout
	std::cout << "give filename";
	string name; // could also give it directly from another program
	std::cin >> name;
	ifstream::pos_type rozmiar;
	ifstream music(name, ios::in | ios::binary | ios::ate); // analyse it with binaries, easier to parse then
	ofstream output;
	output.open("output.txt");
	if (music.is_open()) //returns 0 if no 1 if true
	{
		rozmiar = music.tellg();
		memblock = new char[rozmiar];
		music.seekg(0, ios::beg);
		music.read(memblock, rozmiar);
		done = 1;
		music.close();

	};//reads binaries saves to file

	return 0;

}