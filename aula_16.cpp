#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string nome;
	int quantidade;
	double *notas;
	double media;
} Turma;

int main(){
	Turma *A;
	A = new Turma;

	if( A ){
		cout << "Digite o número de alunos da Turma A" << endl;
		cin >> A->quantidade;

		A->nome = "Turma A";

		A->notas = new double[A->quantidade];

		for(int i = 0; i < A->quantidade; i++){
			cout << "Digite a nota do aluno " << (i+1) << " da turma A" << endl;
			cin >> A->notas[i]; 
		}

		double *media = new double;

		for(int i = 0; i < A->quantidade; i++){
			*media += A->notas[i];
		}

		*media = *media/A->quantidade;

		A->media = *media;

		delete media;

	}

	Turma *B;
	B = new Turma;

	if( B ){
		cout << "Digite o número de alunos da Turma B" << endl;
		cin >> B->quantidade;

		B->nome = "Turma B";

		B->notas = new double[B->quantidade];

		for(int i = 0; i < B->quantidade; i++){
			cout << "Digite a nota do aluno " << (i+1) << " da turma B" << endl;
			cin >> B->notas[i]; 
		}

		double *media = new double;

		for(int i = 0; i < B->quantidade; i++){
			*media += B->notas[i];
		}

		*media = *media/B->quantidade;

		B->media = *media;

		delete media;

	}

	if(A->media > B->media){
		cout << "A turma A tem a maior média, com média de " << A->media << endl;
	}else if(A->media < B->media){
		cout << "A turma B tem a maior média, com média de " << B->media << endl;
	}else{
		cout << "As duas turmas tem a mesma média, com média de" << A->media << endl;
	}

	delete A;
	A = 0;
	delete B;
	B = 0;

	return 0;
}