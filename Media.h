#ifndef BRAVO
#define BRAVO
#include<iostream>
#include<cstring>

using namespace std;

class Media {
public:
  Media();
  Media(char* titleMedia, int yearMedia);
  char* getTitle();
  int getYear();
  virtual void print();
protected:
  char* title;
  int year;
};

#endif // BRAVO
