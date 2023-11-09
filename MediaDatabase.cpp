//Arjun Vinsel
//11/9/2023
//This is a database of media types. This program will have users add search for and dlete media

#include<iostream>
#include<cstring>
#include<vector>
#include<iomanip>
#include"Movie.h"
#include"Music.h"
#include"VideoGames.h"

using namespace std;

void addMedia(vector<Media*> &MediaLs); // prototype for add funtion
void searchMedia(vector<Media*> &MediaLs); // prototype for search funtion
void deleteMedia(vector<Media*> &MediaLs);// prototype for delete funtion

int main() {
  char input[80];
  bool stillRunning = true;
  vector<Media*> MediaLs;
  while(stillRunning == true) {
  cout << "Enter add search delete or quit:" << endl;
  cin >> input;
  cin.ignore(256, '\n');
  if(strcmp(input , "add")==0) {
    addMedia(MediaLs);
  }
  else if(strcmp(input, "search") == 0) {
    searchMedia(MediaLs);
  }
  else if (strcmp(input, "delete") == 0) {
    deleteMedia(MediaLs);
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

void addMedia(vector<Media*> &MediaLs) {// This furion will have the user input the type of media they wish to add and then it will add the new media to the vector
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
      if (title == mov -> getTitle()) {
      cout << mov -> getTitle() << endl;

    }
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

void searchMedia(vector<Media*> &MediaLs) { // This funtion will have the user enter a year or title and will print out the media it finds
  vector<Media*> :: iterator itr;
  char* input;
  input = new char[80];
  cout << "enter if you wish to search by year or title" << endl;
  cin.getline(input, 80);
  if(strcmp(input, "title") == 0) {
    char* title;
    title = new char[80];
    cout << "please enter a title" << endl;
    cin.getline(title,80);
  for(itr = MediaLs.begin(); itr < MediaLs.end(); itr++) {
    if (strcmp(title, (*itr) -> getTitle()) == 0) {
      (*itr) -> print();
    }
  }
  }
  else if(strcmp(input, "year") ==0) {
    int year =0;
    cout << "please enter a year" << endl;
    cin >> year;
    for(itr = MediaLs.begin(); itr < MediaLs.end(); itr++) {
      if (year == (*itr) -> getYear()) {
	(*itr) -> print();
      }
    }

  }

}

void deleteMedia(vector<Media*> &MediaLs) {// this funtion will have the user search for a media and delete it
  vector<Media*> :: iterator itr;
  char confirm[80];
  char* input;
  input = new char[80];
  cout << "enter if you wish to search by year or title" << endl;
  cin.getline(input, 80);
  if(strcmp(input, "title") == 0) {
    char* title;
    title = new char[80];
    cout << "please enter a title" << endl;
    cin.getline(title,80);
    cin.ignore(256, '\n');
  for(itr = MediaLs.begin(); itr < MediaLs.end(); itr++) {
    if (strcmp(title, (*itr) -> getTitle()) == 0) {
      (*itr) -> print();
      cout <<"enter yes to confirm delete" << endl;
      cin.getline(confirm,80);
      if(strcmp(confirm, "yes") == 0) {
        delete *itr;
        MediaLs.erase(itr);
      }

    }
  }
  }
  else if(strcmp(input, "year") ==0) {
    int year =0;
    cout << "please enter a year" << endl;
    cin >> year;
    cin.ignore(256, '\n');
    for(itr = MediaLs.begin(); itr < MediaLs.end(); itr++) {
      if (year == (*itr) -> getYear()) {
        (*itr) -> print();
	cout << "Enter yes to confirm delete" << endl;
       cin.getline(confirm,80);
      if(strcmp(confirm, "yes") == 0) {
        delete *itr;
        MediaLs.erase(itr);
      }
    }

  }

}

}

