/*
 * utility.cpp
 *
 *  Created on: Mar 4, 2017
 *      Author: natnael
 */


#include "utility.h"
#include "iostream"
#include "Life.h"

void instructions()
{
  std::cout<<"welcome to conway's game of life." <<std::endl;
  std::cout<<"this game uses a grid of size"
      <<maxrow<<"by"<<maxcol<<"in which"<<std::endl;
  std::cout<<"each cell can either be occupaied or not."<< std::endl;
  std::cout<<"the occupied cells change form generation to generation"<<std::endl;
  std::cout<<"according to the number of neighboring cells which are alive"
      <<std::endl;
}

bool user_says_yes()
{
  return true;
}
