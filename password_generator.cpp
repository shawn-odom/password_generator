#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string generatePassword(int length);

int main()
{
    int length = 0;

    cout << "Enter the length of the password: ";
    cin >> length;

    if (length <= 0)
    {
        cout << "Password length must be positive and more than 0!" << endl;
        return 1;
    }

    string password = generatePassword(length);
    cout << "Generated password: " << password << endl;

    return 0;
}

string generatePassword(int length)
{
    const string charPool = "abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?";
    string password = "";
    srand(time(0));

    for (int i = 0; i < length; ++i)
    {
        int rand_index = rand() % charPool.length();
        password += charPool[rand_index];
    }

    return password;
}