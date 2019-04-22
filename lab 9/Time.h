
class Time
{
private:
	long hours;
	unsigned char minutes;
public:
void setTime(long newhours, unsigned char newminutes);
long gethours();
unsigned char getMinutes();
Time operator+ (Time & plustime );
Time operator- (Time & minustime );
Time operator* (int  multimes );
void print();
};


