#include<iostream>
#include<cstring>
#include"VideoGames.h"

using namespace std;

VideoGames::VideoGames(char* titleMedia, int yearMedia, int ratingVideoGames, char* publisherVideoGames) :Media(titleMedia, yearMedia) {
titleMedia = new char[80];
  strcpy(titleMedia, titleMedia);
  yearMedia = yearMedia;
  publisher = new char[80];
  strcpy(publisher, publisherVideoGames);
  rating = ratingVideoGames;

}

char* VideoGames :: getPublisher() {
  return publisher;
}

int VideoGames :: getRating() {
  return rating;
}

void VideoGames :: print() {
  cout << "title: " << title << endl;
  cout << "year : " << year << endl;
  cout << "publisher: " << publisher << endl;
  cout << "rating : " << rating << endl;
}


