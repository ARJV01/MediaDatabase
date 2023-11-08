#include<iostream>
#include<cstring>
#include<vector>
#include<iomanip>
#include"Movie.h"
#include"Music.h"
#include"VideoGames.h"

using namespace std;

void addMedia(vector<Media*> &MediaLs);
void searchMedia(vector<Media*> &MediaLs);
void deleteMedia(vector<Media*> &MediaLs);

int main() {
  char input[80];
  bool stillRunning = true;
  vector<Media*> MediaLs;
  while(stillRunning == true) {
  cout << "Enter add search or delete:" << endl;
  cin >> input;
  cin.ignore(256, '\n');
  if(strcmp(input , "add")==0) {
    addMedia(MediaLs);
  }
  else if(strcmp(input, "search") == 0) {
    searchMedia(MediaLs);
  }
  else if(strcmp(input, "quit") == 0) {
    stillRunning = false;
  }
  else {
    cout << "please enter a valid input: " << endl;
    }
  }
  
  return 0;
}

void addMedia(vector<Media*> &MediaLs) {
  char mediaType[80];
  cout << "What media do you wish to add (movie, music, videogames)" << endl;
  cin.getline(mediaType, 80);
  //cin.ignore(256, '\n');
  if(strcmp(mediaType, "movie") == 0) {
    char* title;
    char* director;
    title = new char[80];
    director = new char[80];
    int year = 0;
    int duration = 0;
    int rating = 0;
      cout << "enter a title" << endl;
      cin >> title;
      cin.ignore(256, '\n');
      cout << "enter a year" << endl;
      cin >> year;
      cin.ignore(256, '\n');
      cout << "enter a director" << endl;
      cin >> director;
      cin.ignore(256, '\n');
      cout << "enter a duration" << endl;
      cin >> duration;
      cin.ignore(256, '\n');
      cout << "enter a rating" << endl;
      cin >> rating;
      cin.ignore(256, '\n');
      Movie* mov = new Movie(title, year, director, rating, duration);
      MediaLs.push_back(mov);
    }
  else if(strcmp(mediaType, "music") == 0) {
    char* title;
    char* publisher;
    char* artist;
    title = new char[80];
    publisher = new char[80];
    artist = new char[80];
    int year = 0;
    int duration = 0;
      cout << "enter a title" << endl;
      cin >> title;
      cin.ignore(256, '\n');
      cout << "enter a year" << endl;
      cin >> year;
      cin.ignore(256, '\n');
      cout << "enter a artist" << endl;
      cin >> artist;
      cin.ignore(256, '\n');
      cout << "enter a duration" << endl;
      cin >> duration;
      cin.ignore(256, '\n');
      cout << "enter a publisher" << endl;
      cin >> publisher;
      cin.ignore(256, '\n');
      Music* mus = new Music(title, year, artist, publisher, duration);
      MediaLs.push_back(mus);
    }
  else if(strcmp(mediaType, "videogame") == 0) {
    char* title;
    char* publisher;
    title = new char[80];
    publisher = new char[80];
    int year = 0;
    int rating = 0;
      cout << "enter a title" << endl;
      cin >> title;
      cin.ignore(256, '\n');
      cout << "enter a year" << endl;
      cin >> year;
      cin.ignore(256, '\n');
      cout << "enter a rating" << endl;
      cin >> rating;
      cin.ignore(256, '\n');
      cout << "enter a publisher" << endl;
      cin >> publisher;
      cin.ignore(256, '\n');
      VideoGames* vidg = new VideoGames(title, year, rating, publisher);
      MediaLs.push_back(vidg);
    }


}

void searchMedia(vector<Media*> &MediaLs) {
  vector<Media*> :: iterator itr;
  char input[80];
  cout << "enter a year or title" << endl;
  cin.getline(input, 80);
  for(itr = MediaLs.begin(); itr < MediaLs.end(); itr++) {
    if (input == ((*itr) -> getYear()) || (int)(input) == ((*itr) -> getTitle()) {
	print(*itr);
    }
  }

}

void deleteMedia(vector<Media*> &MediaLs) {

}
  

