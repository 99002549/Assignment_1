#ifndef __CURRENCY_H
#define __CURRENCY_H
#include <iostream>
using namespace std;

class Currency {
  int m_rupees;
  int m_paise;
  public:
  Currency();
  Currency(int,int);
  Currency(int);
  Currency operator+(const Currency&);
  Currency operator-(const Currency&);
  Currency operator+(int);
  Currency operator-(int);
  Currency& operator++();
  Currency operator++(int);
  bool operator==(const Currency&);
  bool operator<(const Currency&);
  bool operator>(const Currency&);
  int display() const;
  friend std::ostream& operator<<(const std::ostream&, const Currency&);
};

#endif
