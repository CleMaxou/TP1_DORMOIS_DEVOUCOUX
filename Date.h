#ifndef DATE_H
#define DATE_H

#include<string>
class Date {

public:
    Date(int month = 1, int day = 1, int year = 2021);  // constructeur par paramètres
    // getters
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    // setters
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    void nextDay();
    void backDay();

    // attributs
private:
    int _month;
    int _day;
    int _year;

};

// fonctions
bool isDate(int month, int day);
int getDaysInMonth(int month);
int dayOfYear(Date d);
std::string toString(Date d);

#endif // DATE_H
