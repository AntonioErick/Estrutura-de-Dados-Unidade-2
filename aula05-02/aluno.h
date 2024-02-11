/*Definiçao de novo tipo: Aluno*/
typedef struct aluno Aluno;

/*Funçao que aloca nenoria para um struct aluno, recebe os dados via teclado e retorna um ponteiro*/
Aluno * recebe_dados(void);

/*funçao que recebe um ponteiro para aluno e imprime dados*/
void imprime(Aluno * aluno);