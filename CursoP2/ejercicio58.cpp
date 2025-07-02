#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void lab_4_4_16() {
    string password;
    getline(cin, password);

    bool is_long_enough = false;
    bool has_upper = false;
    bool has_digit = false;
    bool has_special = false;
    bool chars_valid = false;

    size_t len_pass = password.size();
    is_long_enough = len_pass > 8;

    for (size_t i = 0; !chars_valid && i < len_pass; ++i) {
        if (::isupper(password[i])) has_upper = true;
        if (::isdigit(password[i])) has_digit = true;
        if (::ispunct(password[i])) has_special = true;
        chars_valid = has_upper && has_digit && has_special;
    }

    if (!is_long_enough)
        cout << "The password must be 8 characters long" << endl;
    if (!has_upper)
        cout << "The password must have at least one upper case letter" << endl;
    if (!has_digit)
        cout << "The password must have at least one digit" << endl;
    if (!has_special)
        cout << "The password must have at least one special character" << endl;

    if (chars_valid && is_long_enough)
        cout << "The password is valid" << endl;
}
