#include<iostream>
#include<cstring>
#include "Media.h"

using namespace std;

Media :: Media() {//deafault contructor

}

Media :: Media(char* titleMedia, int yearMedia) {// contrucor for media class
  title = new char[80];
  strcpy(title, titleMedia);
  year = yearMedia;
}

char* Media :: getTitle() {//This funtion will return the title
  return title;
}

int Media:: getYear() {//This funtion will return the year
  return year;
}

void Media :: print() {//This funrion will print out the data
  cout << "title: " << title << endl;
  cout << "year : " << year << endl;
}

Media:: ~Media() {//destructor

}


