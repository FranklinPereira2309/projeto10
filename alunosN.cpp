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

void excluirAluno(vector<string>& nomes, vector<float>& nota1, vector<float>& nota2) {
    string nome;
    int i = 0;
    
    cout << "Favor o nome do aluno: ";
    cin >> nome;
    cin.ignore();

    for(auto it=nomes.begin(); it!=nomes.end(); it++, i++) {
        if(*it == nome) {
            nomes.at(i).erase();
            nota1.at(i) = 0;
            nota2.at(i) = 0;
        }
    }
    
}

void incluirNotas(vector<float>& nota1, vector<float>& nota2) {
    float notas;
            
    cout << "Favor informar a nota1 ";
    cin >> notas;
    nota1.push_back(notas);

    cout << "Favor informar a nota2 ";
    cin >> notas;
    nota2.push_back(notas);
    
}


void incluirAluno(vector<string>& nomes, vector<float>& nota1, vector<float>& nota2) {
    int numAlunos;
    string nome; 
    char opcao;
        

    cout << "Favor digitar o n. de alunos: ";
    cin >> numAlunos;
    
      
         
    for(int i = 1 ; i <= numAlunos ; i++) {
        cout << "Informe o nome do " << i << " aluno" << endl;
        getline(cin >> ws, nome);
        nomes.push_back(nome);    
        incluirNotas(nota1, nota2);
    }
    

    cout << "Deseja exluir algum aluno(s/n) ?";
    cin >> opcao;
    if(opcao == 's' || opcao == 'S') {
        excluirAluno(nomes, nota1, nota2);
    }

    
}


void imprimir(vector<string>& nomes) {
    int i = 1;
    for(auto it=nomes.begin(); it!=nomes.end(); it++, i++) {
        
        if(!nomes.empty()){

            cout << "Aluno " << i << " - " <<  *it << endl;
        }else {
            cout << "Dados não encontrados em Nomes" << endl;
        }
    }
    cout << "-------------------------------------\n";

}

void imprimirNotas(vector<float>& nota1, vector<float> nota2) {
    int i = 1;
    int j = 1;
    for(auto it=nota1.begin(); it!=nota1.end(); it++, i++) {
        
        if(!nota1.empty() || !nota2.empty()){

            cout << "Nota1 - Aluno " << i << ": " << fixed << setprecision(2) << *it << endl;
        }else {
            cout << "Dados não encontrados em Nota" << endl;
        }
    }
    cout << "-------------------------------------\n";
    for(auto it=nota1.begin(); it!=nota1.end(); it++, j++) {
        if(!nota1.empty() || !nota2.empty()){

            cout << "Nota2 - Aluno  " << j <<  ": " << fixed << setprecision(2) << *it << endl;
            
        }else {
            cout << "Dados não encontrados em Nota" << endl;
        }
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
    
    cout << "1 - Deseja INCLUIR alunos? \n";
    cout << "2 - Deseja EXCLUIR alunos? \n";
    cout << "3 - Imprimir \n";
    cout << "0 - Sair \n";
    cin >> opcao;
    

    switch (opcao)
    {
    case 1:
        incluirAluno(nomes, nota1, nota2);
        break;
    case 2:
        excluirAluno(nomes, nota1, nota2);
        break;
    case 3:
        imprimir(nomes);
        imprimirNotas(nota1, nota2);
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
>>>>>>> 434e1bfad5b1e316c28d4c7e756b80299a31568c
        cout << *it << "\t" << endl ;
    }
    cout << endl;

    for(auto it = nota2.begin(); it!= nota2.end(); it++ ) {
        cout << *it << "\t" << endl;


}