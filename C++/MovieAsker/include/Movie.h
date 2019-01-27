#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie
{
    public:
        //constructors
        Movie();
        Movie(string, int, string);

        //destriuctors
        virtual ~Movie();


        //accessor methods
        string getMovieName();
        int getMovieYear();
        string getMovieRating();

        //mutator methods
        void setMovieName(string);
        void setMovieYear(int);
        void setMovieRating(string);

    protected:

    private:
        string movieName;
        int movieYear;
        string movieRating;
};

#endif // MOVIE_H
