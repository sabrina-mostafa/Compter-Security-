///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

///         Originator : Sabrina Mostafa_C201265
///         Dept. Of CSE
///         International Islamic University Chittagong




#include <iostream>
#include <string>
using namespace std;


int main() {
    string alphabet, substitution, msg;

    cout << "alphabet: ";
    cin >> alphabet;

    cout << "substitution: ";
    cin >> substitution;

    cout << "message: ";
    cin.ignore();
    getline(cin, msg);

    if (alphabet.size() != substitution.size()) {
        cout << "Alphabet and substitution must have the same length." << endl;
        return 1;
    }

    //Encryption
    string cipher = "";
    for (char c : msg) {
        size_t pos = alphabet.find(c);
        if (pos != string::npos) {
            cipher += substitution[pos];
        } else {
            cipher += c;
        }
    }

    cout << "Encrypted Cipher Text: " << cipher << endl;


//Decryption
    string plain = "";
    for (char c : cipher) {
        size_t pos = substitution.find(c);
        if (pos != string::npos) {
            plain += alphabet[pos];
        } else {
            plain += c;
        }
    }

    cout << "Decrypted Plain Text: " << plain << endl;
    return 0;
}
