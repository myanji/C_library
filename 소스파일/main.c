#include "stdafx.h"

int main(void) {

    login();
    if (SetID() == 0)
        return 0;

    while (1) {

        program();

    }

    return 0;
}