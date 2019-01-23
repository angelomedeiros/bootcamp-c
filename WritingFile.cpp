#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ofstream outFile;

    outFile.open("23-01-2019:1247.log", ios_base::app);

    outFile << "\nHoje foi legal";

    outFile.close();

    return 0;
}
