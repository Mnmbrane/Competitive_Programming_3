#include <stdio.h>
#include <gtest/gtest.h>

using namespace std;

int main(int argc, char* argv[])
{
   printf("Hello World!\n");
   testing::InitGoogleTest(&argc, argv);

   return RUN_ALL_TESTS();

}