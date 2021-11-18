
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cinema.h"

#define TRUE 1
#define FALSE 0
struct movie {
    char title[MAX_STR_LENGTH];
    int length;
    double rating;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}

void add_genre(
  struct cinema *cinema, char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    new->movies = NULL;
    new->next = NULL;

    new->next = cinema->genres;
    cinema->genres = new;
}

struct movie *create_movie(char *movie_name,
    int length,
    double rating) {
    
    struct movie *new_movie = malloc(sizeof(struct movie));
    strcpy(new_movie->title, movie_name);
    new_movie->length = length;
    new_movie->rating = rating;
    new_movie->next = NULL;
    return new_movie;
}

int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_name,
    int length,
    double rating) {

    struct genre *curr_genre = cinema->genres; // head
    struct genre *found_genre = NULL;
    while (curr_genre != NULL && found_genre == NULL) {
      if (strcmp(curr_genre->name, genre_name) == 0) {
        found_genre = curr_genre;
      }
      curr_genre = curr_genre->next;
    }

    if (found_genre == NULL){
      printf("no genre named %s\n", genre_name);
      return NOT_FOUND;
    }

    // make a struct and init
    struct movie *new_movie = create_movie(
      movie_name, length, rating);

    // loop til the last movie in genre
    struct movie *curr_movie = found_genre->movies;

    // if genre has no movies
    if (curr_movie == NULL) {
      found_genre->movies = new_movie;
      return SUCCESS;
    }

    while (curr_movie->next != NULL) {
      curr_movie = curr_movie->next;
    }

    curr_movie->next = new_movie;
    

    return SUCCESS;
}

void print_genre(
  struct cinema *cinema, char *genre_name) {
    // loop through each genre and find the genre we want
    // note: this is very similar to the first part of
    // add_movie :D you should make a helper function for these situations in the assignment
    struct genre *curr_genre = cinema->genres; // head
    struct genre *found_genre = NULL;
    while (curr_genre != NULL && found_genre == FALSE) {
      if (strcmp(curr_genre->name, genre_name) == 0) {
        found_genre = curr_genre;
      }
      curr_genre = curr_genre->next;
    }

    if (found_genre != NULL) {
      // loop through the movies and print 
      struct movie *curr_movie = found_genre->movies;
      while (curr_movie != NULL) {
        printf("%s, %.2lf/10 (%d)\n", 
          curr_movie->title, curr_movie->rating, curr_movie->length);
        curr_movie = curr_movie->next;
      }      
    } else {
      printf("no genre\n");
    }
}