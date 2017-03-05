/*
 * Life.cpp
 *
 *  Created on: Mar 3, 2017
 *      Author: natnael
 */

#include "Life.h"
#include <iostream>

void Life::initialize()
  /* Pre: None
     Post:the Life object will contain a setting specified by the user    */
{
  int row,col;
  for(row = 0; row <= maxrow; row ++)
    {
    for(col = 0;col <= maxcol; col++)
      {
        grid[row][col] = 0;
      }
    }
  std::cout<<"list the coordinates of the living cells"<<std::endl;
  std::cout<<"terminate the list with the special pair -1 -1" <<std::endl;
  std::cin>>row>>col;
  while(row!=-1 && col!= -1)
  {
      if(row >=1 && row <= maxrow)
        {
          if(col>=1 && col <=maxcol)

          {
              grid[row][col]=1;
          }
            else std::cout<<"Column is out of range";
        }

      else std::cout<<"Row is out of range";

      std::cin>>row>>col;
  }

}

void Life::print()

/*Pre: The Life object contains a configuration
 *Post: Displays the configuration for the user
 */


{
  int row,col;
  std::cout<<"\n the current life configuration is:"<<std::endl;
  for(int row = 1; row <= maxrow ; row++){
      for(int col=1;col<= maxcol;col++){
          if(grid[row][col]==1) std::cout<<'*';
          else std::cout<<'\0';
      std::cout<<std::endl;
      }
  }
  std::cout<<std::endl;

}

void Life::update()

/* Pre: There is an existing Life configuration
   Post: provides the next generation of the configuration */

{
  int row,col;
  int new_grid[maxrow+2][maxcol+2];
  for(row = 1;row <= maxrow;row++)
    {
      for(col = 1; col <= maxcol;col++)
        {
          switch(neighbor_count(row,col))
          {
            case 2:
              new_grid[row][col]=grid[row][col];
              break;

            case 3:
              new_grid[row][col] = 1;
              break;

            default:
              new_grid[row][col] = 0;
              break;
          }
        }
    }
  for(row = 1;row <= maxrow;row++){
      for(col = 1; col <= maxcol;col++){
          grid[row][col]=new_grid[row][col];
      }
  }
}

int Life::neighbor_count(int row,int col)

/*Pre: row and col describe the the coordinates of cell
 inside the hedge
 Post: the number of living neighbors are returned
 */

{

  int i,j;
  int count = 0;

  for(i=row-1 ; i<=row+1 ; i++ )
  {
      for(j=col-1 ; j<=col+1 ; j++)
        {
          count+=grid[i][j];
        }
  count-= grid[row][col];
  }


return count;



}



