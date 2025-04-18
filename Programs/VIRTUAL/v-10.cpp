/* 10. Write a C++ program to create an abstract class Instrument with abstract methods play() and tune(). 
Create derived classes for Glockenspiel and Violin that extend the Instrument class and implement the respective 
methods to play and tune each instrument. */

#include <iostream>
using namespace std;

class Instrument {
public:
	virtual void play() = 0;
	virtual void tune() = 0;
};

class Glockenspiel : public Instrument {
public:
	void play()	{
		cout << "Playing Glockenspiel\n";
	}
	void tune()	{
		cout << "Tune of Glockenspiel\n";
	}
};

class Violin : public Instrument {
public:
	void play() {
		cout << "Playing Violin\n";
	}
	void tune()	{
		cout << "Tune of the Violin\n";
	}
};

int main() {
	Glockenspiel glock;
	Violin violin;
	glock.play();
	glock.tune();
	violin.play();
	violin.tune();
}

/*
Playing Glockenspiel
Tune of Glockenspiel
Playing Violin
Tune of the Violin

*/
