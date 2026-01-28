#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);

    // 4 5 5 may be the one answer and 6 6 4 the another answer
    //  both are considered to  be the correct answers
    //  this happens because it depends on the evaluation order of the compiler whether it evaluates left to right or right to left this is known as undefined behaviour in c language
    //   6 6 4  is the correct answer in most of the cases as most of the compilers follow right to left evaluation order

    return 0;
}