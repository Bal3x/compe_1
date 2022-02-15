//Implementation file

#include "time1.h"
#include <iostream>
#include <iomanip>
using namespace std;

Time::Time(int h, int m, int s) {
	setTime(h, m, s);

}
Time::~Time() {

}
void Time::setTime(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
}
void Time::setHour(int h) {
	if (h >= 0 && h < 24)
		hour = h;
	else
		hour = 0;
}
void Time::setMinute(int m) {
	if (m >= 0 && m < 60)
		minute = m;
	else
		minute = 0;
}
void Time::setSecond(int s) {
	if (s >= 0 && s < 60)
		second = s;
	else
		second = 0;
}
int Time::getHour() {
	return hour;
}
int Time::getMinute() {
	return minute;
}
int Time::getSecond() {
	return second;
}
void Time::printUniversal() {
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":"
		<< setw(2) << second;
}
void Time::printStandard() {
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
		<< ":" << setfill('0') << setw(2) << minute
		<< ":" << setw(2) << second
		<< (hour < 12 ? "AM" : "PM");
}
