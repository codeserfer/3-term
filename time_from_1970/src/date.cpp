
#include <iostream>
#include "../include/date.h"

date::date (int day, int month, int year, int hours, int minutes, int sec) {
	this->day=day;
	this->month=month;
	this->year=year;
	this->hours=hours;
	this->minutes=minutes;
	this->sec=sec;
}

int date::monthtoday (int month) {
	if (!month) return 0;
	int day=0;
	for (int i=1; i<=month; i++ ) {
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) day+=31;
		else if (i==2) day+=28;
		else if (i==4 || i==6 || i==9 || i==11) day+=30;
	}
	return day;
}

int date::get_sec () {
	int day=this->day;
	for (int i=1970, j=2; i<year; i++) {
		if (j%4==0) {
			day+=366;
			j=1;
		}
		else {
			day+=365;
			j++;
		}
	}
	if (month) day+=monthtoday (month-1);
	if (year%4==0 && month>2) day+=1;
	day--;
	int sec=day*24*60*60;
	sec+=(this->sec+this->minutes*60+this->hours*60*60);
	return sec;
}


void date::todate (int sec) {
	int q=2, year=0, month=0, day=0, hours=0, minutes=0;
	while (sec>60*60*24*365) {
		if (q==4) {
			q=1;
			sec-=60*60*24*366;
			year++;
		}
		else {
			sec-=60*60*24*365;
			q++;
			year++;
		}
	}
	int m [12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i=0;
	while (sec>60*60*24*28) {
		sec-=m[i++]*24*60*60;
		month++;
	}

	while (sec>60*60*24) {
		sec-=60*60*24;
		day++;
	}
	while (sec>60*60) {
		sec-=60*60;
		hours++;
	}
	while (sec>60) {
		sec-=60;
		minutes++;
	}
    month++;
    day++;
	year+=1970;
    cout << day << "." << month << "."<<year<<" "<<hours<<":"<<minutes<<":"<<sec<<"\n";
}


void date::sum(date q1, date q2 ){
    int d1=q1.get_sec();
    int d2=q2.get_sec();
    todate(d1+d2);
}

int date::day_of_week (int year, int month, int day) {
    int a = (14 - month) / 12;
    int y = year - a;
    int m = month + 12 * a - 2;
    return (7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12)) % 7;
}

ostream& operator<<(ostream& out, date a) {
    out<<a.day<<"."<<a.month<<"."<<a.year<<" "<<a.hours<<":"<<a.minutes<<":"<<a.sec;
    return out;
}

int date::g_day () { return day; }
int date::g_month () {return month; }
int date::g_year () {return year; }
int date::g_hours () {return hours;}
int date::g_minutes () {return minutes;}
int date::g_sec () {return sec;}
