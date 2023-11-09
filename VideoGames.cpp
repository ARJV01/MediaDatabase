#include<iostream>
#include<cstring>
#include"VideoGames.h"

using namespace std;

VideoGames::VideoGames(char* titleMedia, int yearMedia, int ratingVideoGames, char* publisherVideoGames) :Media(titleMedia, yearMedia) {//contrucor for videogames
  strcpy(title, titleMedia);
  yearMedia = yearMedia;
  publisher = new char[80];
  strcpy(publisher, publisherVideoGames);
  rating = ratingVideoGames;

}

char* VideoGames :: getPublisher() {//this funtion will return publisher
  return publisher;
}

int VideoGames :: getRating() {//this funtion will return rating
  return rating;
}

void VideoGames :: print() {// this funtion will print the feilds in videogames
  cout << "title: " << title << endl;
  cout << "year : " << year << endl;
  cout << "publisher: " << publisher << endl;
  cout << "rating : " << rating << endl;
}

VideoGames::~VideoGames() {//destructor

}
