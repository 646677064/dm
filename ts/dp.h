/* ========================================================
 *   Copyright (C) 2014 All rights reserved.
 *   
 *   filename : dp.h
 *   author   : liuzhiqiang01@baidu.com
 *   date     : 2014-12-08
 *   info     : implementation dtw and lcss using dynamic 
 * ======================================================== */

#ifndef _DTW_H
#define _DTW_H


/* ------------------------
 * @brief : time distance using dtw
 *          for continous values
 * ------------------------ */
double dtw(double * x, int nx, double * y, int ny); 


/* ------------------------
 * @brief : length of lcss
 * ------------------------ */

int lcss(int * x, int nx, int *y, int ny);



#endif //DTW_H
