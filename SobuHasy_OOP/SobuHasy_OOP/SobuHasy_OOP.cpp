#include <iostream>
using namespace std;

class abstractFursuiter {
	virtual void NSFWVerification()=0;
};

class Fursuiter:abstractFursuiter {
private:
	string fursonaName;
	string Species;
	string fursuitMaker;
	int fursuiterAge;

public:
	void setName(string name) {
		fursonaName = name;
	}
	string getName() {
		return fursonaName;
	}
	void setSpecies(string species) {
		Species = species;
	}
	string getSpecies() {
		return Species;
	}
	void setMaker(string maker) {
		fursuitMaker = maker;
	}
	string getMaker() {
		return fursuitMaker;
	}
	void setAge(int age) {
		fursuiterAge = age;
	}
	int getAge() {
		return fursuiterAge;
	}
	void IntroduceYourself() {
		cout << "Hello, my name is " << fursonaName << ", I am a " << fursuiterAge << " year old " << Species << ", and my Fursuit was made by " << fursuitMaker << "." << endl;
	}


	Fursuiter(string name, string species, string maker, int age){
		fursonaName = name;
		Species = species;
		fursuitMaker = maker;
		fursuiterAge = age;
	}

	void NSFWVerification() {
		if (fursuiterAge >= 18) {
			cout << fursonaName << " is allowed to go to the NSFW spaces" << endl;
		}
		else {
			cout << fursonaName << " is allowed to go only to the SFW spaces" << endl;
		}
	}
};

int main() {
	Fursuiter fursuiter1=Fursuiter("SobuHasy", "bunny", "R5Suits", 25);
	fursuiter1.IntroduceYourself();

	Fursuiter fursuiter2=Fursuiter("Yul", "wolverine", "Nyaamiou", 22);
	fursuiter2.IntroduceYourself();

	Fursuiter fursuiter3 = Fursuiter("Iixmggie", "dog", "myself", 16);
	fursuiter3.IntroduceYourself();

	fursuiter1.setMaker("Ev1Makers");
	cout << "My dream is to have my " << fursuiter1.getName() << " 2.0 from " << fursuiter1.getMaker() << "!" << endl;

	fursuiter1.NSFWVerification();
	fursuiter3.NSFWVerification();

	cout << "It is a pleasure to be in the Furry Fandom and to program things!" << endl;
}