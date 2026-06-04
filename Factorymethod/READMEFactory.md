A LLM "ChatGPT" foi utilizada para a implementação e explicação do código do padrão de projeto "Factory Method".

O Factory Method é um padrão de projeto criacional, em que a ideia principal se trata de uma interface que cria objetos, mas faz com que as subclasses decidam qual objeto concreto vai ser criado.
No Código implementado foi usado um exemplo de notificações, quando falamos de notificações existem diversos tipos como: E-mail, SMS e etc. Se o método de fábrica não fosse utilizado
sempre que uma notificação tivesse que ser gerada seria necessário alguma forma de compreender qual tipo de classe ela seria, mas com o método de fábrica criamos uma fábrica abstrata que cria
"notificações" e fábricas concretas que criam os tipos de notificações como "E-mail" e "SMS", facilitando assim com que sejam criados mais tipos de notificação sem que seja necessário alterar
o código principal.

Explicação do código implementado:

Interface Notificacao:

A classe Notificacao é uma interface que define o método enviar(). Ela serve como um contrato que todas as notificações devem seguir. Isso significa que qualquer classe que represente uma
notificação deve implementar a forma como a mensagem será enviada.

Classes EmailNotificacao e SMSNotificacao:

Essas são as implementações concretas da interface Notificacao.
A classe EmailNotificacao simula o envio de mensagens por e-mail, enquanto a classe SMSNotificacao simula o envio por SMS. Cada uma possui sua própria implementação do método enviar(), mas
ambas seguem o mesmo padrão definido pela interface.

Classe FabricaNotificacao:

A classe FabricaNotificacao é uma fábrica abstrata responsável por definir o método criarNotificacao(). Esse método tem a função de criar e retornar um objeto do tipo Notificacao. A fábrica não
sabe qual notificação será criada, apenas define que alguma notificação deverá ser retornada.

Classes FabricaEmail e FabricaSMS:

Essas classes herdam de FabricaNotificacao e são responsáveis por criar os objetos concretos. A FabricaEmail cria objetos do tipo EmailNotificacao. A FabricaSMS cria objetos do tipo
SMSNotificacao. Dessa forma, a responsabilidade de criar os objetos fica concentrada nas fábricas.

Arquivo main.cpp:

O arquivo principal não cria diretamente objetos de e-mail ou SMS. Em vez disso, ele recebe uma fábrica e solicita que ela crie uma notificação. Após a criação, a notificação é utilizada
através da interface comum Notificacao. Isso permite que o código funcione da mesma forma independentemente do tipo de notificação utilizado.