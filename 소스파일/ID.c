#include "stdafx.h"

int SetID() {

    if (strcmp("admin", ID_user) != 0 || strcmp("1234", PW_user) != 0) {
        printf("로그인 실패");
        return 0;
    }

    else {
        printf("로그인 성공");
        return 1;
    }
}