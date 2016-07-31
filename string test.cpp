#include <iostream>
#include <iomanip>
#include <string> //For getline()

using namespace std;

// Creating class
class GetText
{
public:

    string text;
    string line; //Using this as a buffer

    void userText()
    {
        do
        {
            getline(cin, line);
            text+=" ";
            text += line;
        }
        while((line.find("\0")));
    }

    void to_string()
    {
        cout << "\n" << "User's Text: " << "\n" << text << endl;
    }
     };

     int main() {

    GetText test;
    test.userText();
    test.to_string();
//    system("pause");
    return 0;
}
