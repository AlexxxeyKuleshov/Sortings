#define CATCH_CONFIG_MAIN

#include "../libs/catch.hpp"
#include "../include/QuickSort.h"

TEST_CASE("Quick Sort Test") {
    int Array1[5] = { 7, 3, 9, 2, 8 };
    int N1 = 5;
    QuickSort(Array1, 0, N1 - 1);
    for (int i = 0; i < N1 - 1; i++) {
        REQUIRE(Array1[i] <= Array1[i + 1]);
    }

    int Array2[5] = {};
    int N2 = 5;
    QuickSort(Array2, 0, N2 - 1);
    for (int i = 0; i < N2 - 1; i++) {
        REQUIRE(Array2[i] <= Array2[i + 1]);
    }

    double Array3[5] = { 5.5, 2.2, -3.3, 8.8, 1.1 };
    int N3 = 5;
    QuickSort(Array3, 0, N3 - 1);
    for (int i = 0; i < N3 - 1; i++) {
        REQUIRE(Array3[i] <= Array3[i + 1]);
    }
}
