#include "lab04-triangle.h"

bool triangle::operator==(PhysObj& object) const {
	if (weight == object.mass​()) {
		return true;
	}
	return false;
}

bool triangle::operator<(PhysObj& object) const {
	if (weight < object.mass​()) {
		return true;
	}
	return false;
}

inline triangle::triangle()
{
	first_pointi.x = 0;
	first_pointi.y = 0;
	second_pointi.x = 0;
	second_pointi.y = 0;
	third_pointi.x = 0;
	third_pointi.y = 0;
	side = 0;
	weight = 0;
}

inline triangle::triangle(std::pair<double, double> first_point, std::pair<double, double> second_point, std::pair<double, double> third_point, double s, double mass)
{
	first_pointi.x = first_point.first;
	first_pointi.y = first_point.second;
	second_pointi.x = second_point.first;
	second_pointi.y = second_point.second;
	third_pointi.x = third_point.first;
	third_pointi.y = third_point.second;
	side = s;
	weight = mass;
}

double triangle::square() {
	return ((sqrt(3) / 4) * pow(side, 2));
}

double triangle::perimeter() {
	return 3 * side;
}

double triangle::mass​() {
	return weight;
}

CVector2D triangle::position() {
	CVector2D answer;
	answer.x = (first_pointi.x + second_pointi.x + third_pointi.x) / 3;
	answer.y = (first_pointi.y + second_pointi.y + third_pointi.y) / 3;
	return answer;
}

void triangle::draw() {
	std::cout << classname() << "\n";
	std::cout << square() << "\n";
	std::cout << perimeter() << "\n";
	std::cout << size() << "\n";
	//std::std::cout << mass() << "\n"; 
	std::cout << "x = " << position().x << ", y = " << position().y << endl;
}

void triangle::initialization() {
	cin >> first_pointi.x >> first_pointi.y;
	cin >> second_pointi.x >> second_pointi.y;
	cin >> third_pointi.x >> third_pointi.y;
	cin >> side;
	cin >> weight;
}

const char* triangle::classname() {
	return "triangle";
}

unsigned triangle::size() {
	return sizeof(triangle);
}