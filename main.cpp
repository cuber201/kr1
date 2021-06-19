#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(int argc,char*argv[])
{
    string slovo;
    string point=".";
    int id;
    ifstream fin(argv[1]);
    ofstream fout(argv[2]);
    fin>>slovo;
    while (slovo[id]!=point[0]){
        id=slovo.length()-1;
        if (slovo[id]==point[0]){
            if (slovo[0]!=slovo[id-1]){
            fout<<slovo<<" ";
            }
        break;
        }
        if (slovo[0]!=slovo[id]){
            fout<<slovo<<" ";
        }
        fin>>slovo;
    }
    return 0;
}
