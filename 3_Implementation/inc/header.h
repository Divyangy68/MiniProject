/** 
* @file header.h
* Quiz application with 5 functional operations
*
*/
#ifndef __header_h__
#define __header_h__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/**
*  Taking to the main_menu and return results
* @return 0 or 1
*/
int main_menu(void);

/**
*  Taking to the show_record and return results
* @return 0 or 1
*/
int show_record(void);

/**
*  Taking to the help and return results
* @return 0 or 1
*/
int help(void);

/**
*  Taking to the start_quiz and return results
* @return 0 or 1
*/
int start_quiz(void);

/**
*  Taking to the edit_score and return results
* @param[in] operand1 
* @param[in] operand2
* @return 0 or 1
*/
int edit_score(int,char[]);

#endif  /* #define __header_h__ */