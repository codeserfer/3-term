#ifndef DATE_H
#define DATE_H
using namespace std;

class date {
private:
	int day;
	int month;
	int year;
	int hours;
	int minutes;
	int sec;
	int monthtoday (int);
public:
    int g_day ();
    int g_month ();
    int g_year ();
    int g_hours ();
    int g_minutes ();
    int g_sec ();


	date(void);
	date(int, int, int, int, int, int);
	int get_sec ();
	void todate (int);
	void sum (date, date);
	int day_of_week (int, int, int);
	friend ostream& operator<<(ostream&,date);
};

#endif // DATE_H
