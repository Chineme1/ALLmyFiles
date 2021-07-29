#ifndef DATE_H
#define DATE_H


struct Date;


struct Date* createDate(const char* month, int day, int year);

int destroyDate(struct Date* d);

char* getMonth(struct Date* date);

int getDay(struct Date* date);

int getYear(struct Date* date);

int setMonth(struct Date* date, const char* month);

int setDay(struct Date* date, int day);

int setYear(struct Date* date, int year);

int compareDay(const struct Date* d1, const struct Date* d2);

int nextDay(struct Date* date);

#endif // DATE_H
