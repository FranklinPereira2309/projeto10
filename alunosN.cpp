#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string>& nomes) {
    
    int n = nomes.size();
    bool trocou;

    do {
        trocou = false;

        for (int i = 1; i < n; i++) {
            
            if (nomes[i - 1] > nomes[i]) {
                swap(nomes[i - 1], nomes[i]);
                trocou = true;
            }
        }
    } while (trocou);
}

void incluirAluno(vector<string>& nomes) {
    int numAlunos;
    string nome; 

    cout << "Favor digitar o n. de alunos: ";
    cin >> numAlunos;
    
      
         
    for(int i = 0 ; i < numAlunos ; i++) {
        cout << "Informe o nome do aluno" << endl;
        getline(cin >> ws, nome);
        nomes.push_back(nome);    
    }

    
}

void excluirAluno(vector<string>& nomes) {
    string nome;
    int i = 0;
    cout << "Favor o nome do aluno: ";
    cin >> nome;
    cin.ignore();

    for(auto it=nomes.begin(); it!=nomes.end(); it++, i++) {
        if(*it == nome) {
            nomes.at(i).erase();
        }

    }
    
}

void incluirNotas(int n, vector<float>& nota1, vector<float>& nota2) {
    float notas;
    for(int i = 1; i <= n; i++) {
        
            cout << "Favor informar a nota1 - Aluno " << i << ": ";
            cin >> notas;
            nota1.push_back(notas);

            cout << "Favor informar a nota2 - Aluno " << i << ": ";
            cin >> notas;
            nota2.push_back(notas);

        
    }
}

void imprimir(vector<string>& nomes) {
    for(auto it=nomes.begin(); it!=nomes.end(); it++) {
        cout << *it << endl;
    }
}


int main() {
    string troca;
    float notas;
    bool prosseguir = true;
    int opcao;
    int n;

    vector<string> nomes;
    vector<float> nota1;
    vector<float> nota2;

    n=nomes.size();

    

while(prosseguir) {
    
    cout << "1 - Deseja INCLUIR mais alunos? \n";
    cout << "2 - Deseja EXCLUIR mais alunos? \n";
    cout << "3 - Imprimir \n";
    cout << "0 - Sair \n";
    cin >> opcao;
    

    switch (opcao)
    {
    case 1:
        incluirAluno(nomes);
        break;
    case 2:
        excluirAluno(nomes);
        break;
    case 3:
        imprimir(nomes);
        break;
    case 0:
        prosseguir = opcao == 0? false : true;
    default:
        break;
    }

}



   

    /*for(auto it = nomes.begin(); it!= nomes.end(); it++ ) {
        cout << *it << "\t" << endl;
    }
    cout << endl;*/
    
    /*for(auto it = nota1.begin(); it!= nota1.end(); it++ ) {
        cout << *it << "\t" << endl ;
    }
    cout << endl;

    for(auto it = nota2.begin(); it!= nota2.end(); it++ ) {
        cout << *it << "\t" << endl;
    }*/

}