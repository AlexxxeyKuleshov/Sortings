#define CATCH_CONFIG_MAIN

#include "../libs/catch.hpp"
#include "../include/ShellSort.h"

TEST_CASE("Shell Sort Test") {
    int Array1[5] = { 2, 6, 5, 3, 9 };
    int N1 = 5;
    ShellSort(Array1, N1);
    for (int i = 0; i < N1 - 1; i++) {
        REQUIRE(Array1[i] <= Array1[i + 1]);
    }

    int Array2[5] = {};
    int N2 = 5;
    ShellSort(Array2, N2);
    for (int i = 0; i < N2 - 1; i++) {
        REQUIRE(Array2[i] <= Array2[i + 1]);
    }

    double Array3[5] = { 2.3, 5, -1, 8, -20 };
    int N3 = 5;
    ShellSort(Array3, N3);
    for (int i = 0; i < N3 - 1; i++) {
        REQUIRE(Array3[i] <= Array3[i + 1]);
    }
}
