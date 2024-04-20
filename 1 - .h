#pragma once 
#ifndef HEADER_H 
#define HEADER_H 
#include<windows.h> 
#include <iostream> 
#include <numeric> 
#include <string> 
#include <iomanip> 
#include <vector> 
using namespace std; 
 
struct Film { 
 string title; 
 int cost = 0; 
 string director; 
}; 
extern int numfilm; 
extern vector<Film> film; 
void Films(vector<Film>& film, int num); 
void FilmbyCost(vector<Film>& film, int num); 
void print_struc(Film tem); 
void print_vec(vector<Film>film, int num); 
void clean(); 
#endif
