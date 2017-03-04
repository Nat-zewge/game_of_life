/*
 * main.cpp
 *
 *  Created on: Mar 4, 2017
 *      Author: natnael
 */

#include <iostream>
#include "utility.h"
#include "Life.h"



int main() //a program that simulates Conway's game of life

/* Pre: user supplies initial configuration
   Post: Program prints a sequence of pictures showing new configuration
   according to the rules of the game of Life
   Uses: Class life and methods, initialize(),print() and update()
   and functions instructions() and user_says_yes()
   */

{
  Life configuration;
  instructions();
  configuration.initialize();
  configuration.print();
  std::cout<<"continue viewing generations?"<<std::endl;
  while(user_says_yes())

  {
    configuration.update();
    configuration.print();
    std::cout<<"continue viewing generations?"<<std::endl;

  }
  return 0;
}
