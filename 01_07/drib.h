#ifndef DRIB_H
#define DRIB_H

#include <iostream>

struct Drib
{
private:
	double chis;
	double znam;
	int count;

	void set_count();

	void set_chis(double chis) {
		count = 0;
		this->chis = chis;
	}

	void set_znam(double znam);

public:
	Drib(double chis = 0, double znam = 1, double count = 0);

	~Drib();

	double get_chis() {
		return this->chis;
	}

	double get_znam() {
		return this->znam;
	}

	int get_count() {
		return this->count;
	}

	void show() {
		std::cout << count << ' ' << chis << '/' << znam << std::endl;
	}
	
	Drib operator+(Drib& obj);

	Drib operator-(Drib& obj);

	Drib operator*(Drib& obj);

	Drib operator/(Drib& obj);

};



#endif // !DRIB_H
