#include <iostream>
#include <list>
using namespace std;

class youtube {
private:
	string name;
	long subscribers;
	list<string> videos;

protected:
	string owner;


public:
	youtube(string n, string o) {
		name = n;
		owner = o;
	}

	void subscribe(int count) {
		for (int i = 0; i < count; i++)
			subscribers++;
	}

	void unsubscribe() {
		if (subscribers > 0)
			subscribers--;
	}

	void addtitle(string vidtit) {
		videos.push_back(vidtit);
	}

	void getinfo() {
		cout << "Name of channel: " << name << endl;
		cout << "Owner of channel: " << owner << endl;
		cout << "Subcribers count : " << subscribers << endl;
		cout << "Videos published: " << endl;
		for (string vid : videos)
			cout << vid << endl;
	}
};

class gamingchannel : public youtube {
public:
	gamingchannel(string name, string owner) : youtube(name,owner) {
	}

	void practice() {
		cout << owner << " gaming is very dangerous  he is always focused on his enimies and fight till end" << endl;
	}

};

int main() {

    gamingchannel channel1("shahzeb ff gaming", "shahzeb");
    channel1.practice();

    youtube channel2("shahzeb ke vlogs", "shahzeb");

    channel2.addtitle("My First Vlog");
    channel2.addtitle("Daily Routine");
    channel2.addtitle("Travel to Islamabad");

    channel2.subscribe(150);

    channel2.getinfo();
}
