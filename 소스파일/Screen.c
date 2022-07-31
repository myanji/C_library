#include "stdafx.h"

void login() {

    printf("****도서 관리 프로그램****\n");
    printf("아이디 :");
    scanf("%s", ID_user);
    printf("비밀번호 :");
    scanf("%s", PW_user);
    SetID();
    printf("\n\n\n");
    printf("아무키나 누르세요");
    int a = _getch();
    system("cls");
}

void program() {

    printf("**************************\n");
    printf("1. 책 목록 보기\n");
    printf("2. 책 대출\n");
    printf("3. 책 반납\n");
    printf("4. 나가기\n");
    printf("**************************\n");
    printf("원하는 작업 번호 : ");

    scanf("%d", &num);

    if (num == 1) {
        list();
    }
    else if (num == 2) {
        check_out();
    }
    else if (num == 3) {
        return_book();
    }
    else {
        exit(0);
    };
}

void list() {
    system("cls");
    printf("**********************\n");
    printf("*****책 목록 화면*****\n");
    printf("책 이름 대출 가능 권수\n");
    printf("**********************\n");
    ShowList();
    printf("\n\n\n");
    printf("아무키나 누르세요");
    int a = _getch();
    system("cls");
}

void check_out() {
    system("cls");
    printf("**********************\n");
    printf("*****책 대출 화면*****\n");
    printf("**********************\n");
    printf("대출 할 책 이름: ");
    scanf("%s", name);
    Setcheck_out(name);
    File_Reset();
    printf("\n\n\n");
    printf("아무키나 누르세요");
    int a = _getch();
    system("cls");
}

void return_book() {
    system("cls");
    printf("**********************\n");
    printf("*****책 반납 화면*****\n");
    printf("**********************\n");
    printf("반납 할 책 이름: ");
    scanf("%s", name);
    Setreturn_book(name);
    File_Reset();
    printf("\n\n\n");
    printf("아무키나 누르세요");
    int a = _getch();
    system("cls");
}
