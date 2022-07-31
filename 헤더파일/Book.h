#pragma once
#ifndef _BOOK_H_
#define __BOOK_H__
#include "stdafx.h"

void ShowList();
void Setcheck_out(char* borrowed);
void Setreturn_book(char* borrowed);
void File_Reset();
char book_name[30];
int book_count;
char Bookname[100][20];
char c;


#endif