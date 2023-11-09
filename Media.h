#ifndef BRAVO
#define BRAVO
#include<iostream>
#include<cstring>

using namespace std;

class Media {
public:
  Media();//Default contructor for media
  Media(char* titleMedia, int yearMedia);//contrucotor for media
  char* getTitle();//Getter for title
  int getYear();//getter for year
  virtual void print();//will print the information
  virtual ~ Media();//destructor
protected:
  char* title;
  int year;
};

#endif // BRAVO
