#include<iostream>
#include<cstring>
#include"Movie.h"

using namespace std;

Movie :: Movie(char* titleMedia, int yearMedia, char* directorMovie, int ratingMovie, int durationMovie) : Media(titleMedia, yearMedia){ // Contructor for Movie
  strcpy(title, titleMedia);
  director = new char[80];
  strcpy(director, directorMovie);
  year = yearMedia;
  duration = durationMovie;
  rating = ratingMovie;
}

char* Movie :: getDirector() { // this funtion will return  director
  return director;
}

int Movie :: getDuration() {// this funtion will return duration
  return duration;
}

int Movie :: getRating() {// this funtion will return rating
  return rating;
}

void Movie :: print() {//this funtion will print the values in movie
  cout << "title: " << title << endl;
  cout << "year : " << year << endl;
  cout << "director: " << director << endl;
  cout << "rating : " << rating << endl;
  cout << "duration: " << duration << endl;
}

Movie:: ~Movie() {//destructor

}

