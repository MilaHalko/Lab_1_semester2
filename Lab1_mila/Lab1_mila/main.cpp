#include "header.hpp"
using namespace std;

int main() 
{
    string* arr = new string[n];
    
    readFile("premier_league1.csv", arr);
    readFile("premier_league2.csv", arr);

    team res[n];
    processArr(arr, res);

    sortRes(res);

    writeFile("results.csv", res);

    // output
    for (int i = 0; i < n; i++)
    {
        cout << res[i].name << " " << res[i].score << endl;
    }
    system("pause");
}
