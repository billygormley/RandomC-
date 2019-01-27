#include "Movie.h"
#include <iostream>

using namespace std;

Movie::Movie()
{
    movieName = "Default Movie";
    movieYear = 0;
    movieRating = "No Rating";
}

Movie::Movie(string name, int year, string rating){

    movieName = name;
    movieYear = year;
    movieRating = rating;

}

Movie::~Movie()
{
    //dtor
}

//accessor methods
string Movie::getMovieName(){

    return movieName;

}

int Movie::getMovieYear(){

    return movieYear;

}

string Movie::getMovieRating(){

    return movieRating;

}

//mutator methods

void Movie::setMovieName(string n){

    movieName = n;

}

void Movie::setMovieYear(int y){

    movieYear = y;

}

void Movie::setMovieRating(string r){

    movieRating = r;

}

