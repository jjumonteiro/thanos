# include  < iostream >  // Sempre começar c++ com este comando
# include  < stdlib.h >      /* srand, rand */
# include  < hora.h >        /* hora */

usando  namespace  std ;

principal (){
	setlocale (LC_ALL, " Português " );
	int N1, N2, N3, esconde;
	intx ;
	bool venceu = false ;
	booleano fim = false ;
	srand ( hora ( NULL ));
	
	esconde = rand () % 49 + 0 ;
	
	
// 	cout << "Thanos se encondeu numa floresta com 50 árvores, descubra onde ele está!"
	while (fim == false ){
		
	cout << " \n Informe o nível em que quer jogar (1=facil, 2=médio, 3=dificil): " ;
	cin >> N2;
	
	tentativas int ;
	se (N2 == 1 ){
		tentativas = 15 ;
	} senão  se (N2 == 2 ){
		tentativas = 10 ;
	} senão {
		tentativas = 5 ;
	}
	

	
	se (N2 == 3 )
	para (x = 0 ; x < 5 ; x = x + 1 ){
		cout << " \n\n Informe qual árvore quer atacar: " ;
	cin >> N1;
	if (N1 < esconde){
		cout << " Thanos está mais a direita " ;
	} else  if (N1 > esconde){
		cout << " Thanos está mais a esquerda " ;
	} else  if (N1 == esconde){
		cout << " Você achou thanos! " ;
		venceu = verdadeiro ;
		quebrar ;

	}
	}	
	
	
		se (N2 == 2 )
	para (x = 0 ; x < 10 ; x = x + 1 ){
		cout << " \n\n Informe qual árvore quer atacar: " ;
	cin >> N1;
	if (N1 < esconde){
		cout << " Thanos está mais a direita " ;
	} else  if (N1 > esconde){
		cout << " Thanos está mais a esquerda " ;
	} else  if (N1 == esconde){
		cout << " Você achou thanos! " ;
		venceu = verdadeiro ;
		quebrar ;

	}
	}	
	
	
		se (N2 == 1 )
	para (x = 0 ; x < 15 ; x = x + 1 ){
		cout << " \n\n Informe qual árvore quer atacar: " ;
	cin >> N1;
	if (N1 < esconde){
		cout << " Thanos está mais a direita " ;
	} else  if (N1 > esconde){
		cout << " Thanos está mais a esquerda " ;
	} else  if (N1 == esconde){
		cout << " Você achou thanos! " ;
		venceu = verdadeiro ;
		quebrar ;

	}
	}
	
	
	
	
	if (venceu == false ) {
		cout << " \n\n Você perdeu! Mais sorte na próxima! " << endl;	
	}
	
	cout << "  \n\n você quer jogar novamente? Responde com sim ou não sim(1) ou não(2): " ;
	cin >> N3;
	
	se (N3 == 2 ){
		fim = verdadeiro ;
	}
	outra coisa {
		cout << " então vamos recomerçar " << endl << endl;
	}
		
	}	
}
