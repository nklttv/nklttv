#include <stdio.h>

class Time
{
private:
	long hours;
	unsigned char minutes;
public:
	void setTime(long newhours, unsigned char newminutes){ hours = newhours; minutes = newminutes; };
	long gethours(){ return hours; };
	unsigned char getMinutes(){ return minutes; };
	void print(){ printf("%d : %d\n", (int)hours, (int)minutes); };
	Time operator+ (Time & plustime );
	Time operator- (Time & minustime );
	Time operator* (int  multimes );
};


