#include<iostream>
#include<cstring>
#include"Movie.h"

using namespace std;

Movie :: Movie(char* titleMedia, int yearMedia, char* directorMovie, int ratingMovie, int durationMovie) : Media(titleMedia, yearMedia){
  titleMedia = new char[80];
  strcpy(titleMedia, titleMedia);
  director = new char[80];
  strcpy(director, directorMovie);
  yearMedia = yearMedia;
  duration = durationMovie;
  rating = ratingMovie;
}

char* Movie :: getDirector() {
  return director;
}

int Movie :: getDuration() {
  return duration;
}

int Movie :: getRating() {
  return rating;
}

void Movie :: print() {
  cout << "title: " << title << endl;
  cout << "year : " << year << endl;
  cout << "director: " << director << endl;
  cout << "rating : " << rating << endl;
  cout << "duration: " << duration << endl;
}

