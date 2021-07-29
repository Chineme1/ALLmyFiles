#include "date.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>




struct Date
{
/*	if(day <= 0)
	{
		return NULL;
	}
	if(year <= 0)
	{
		return NULL;
	}
	
	if(month != "Jan" && month != "Feb"&& month != "Mar"&& month != "April"&& month != "May"&& month != "Jun"&& month != "Jul" && month != "Aug" && month != "Sep" && month != "Oct" && month != "Nov" && month != "Dec")
	{
		return NULL;
	}*/
	char* month;
	int day;
	int year;
	//atexit(report_mem_leak);
};

struct Date* createDate(const char* month, int day, int year)
{
	if(year <= 0)
	{
		return NULL;
	}
	if(day<= 0 || day > 31)
	{
		return NULL;
	}
	if( !(strcmp(month, "Jan")) || !(strcmp(month, "Feb")) || !(strcmp(month, "Mar"))|| !(strcmp(month, "Apr"))|| !(strcmp(month, "May")) || !(strcmp(month, "Jun"))|| !(strcmp(month, "Jul")) || !(strcmp(month, "Aug")) || !(strcmp(month, "Sep"))|| !(strcmp(month, "Oct")) || !(strcmp(month, "Nov"))|| !(strcmp(month, "Dec")))
	{
	//	int i =0;
	}
	else
	{
		return NULL;
	}
	if((year%4 != 0) &&(!strcmp(month, "Feb")))
	{
		if(day>=29)
		{
			return NULL;
		}
	}
	else if(((year/100)%4 != 0) &&(!strcmp(month, "Feb"))/*&&(year%4 != 0)*/&&(year%100 == 0))
       	{
        	if(day>=29)
        	{
        		return NULL;
		}
	}
	if(!strcmp(month, "Feb") && day > 29)
	{
		return NULL;
	}
	if(!strcmp(month, "Apr") && day> 30)
	{
		return NULL;
	}
	if(!strcmp(month, "Jun") && day > 30)
	{
		return NULL;
	}
	if(!strcmp(month, "Sep") && day > 30)
	{
		return NULL;
	}
	if(!strcmp(month, "Nov") && day > 30)
	{
		return NULL;
	} 


	struct Date* Date = malloc(sizeof(struct Date));
	Date-> month = malloc((strlen(month)+1)* sizeof(char));
	strcpy(Date->month, month);
	Date->day = day;
	Date -> year = year;

	//char* x = Date;
	//struct Date* d = Date;
	//free(Date);
	//free(Date);
	return Date;
	free(Date);
	//free(Date->month);
	//free(Date);
}


int destroyDate(struct Date* d)
{
	if(d==NULL)
	{
		return 0;
	}
	//if(!d->month)
	//{
	//	free(d->month);
	//	free(d);
	//	return 1;
	//}
	if( !(strcmp(d->month, "Jan")))
	{
		free(d->month);
		free(d);
		return 1;
					}

	if( !(strcmp(d->month, "Feb")))
	{
		free(d->month);
		free(d);
		return 1;
					}
	if( !(strcmp(d->month, "Mar")))
	{
		free(d->month);
		free(d);
		return 1;
					}
	if( !(strcmp(d->month, "Apr")))
	{
		free(d->month);
		free(d);
		return 1;
					}
	if( !(strcmp(d->month, "May")))
	{
		free(d->month);
		free(d);
		return 1;
					}
	if( !(strcmp(d->month, "Jun")))
	{
		free(d->month);
		free(d);
		return 1;		
	}

	if( !(strcmp(d->month, "Jul")))
	{
		free(d->month);
		free(d);
		return 1;
					}
	if( !(strcmp(d->month, "Aug")))
	{
		free(d->month);
		free(d);
		return 1;
	}
	if( !(strcmp(d->month, "Sep")))
	{
		free(d->month);
		free(d);
		return 1;
	}
	if( !(strcmp(d->month, "Oct")))
	{
		free(d->month);
		free(d);
		return 1;
	}
	if( !(strcmp(d->month, "Nov")))
	{
		free(d->month);
		free(d);
		return 1;
	}
	if( !(strcmp(d->month, "Dec")))   				
	{
        	free(d->month);
        	free(d);
		return 1;
	}
	 /* || !(strcmp(d->month, "Feb")) || !(strcmp(d->month, "Mar"))|| !(strcmp(d->month, "Apr"))|| !(strcmp(d->month, "May")) || !(strcmp(d->month, "Jun"))|| !(strcmp(d->month, "Jul")) || !(strcmp(d->month, "Aug")) || !(strcmp(d->month, "Sep"))|| !(strcmp(d->month, "Oct")) || !(strcmp(d->month, "Nov"))|| !(strcmp(d->month, "Dec")))
	{
		free(d->month);
		free(d);
		return 1;
	}*/


//	free(d-> month);
	free(d);
	return 1;
}

char* getMonth(struct Date* date)
{
	if(date == NULL)
	{
		return NULL;
	}
	struct Date* c =malloc(sizeof(struct Date));
	const char* ntC = date->month;
	c->month = malloc((strlen(ntC)+1) * sizeof(char));
	strcpy(c->month, ntC);
	char* x = c->month;
	//free(c->month);
	free(c);
	return x;
	//free(c);
}

int getDay(struct Date* date)
{
	if(date ==NULL)
	{
		return 0;
	}
	return date->day;
}

int getYear(struct Date* date)
{
	if(date ==NULL)
	{
		return 0;
	}
	return date-> year;
}

int setMonth(struct Date* date, const char* month)
{
	if(date==NULL)
	{
		return 0;
	}
	if(month==NULL)
	{
		return 0;
	}
	//date -> month = realloc(date-> month, (strlen(month)+1)*sizeof(char));
	//						strcpy(date->month, month);
	if( !(strcmp(month, "Jan")) || !(strcmp(month, "Feb")) || !(strcmp(month, "Mar"))|| !(strcmp(month, "Apr"))|| !(strcmp(month, "May")) || !(strcmp(month, "Jun"))|| !(strcmp(month, "Jul")) || !(strcmp(month, "Aug")) || !(strcmp(month, "Sep"))|| !(strcmp(month, "Oct")) || !(strcmp(month, "Nov"))|| !(strcmp(month, "Dec")))
	{
	//	int i =0;
	}
	else
	{
		return 0;
	}
	if((date->year%4 != 0) &&(!strcmp(month, "Feb")))
	{
		if(date->day>=29)
		{
			return 0;
		}
	}
	else if(((date->year/100)%4 != 0) &&(!strcmp(month, "Feb"))/*&&(year%4 != 0)*/&&(date->year%100 == 0))
       	{
        	if(date->day>=29)
        	{
        		return 0;
        	}
	}
	if(!strcmp(month, "Feb") && date->day > 29)
	{
		return 0;
	}
	if(!strcmp(month, "Apr") && date->day> 30)
	{
		return 0;
	}
	if(!strcmp(month, "Jun") && date->day > 30)
	{
		return 0;
	}
	if(!strcmp(month, "Sep") && date->day > 30)
	{
		return 0;
	}
	if(!strcmp(month, "Nov") && date->day > 30)
	{
		return 0;
	}

	//date -> month = realloc(date-> month, (4)*sizeof(char));
	//strcpy(date->month, month);

//	date -> month = realloc(date-> month, (strlen(month)+1)*sizeof(char));
	strcpy(date->month, month);
	//free(date->month);
	//free(y);
	return 1;
}

int setDay(struct Date* date, int day)
{
	if(day <= 0 || date==NULL|| day>31)
	{
		return 0;
	}
	if((date->year%4 != 0) &&(!strcmp(date->month, "Feb")))
	{
		if(date->day>=29)
		{
			return 0;
		}
	}
	else if(((date->year/100)%4 != 0) &&(!strcmp(date->month, "Feb"))/*&&(year%4 != 0)*/&&(date->year%100 == 0))
       	{
        	if(day>=29)
        	{
        		return 0;
        	}
	}
	if(!strcmp(date->month, "Feb") && day > 29)
	{
		return 0;
	}
	if(!strcmp(date->month, "Apr") && day> 30)
	{
		return 0;
	}
	if(!strcmp(date->month, "Jun") && day > 30)
	{
		return 0;
	}
	if(!strcmp(date->month, "Sep") && day > 30)
	{
		return 0;
	}
	if(!strcmp(date->month, "Nov") && day > 30)
	{
		return 0;
	} 
	date->day = day;
	return 1;
}

int setYear(struct Date* date, int year)
{
	if(year <= 0 || date ==NULL)
	{
		return 0;
	}
	if((year%4 != 0) &&(!strcmp(date->month, "Feb")))
	{
		if(date->day>=29)
		{
			return 0;
		}
	}
	else if(((year/100)%4 != 0) &&(!strcmp(date->month, "Feb"))/*&&(year%4 != 0)*/&&(year%100 == 0))
       	{
        	if(date->day>=29)
        	{
        		return 0;
        	}
	}
	date-> year = year;
	return 1;
}

int compareDay(const struct Date* d1, const struct Date* d2)
{
	int x1, x2;
	if(d1 == NULL|| d2 ==NULL)
	{
		return -2;
	}
	if(!strcmp(d1->month, d2-> month)&&(d1->day == d2->day)&&(d1->year == d2->year))
	{
		return 0;
	}
	if(d1->year< d2->year)
	{
		return -1;
	}
	else if(d1-> year> d2 -> year)
	{
		return 1;
	}
	if(!strcmp(d1->month, "Jan"))
	{
		x1 =1;
				}

	if(!strcmp(d1->month, "Feb"))
	{
		x1 =2;
				}

	if(!strcmp(d1->month, "Mar"))
	{
		x1 =3;
				}

	if(!strcmp(d1->month, "Apr"))
	{
		x1 =4;
				}

	if(!strcmp(d1->month, "May"))
	{
		x1 =5;
				}

	if(!strcmp(d1->month, "Jun"))
	{
		x1 =6;
				}

	if(!strcmp(d1->month, "Jul"))
	{
		x1 =7;
	}
	if(!strcmp(d1->month, "Aug"))
	{
		x1 =8;
	}

	if(!strcmp(d1->month, "Sep"))
	{
		x1 =9;
				}
	if(!strcmp(d1->month, "Oct"))
	{
		x1 =10;
	}

	if(!strcmp(d1->month, "Nov"))
	{
		x1 =11;
	}
	if(!strcmp(d1->month, "Dec"))
	{
		x1 =12;
	}

	if(!strcmp(d2->month, "Jan"))
	{
		x2 =1;
	}

	if(!strcmp(d2->month, "Feb"))
	{
		x2 =2;
				}

	if(!strcmp(d2->month, "Mar"))
	{
		x2 =3;
	}

	if(!strcmp(d2->month, "Apr"))
	{
		x2 =4;
				}
	if(!strcmp(d2->month, "May"))
	{
		x2 =5;
				}

	if(!strcmp(d2->month, "Jun"))
	{
		x2 =6;
				}

	if(!strcmp(d2->month, "Jul"))
	{
		x2 =7;
				}
	if(!strcmp(d2->month, "Aug"))
	{
		x2 =8;
	}

	if(!strcmp(d2->month, "Sep"))
	{
		x2 =9;            	
	} 

	if(!strcmp(d2->month, "Oct"))
	{
		x2 =10;
	}

	if(!strcmp(d2->month, "Nov"))
	{
		x2 =11;
	}
	if(!strcmp(d2->month, "Dec"))
	{
		x2 =12;
	}

	if(x1 < x2)
	{
		return -1;
	}
	else if(x1 > x2)
	{
		return 1;
	}

	if(d1->day < d2->day)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

int nextDay(struct Date* date)
{
	if(date ==NULL)
	{
		return 0;
	}
	if(((date->year)%4==0) &&(date->year%400==0)&& !strcmp(date->month, "Feb") &&(date->day ==29))
	{
		date-> month = "Mar";
		date->day = 1;
		return 1;
	}
	else if(((date->year)%4==0) &&((date->year%400)==0)&& !strcmp(date-> month, "Feb") &&(date->day ==28))
	{
		date-> month = "Feb";
		date->day = 29;
		return 1;
	}
	else if(((date->year)%4==0) &&((date->year/100)%4 !=0)&& !strcmp(date-> month, "Feb") &&(date->day ==28))
	{
		date-> month = "Mar";
		date->day = 1;
		return 1;
	}

	else if(((date->year)%4 != 0) && !strcmp(date->month, "Feb") && (date->day == 28))
	{
		date-> day =1;
		date->month = "Mar";
		return 1;
	}
	if(((date->day) == 31)&& !strcmp(date->month, "Jan"))
	{
		date->day =1;
		date-> month ="Feb";
		return 1;
	}

	if(((date->day) == 31)&& !strcmp(date->month, "Mar"))
	{
		date->day =1;
		date-> month ="Apr";
		return 1;
	}

	if(((date->day) == 31)&& !strcmp(date->month, "May"))
	{
		date->day =1;
		date-> month ="Jun";
		return 1;
	}

	if(((date->day) == 31)&&!strcmp(date->month, "Jul"))
	{
		date->day =1;
		date-> month ="Aug";
		return 1;
	}

	if(((date->day) == 31)&& !strcmp(date->month, "Aug"))
	{
		date->day =1;
		date-> month ="Sep";
		return 1;
	}

	if(((date->day) == 31)&& !strcmp(date->month, "Oct"))
	{
		date->day =1;
		date-> month ="Nov";
		return 1;
	}

	if(((date->day) == 31)&& !strcmp(date->month, "Dec"))
	{
		date->day =1;
		date-> month ="Jan";
		date->year= date->year +1;
		return 1;
	}
	if((date->day ==30) && !strcmp(date->month, "Apr"))
	{
		date->day= 1;
		date->month = "May";
		return 1;
	}
	if((date->day ==30) && !strcmp(date->month, "Jun"))
	{
		date->day= 1;
		date->month = "Jul";
		return 1;
	}

	if((date->day ==30) && !strcmp(date->month, "Sep"))
	{
		date->day= 1;
		date->month = "Oct";
		return 1;
	}
	if((date->day ==30) && !strcmp(date->month, "Nov"))
	{
		date->day= 1;
		date->month = "Dec";
		return 1;
	}
	else
	{
		date->day = date->day+1;
		return 1;
	}
}

