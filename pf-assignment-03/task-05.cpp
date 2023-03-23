/*
Write a C++ Program to Count Words Lines and Total Size using File Handling
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("task5.txt");

    int numWords = 0;
    int numLines = 0;
    int fileSize = 0;
    string line;

    while (getline(inFile, line))
    {
        numLines++;
        fileSize += line.size();

        int wordCount = 0;
        for (int i = 0; i < line.size(); i++)
        {
            if (isspace(line[i]))
            {
                wordCount++;
            }
        }
        numWords += wordCount + 1;
    }

    inFile.close();

    cout << "Number of words: " << numWords << endl;
    cout << "Number of lines: " << numLines << endl;
    cout << "Total size: " << fileSize << " bytes" << endl;

    return 0;
}