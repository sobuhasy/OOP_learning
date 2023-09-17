#include <iostream>
using namespace std;

class Fursuiter {
public:
	string fursonaName;
	string Species;
	string fursuitMaker;
	int fursuiterAge;

	void IntroduceYourself() {
		cout << "Hello, my name is " << fursonaName << ", I am a " << fursuiterAge << " year old " << Species << ", and my Fursuit was made by " << fursuitMaker << "." << endl;
	}
	Fursuiter(string name, string species, string maker, int age){
		fursonaName = name;
		Species = species;
		fursuitMaker = maker;
		fursuiterAge = age;
	}
};

int main() {
	Fursuiter fursuiter1=Fursuiter("SobuHasy", "bunny", "R5Suits", 25);
	fursuiter1.IntroduceYourself();

	Fursuiter fursuiter2=Fursuiter("Yul", "wolverine", "Nyaamiou", 22);
	fursuiter2.IntroduceYourself();

	cout << "It is a pleasure to be in the Furry Fandom and to program things!" << endl;
}