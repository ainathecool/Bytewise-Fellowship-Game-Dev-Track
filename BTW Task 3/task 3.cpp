
#include<iostream>
using namespace std;


class stationery {

	//private attributes
	static int id;
	string name;
	string color;
	double price;

public:

	//constructors
	stationery()
	{
		id++; name = ""; color = ""; price = 0.0;
	}

	stationery(string name, string color, double price) 
	{
		id++;
		this->name = name;
		this->color = color;
		this->price = price;
	}

	stationery(stationery& copy) 
	{
		id++;
		name = copy.name;
		color = copy.color;
		price = copy.price;
	}

	//getter setters

	void setName(string name) { this->name = name; }
	void setColor(string color) { this->color = color; }
	void setPrice(double price) { this->price = price; }

	string getName() const { return name; }
	string getColor() const { return color; }
	double getPrice() const { return price; }
	int getID() { return id; }


	//other class methods
	void typeOfStationery() { cout << "\nI am a stationery item."; }

};

int stationery::id = 0;


class pen : public stationery {

public:
	void typeOfStationery() { cout << "\n I am a pen."; }
};


class shop {

public:
	string shopName;
	stationery s1;


	pen p1;

	


	shop() { shopName = "";}
	shop(string s) { shopName = s;  }
};


int main()
{
	stationery s2("inkpen", "purple", 35);
	cout << s2.getID();
	stationery s3(s2);

	
	cout << "\n third copied object: ";
	cout << s3.getID() << endl;
	cout << s3.getName() << endl;
	cout << s3.getColor() << endl;
	cout << s3.getPrice() << endl;

	shop sh1;
	sh1.s1.setName("magic pen");
	sh1.s1.setColor("blue");
	sh1.s1.setPrice(50); 

	cout << "\n first object: ";
	cout << sh1.s1.getID() << endl;
	cout << sh1.s1.getName() << endl;
	cout << sh1.s1.getColor() << endl;
	cout << sh1.s1.getPrice() << endl;

	sh1.p1.typeOfStationery();

	

	return 0;
}
