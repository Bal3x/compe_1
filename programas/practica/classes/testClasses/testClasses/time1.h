class Time
{
public:
	Time(int = 0, int = 0, int = 0);
	~Time();
	// set functions
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	//get functions
	int getHour();
	int getMinute();
	int getSecond();

	void printUniversal();
	void printStandard();

private:
	int hour;
	int minute;
	int second;
};