#include <iostream>
using namespace std;

class Area{
	int length, width;
	public:
		int setDim() {
		cin >> length >> width;
		return (length, width);
		}
		int getArea() {
			return (length * width);
		}
};

int main() {
	Area a;
	cout << "Enter the length and width of the rectangle: ";
	a.setDim();
	cout << "Area of the rectangle: " << a.getArea() << endl;
	return 0;
}