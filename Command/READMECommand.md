LLM "ChatGPT" foi utilizada para a implementação e explicação do código do padrão de projeto "Command".

O padrão comportamental "Command" é um padrão de projeto com a capacidade de guardar uma solicitação em um objeto, assim podendo guardar o que é a solicitação e efetua-la mais tarde caso 
necessário. Command sempre vai ter um "invoker" e um "receptor", por exemplo em um controle remoto, o cliente apertar um botão pedindo uma ação, o controle não liga diretamente a televisão
mas envia um comando para a televisão para executar essa ação, nesse caso o "invoker" é o controle e o "receptor" é a televisão.

No código implementado foi usado um exemplo de um controle remoto que controla uma lampada, no caso desse código o receptor é a classe "Luz" e o invoker é a classe ControleRemoto.

A classe Luz é quem realmente sabe executar as ações:
    ligar()
    desligar()

A interface Command define o método:
    execute()
Todos os comandos devem implementá-lo.

As classes:

LigarLuzCommand;
DesligarLuzCommand;

encapsulam as ações.

Cada uma conhece a Luz e chama o método adequado.

A classe:

ControleRemoto

não sabe como ligar ou desligar a luz.
Ela apenas executa:
comando->execute();

O main.cpp cria os objetos e conecta tudo.

main

 ↓

ControleRemoto

 ↓

Command

 ↓

Luz

Esse é exatamente o fluxo clássico do padrão Command mostrado na maioria dos livros e diagramas UML sobre padrões de projeto.