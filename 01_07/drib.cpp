#include "drib.h"

void Drib::set_count() {
	if (chis > znam) {
		while (znam * count <= chis) {
			count++;
		}
		if (count * znam > chis) {
			count--;
			if (count * znam == chis) {
				chis = 0;
			}
			else {
				chis -= count * znam;
			}
		}
	}
	else {
		count = 0;
	}
}

Drib::Drib(double chis, double znam, double count) {
	this->chis = chis;
	this->znam = znam;
	set_count();
}

Drib::~Drib() {}

void Drib::set_znam(double znam) {
	if (znam == 0) {
		this->znam = 1;
		std::cout << "You try to set znam 0!" << std::endl;
	}
	count = 0;
	this->znam = znam;
}

Drib Drib::operator+(Drib& obj) {
	Drib drib;
	double this_chis = this->chis + this->count * this->znam;
	double obj_chis = obj.get_chis() + obj.get_znam() * obj.get_count();

	if (this->znam == obj.get_znam()) {
		drib.set_chis(this_chis + obj_chis);
		drib.set_znam(this->znam);
	}
	else {
		drib.set_znam(this->znam * obj.get_znam());
		drib.set_chis(this_chis * obj.get_znam() + obj_chis * this->znam);
	}

	drib.set_count();
	return drib;
}

Drib Drib::operator-(Drib& obj) {
	Drib drib;
	double this_chis = this->chis + this->count * this->znam;
	double obj_chis = obj.get_chis() + obj.get_znam() * obj.get_count();

	if (this->znam == obj.get_znam()) {
		drib.set_chis(this_chis - obj_chis);
		drib.set_znam(this->znam);
	}
	else {
		drib.set_znam(this->znam * obj.get_znam());
		drib.set_chis(this_chis * obj.get_znam() - obj_chis * this->znam);
	}

	drib.set_count();
	return drib;
}

Drib Drib::operator*(Drib& obj) {
	Drib drib;
	double this_chis = this->chis + this->count * this->znam;
	double obj_chis = obj.get_chis() + obj.get_znam() * obj.get_count();

	drib.set_znam(this->znam * obj.get_znam());
	drib.set_chis(this_chis * obj_chis);

	drib.set_count();
	return drib;
}

Drib Drib::operator/(Drib& obj) {
	Drib drib;
	double this_chis = this->chis + this->count * this->znam;
	double obj_chis = obj.get_chis() + obj.get_znam() * obj.get_count();

	drib.set_znam(this->znam * obj_chis);
	drib.set_chis(this_chis * obj.get_znam());

	drib.set_count();
	return drib;
}