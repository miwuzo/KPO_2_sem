#include <iostream>

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;
struct Date
{
	day dd;
	month mm;
	year yyyy;
};


bool operator > (Date a, Date b)
{
	return ( ( a.yyyy > b.yyyy) || ((a.yyyy == b.yyyy) && (a.mm > b.mm)) || ((a.yyyy == b.yyyy) && (a.mm == b.mm) && (a.dd > b.dd)));
}


bool operator < (Date a, Date b)
{
	return ( ( a.yyyy < b.yyyy) || ((a.yyyy == b.yyyy) && (a.mm < b.mm)) || ((a.yyyy == b.yyyy) && (a.mm == b.mm) && (a.dd < b.dd)));
}


bool operator ==(Date a, Date b) {
	return(a.dd == b.dd && a.mm == b.mm && a.yyyy == a.yyyy);
}


int main()
{
	Date date1 = {7,1,1980};
	Date date2 = {7,2,1993};
	Date date3 = {7,1,1980};

	if (date1 < date2) std::cout << "true" << std::endl;
	else std::cout << "false" << std::endl;

	if (date1 > date2) std::cout << "true" << std::endl;
	else std::cout << "false" << std::endl;

	if (date1 == date2) std::cout << "true" << std::endl;
	else std::cout << "false" << std::endl;

	if (date1 == date3) std::cout << "true" << std::endl;
	else std::cout << "false" << std::endl;

}