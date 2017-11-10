#include<iostream>
using namespace std;

class Rectangle {
	public:
		double length, breadth;

		double area();
		double perimeter();

		Rectangle(double len, double bre) {
			length = len;
			breadth = bre;
		}
};

double Rectangle::area() {
	return length*breadth;
}

double Rectangle::perimeter() {
	return 2*(length+breadth);
}

int main() {
	int l1=0, b1=0;
	cout << "Enter length and breadth for rectangle 1: " << endl;
	cin >> l1 >> b1;
	Rectangle box1 (l1, b1);

	int l2=0, b2=0;
	cout << "Enter length and breadth for rectangle 2: " << endl;
	cin >> l2 >> b2;
	Rectangle box2 (l2, b2);

	cout << "Area of rectangle 1: " << box1.area() << endl;
	cout << "Perimeter of rectangle 1: " << box1.perimeter() << endl;
	cout << "Area of rectangle 2: " << box2.area() << endl;
	cout << "Perimeter of rectangle 2: " << box2.perimeter() << endl;

	if (box1.area() > box2.area()) {
		cout << "Rectangle 1 has larger area." << endl;
	} else if (box1.area() < box2.area()) {
		cout << "Rectangle 2 has larger area." << endl;
	} else {
		cout << "Both rectangles have equal area." << endl;
	}

	if (box1.perimeter() > box2.perimeter()) {
		cout << "Rectangle 1 has larger perimeter." << endl;
	} else if (box1.perimeter() < box2.perimeter()) {
		cout << "Rectnagle 2 has larger perimeter." << endl;
	} else {
		cout << "Both rectangles have equal perimeter." << endl;
	}

	return 0;
}
