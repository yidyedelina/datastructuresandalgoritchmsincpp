#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//ofstream to write on files
//ifstream to read from files
//fstream to both read and write from to files

int main(){
    ofstream fout;
    string line;
    fout.open("sample.txt");
    while(fout){
        getline(cin, line);
        if(line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();
    ifstream fin;
    fin.open("sample.txt");
    while(fin){
        getline(fin, line);
        cout << line << endl;

    }
    fin.close();
    // using fstream;
    fstream fio;
    string line;
    fio.open("sample.txt", ios::trunc | ios::out | ios::in);
    while (fio){
        getline(cin, line);
        if(line == "-1")
            break;
        fio << line << endl;
    }
    fio.seekg(0, ios::beg);
    while(fio){
        getline(fio, line);
        cout << line << endl;
    }
    fio.close();
    return 0;
}
