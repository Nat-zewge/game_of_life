/*
 * Life.h
 *
 *  Created on: Mar 3, 2017
 *      Author: natnael
 */

#ifndef LIFE_H_
#define LIFE_H_

const int maxrow=20, maxcol=60;

class Life
{
public:
 void initialize();
 void print();
 void update();

private:

 int grid[maxrow+2][maxcol+2];
 int neighbor_count(int row,int col);


};

#endif /* LIFE_H_ */
