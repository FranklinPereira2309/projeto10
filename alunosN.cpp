#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int numAlunos;
    
    string nome1;
    vector<string> nomes;
    vector<float> nota1;
    
    vector<float> nota2;
    float notas;

    cout << "Favor digitar o n. de alunos: ";
    cin >> numAlunos;
    cin.ignore();
      
         
    for(int i = 0 ; i < numAlunos ; i++) {
        cout << "Informe o nome do aluno" << endl;
        getline(cin >> ws, nome1);
        nomes.push_back(nome1);
      
        cout << "Favor informar a nota1 ";
        cin >> notas;
        nota1.push_back(notas);

        cout << "Favor informar a nota2 ";
        cin >> notas;
        nota2.push_back(notas);
        
    }

    cout << "Nome do aluno\t" << "Nota1\t" << "Nota2\t" << endl;
    cout << "------------------------------------------" << endl;

    for(auto it = nomes.begin(); it!= nomes.end(); it++ ) {
        cout << *it << "\t" << endl;
    }
    cout << endl;
    
    for(auto it = nota1.begin(); it!= nota1.end(); it++ ) {
        cout << *it << "\t" << endl ;
    }
    cout << endl;

    for(auto it = nota2.begin(); it!= nota2.end(); it++ ) {
        cout << *it << "\t" << endl;
    }

}