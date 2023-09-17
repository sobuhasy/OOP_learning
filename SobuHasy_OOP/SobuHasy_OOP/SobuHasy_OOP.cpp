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

	Fursuiter fursuiter2;
	fursuiter2.fursonaName = "Yul";
	fursuiter2.Species = "wolverine";
	fursuiter2.fursuitMaker = "Nyaamiou";
	fursuiter2.fursuiterAge = 22;
	fursuiter2.IntroduceYourself();

	cout << "It is a pleasure to be in the Furry Fandom and to program things!" << endl;
}