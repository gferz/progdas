#include <vector>
#include <string>
#include <cctype>
#include <vector>
#include <fstream>

using namespace std;


int main()
{
    ifstream input("input.txt");

    string arr[3];

    int i = 0;
    while(input.good())
    {
        string s;

        input >> s;

        for(int i = 0; i<s.size(); i++)
        {
            s[i] = std::tolower(s[i]);
        }

        arr[i] = s;
        i++;
    }

    input.close();

    ofstream output("output.json");

    output << "{\n";

    for(int k=0; k<3; k++)
    {
        output << arr[k] << "\n";
    }

    output << "}";

    output.close();


    return 0;
}

/*

{saya,sedang,makan}

*/