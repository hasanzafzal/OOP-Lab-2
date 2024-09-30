#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void getTime() {
        cout << "Enter hours, minutes, and seconds: ";
         cin >> hours >> minutes >> seconds;
    }

    void displayTime() {
        cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    }

    void addTime() {
        seconds += seconds;
        minutes += minutes + seconds / 60;
        seconds %= 60;
        hours += hours + minutes / 60;
        minutes %= 60;
    }

    int numberOfDays() {
        int totalSeconds = hours * 3600 + minutes * 60 + seconds;
        return totalSeconds / 86400;
    }
};

int main() {
    Time t1, t2;

    cout << "Enter first time:" << endl;
    t1.getTime();

    cout << "Enter second time:" << endl;
    t2.getTime();

    cout << "First time: ";
    t1.displayTime();

    cout << "Second time: ";
    t2.displayTime();

    t1.addTime();
    t2.addTime();
    cout << "Total time: ";
    t1.displayTime();

    int days = t1.numberOfDays();
	cout << "Number of days: " << days << endl; 
	return 0;   
}