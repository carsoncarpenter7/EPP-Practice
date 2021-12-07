#include <iostream>
#include <string>

using std::string;
using std::cout;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);

// Implement printString here

void printString(const string &s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        cout << s[i] << " ";
    }

    cout << std::endl;
}



// Implement testString here

bool testString (const string &s){
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == s[i + 1]){
          return true;
        }
    }

    return false;

}




// EDIT CODE BELOW ONLY FOR TESTING (ANY CODE BELOW WILL BE OVER-WRITTEN DURING GRADING WITH DIFFERENT TESTS)

int main() {
  cout << "Test if the string contains two consecutive characters that are the same\n";
  {
    string s = "hello";
    cout << "Contents of array : ";
    printString(s);
      checkAnswer(s, testString(s), true);
  }
  {
    string s = "world";
    cout << "Contents of array : ";
    printString(s);
      checkAnswer(s, testString(s), false);
  }
  {
    string s = "hello world";
    cout << "Contents of array : ";
    printString(s);
      checkAnswer(s, testString(s), true);
  }
  {
    string s = "zzz";
    cout << "Contents of array : ";
    printString(s);
      checkAnswer(s, testString(s), true);
  }
  {
    string s = "snakess";
    cout << "Contents of array : ";
    printString(s);
      checkAnswer(s, testString(s), true);
  }
  {
    string s = "a";
    cout << "Contents of array : ";
    printString(s);
      checkAnswer(s, testString(s), false);
  }

  return 0;
}

bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << "\n";
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << "\n";
    return false;
}
