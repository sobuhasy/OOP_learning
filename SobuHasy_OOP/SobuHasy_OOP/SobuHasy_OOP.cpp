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
};

int main() {
	Fursuiter fursuiter1;
	fursuiter1.fursonaName = "SobuHasy";
	fursuiter1.Species = "bunny";
	fursuiter1.fursuitMaker = "R5Suits";
	fursuiter1.fursuiterAge = 25;
	fursuiter1.IntroduceYourself();
	cout << "It is a pleasure to be in the Furry Fandom and to program things!" << endl;
}