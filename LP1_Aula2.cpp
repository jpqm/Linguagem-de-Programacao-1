#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){

    string mens;
    string add = "add";

    if(argc == 1 || add.compare(argv[1])) {

        cout << "Uso: " << argv[0] << " add <mensagem>" << endl;

        return -1;
    }

    if(argc == 2){

        cout << "Digite sua mensagem" << endl;

        getline(cin, mens);

        cout << "Sua mensagem: " << mens << endl;

        return 0;
    }

    cout << "Sua mensagem: " << argv[2] << endl;

    return 0;
}