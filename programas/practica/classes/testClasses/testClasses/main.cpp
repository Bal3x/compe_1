#include <iostream>
using namespace std;
#include "time1.h"
void incrementMinutes(Time&, const int);

int main() {
	Time t;

	//use member functions to set the values
	t.setHour(17);
	t.setMinute(34);
	t.setSecond(25);

	//use get functions to obtain hour, minute and second
	cout << "Result of setting all valid values:\n"
		<< " Hour: " << t.getHour()
		<< " Minute: " << t.getMinute()
		<< " Second: " << t.getSecond();
	// set time using individual set of member functions with invalid values
	t.setHour(234);
	t.setMinute(43);
	t.setSecond(6373);
	//display the invalid values
	cout << "\nResult of setting all invalid values:\n"
		<< " Hour: " << t.getHour()
		<< " Minute: " << t.getMinute()
		<< " Second: " << t.getSecond();
	//display hour, minute and second after setting invalid hour and second values
	cout << "\n\nResult of attempting to set invalid hour and"
		<< " second:\n Hour: " << t.getHour()
		<< " Minute: " << t.getMinute()
		<< " Second: " << t.getSecond() << "\n\n";
	t.setTime(11, 58, 0);
	incrementMinutes(t, 3);

	return 0;
}


void incrementMinutes(Time& tt, const int count) {
	cout << "Incrementing minute " << count << " times:\nStart time: ";
	tt.printStandard();
	for (int i = 0; i < count; i++) {
		tt.setMinute((tt.getMinute() + 1) % 60);
		if (tt.getMinute() == 0)
			tt.setHour((tt.getHour() + 1) % 24);
		cout << "\nminute + 1: ";
		tt.printStandard();
	}
}
