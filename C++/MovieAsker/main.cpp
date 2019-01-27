#include <iostream>
#include "Movie.h"
#include <string>

using namespace std;

void printMovie(Movie);

int main()
{
    //Create three movie instances
    Movie movie1;

    string userName;
    int userYear;
    string userRating;

    cout << "What is the name of your favorite movie?" << endl;
    getline(std::cin, userName);

    cout << "What is the year of your favorite movie?" << endl;
    cin >> userYear;

    cin.ignore();

    cout << "What is the rating of your favorite movie?" << endl;
    getline(std::cin, userRating);

    movie1.setMovieName(userName);
    movie1.setMovieYear(userYear);
    movie1.setMovieRating(userRating);

    printMovie(movie1);

    return 0;
}

void printMovie(Movie movie){
	//print movie information using the dot operator

	cout << "Movie Name: " << movie.getMovieName()
         << "\nMovie Year: " << movie.getMovieYear()
		 << "\nMovie Rating: " << movie.getMovieRating()
		 << endl;
		cout << endl << endl;
}

