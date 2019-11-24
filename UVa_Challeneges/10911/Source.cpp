#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ifstream inputSample("sampleinput.txt");

#ifdef SAMPLE_FROM_FILE
   streambuf* streamBufFile = inputSample.rdbuf();
   cin.rdbuf(streamBufFile);
#else

#endif
   
   return 0;
}