 LLM "ChatGPT" foi utilizada para a implementação e explicação do código do padrão de projeto "Facade".

 O projeto estrutura "facade" se trata de um padrão que possui o objetivo de apresentar uma interface simples para diversas classes consideradas complexas, escondendo a complexidade e apenas 
 entregando para o cliente o método que deve ser realizado para realizar a tarefa, como um botão.

 No código apresentado como exemplo o problema que tinhamos eram as diversas etapas que tinham que ser analisadas para efetuar a matricula de um aluno, cada uma dessas etapas foram colocadas
 em classes diferentes, dificultando assim o processo, mas com o "Facade" podemos interligar todas as classes ou também chamados de subsistemas em uma só classe que faz todas as tarefas de
 efetuar uma matricula de uma só vez.

Classe Aluno:

A classe Aluno é responsável por verificar se o aluno está devidamente cadastrado na universidade. Ela representa uma das etapas necessárias para a realização da matrícula.

Classe Disciplina:

A classe Disciplina é responsável por gerenciar informações relacionadas às disciplinas.
Ela possui métodos para:

verificar a disponibilidade de vagas;
registrar a matrícula do aluno na disciplina.

Classe Historico:

A classe Historico é responsável por atualizar o histórico acadêmico do estudante após a matrícula ser realizada.

Classe Financeiro:

A classe Financeiro é responsável por gerar o boleto referente à matrícula.

Classe MatriculaFacade:

A classe MatriculaFacade é a implementação do padrão Facade.

Ela possui internamente objetos de todos os subsistemas:

Aluno
Disciplina
Historico
Financeiro

Seu papel é coordenar a comunicação entre essas classes.

Arquivo main.cpp:

O arquivo principal representa o cliente do sistema. O cliente não precisa conhecer os detalhes dos subsistemas. Ele apenas cria um objeto da fachada:
    MatriculaFacade matricula;
e solicita a realização da matrícula:
    matricula.realizarMatricula();