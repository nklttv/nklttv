#include <iostream>
#include <stdio.h>
#include <string>

bool end = false;

class spell {
public:
	std::string name;
	int dhp, dmp;
};

class mage {
private:
	int hp, mp;
	std::string name;
public:
	void init(int newHp, int newMp, std::string newName) {
		hp = newHp;
		mp = newMp;
		name = newName;
	};
	std::string getName() { return name; };
	void say(std::string text) {
		printf("%s saying %s \n", name.c_str(), text.c_str());
	};
	int cast(spell &spl, mage &target) {
		if (hp > 0) {
			printf("%s hit enemy \n", target.getName().c_str());
			target.hit(spl);
			return -1;
		}
		else {
			return 0;
		}
	};
	void hit(spell &spl) {
		hp -= spl.dhp;
		if (hp < 0) {
			say(" i am lose ");
			end = true;
		}
	};
};

int main()
{
	mage vanya;
	vanya.init(100, 60, "Vanya");
	mage boris;
	boris.init(100, 55, "Boris");

	spell bolt;
	bolt.name = "bolt"; bolt.dhp = 40; bolt.dmp = 75;
	spell drain;
	drain.name = "drain"; drain.dhp = 85; drain.dmp = 20;

	while (!end) {
		vanya.cast(bolt, boris);
		boris.cast(drain, vanya);
		vanya.cast(drain, boris);
		boris.cast(bolt, vanya);
		vanya.cast(bolt, boris);
		boris.cast(drain, vanya);
	}
	system("PAUSE");
}