# include  < iostream >  // Sempre come�ar c++ com este comando
# include  < stdlib.h >      /* srand, rand */
# include  < hora.h >        /* hora */

usando  namespace  std ;

principal (){
	setlocale (LC_ALL, " Portugu�s " );
	int N1, N2, N3, esconde;
	intx ;
	bool venceu = false ;
	booleano fim = false ;
	srand ( hora ( NULL ));
	
	esconde = rand () % 49 + 0 ;
	
	
// 	cout << "Thanos se encondeu numa floresta com 50 �rvores, descubra onde ele est�!"
	while (fim == false ){
		
	cout << " \n Informe o n�vel em que quer jogar (1=facil, 2=m�dio, 3=dificil): " ;
	cin >> N2;
	
	tentativas int ;
	se (N2 == 1 ){
		tentativas = 15 ;
	} sen�o  se (N2 == 2 ){
		tentativas = 10 ;
	} sen�o {
		tentativas = 5 ;
	}
	

	
	se (N2 == 3 )
	para (x = 0 ; x < 5 ; x = x + 1 ){
		cout << " \n\n Informe qual �rvore quer atacar: " ;
	cin >> N1;
	if (N1 < esconde){
		cout << " Thanos est� mais a direita " ;
	} else  if (N1 > esconde){
		cout << " Thanos est� mais a esquerda " ;
	} else  if (N1 == esconde){
		cout << " Voc� achou thanos! " ;
		venceu = verdadeiro ;
		quebrar ;

	}
	}	
	
	
		se (N2 == 2 )
	para (x = 0 ; x < 10 ; x = x + 1 ){
		cout << " \n\n Informe qual �rvore quer atacar: " ;
	cin >> N1;
	if (N1 < esconde){
		cout << " Thanos est� mais a direita " ;
	} else  if (N1 > esconde){
		cout << " Thanos est� mais a esquerda " ;
	} else  if (N1 == esconde){
		cout << " Voc� achou thanos! " ;
		venceu = verdadeiro ;
		quebrar ;

	}
	}	
	
	
		se (N2 == 1 )
	para (x = 0 ; x < 15 ; x = x + 1 ){
		cout << " \n\n Informe qual �rvore quer atacar: " ;
	cin >> N1;
	if (N1 < esconde){
		cout << " Thanos est� mais a direita " ;
	} else  if (N1 > esconde){
		cout << " Thanos est� mais a esquerda " ;
	} else  if (N1 == esconde){
		cout << " Voc� achou thanos! " ;
		venceu = verdadeiro ;
		quebrar ;

	}
	}
	
	
	
	
	if (venceu == false ) {
		cout << " \n\n Voc� perdeu! Mais sorte na pr�xima! " << endl;	
	}
	
	cout << "  \n\n voc� quer jogar novamente? Responde com sim ou n�o sim(1) ou n�o(2): " ;
	cin >> N3;
	
	se (N3 == 2 ){
		fim = verdadeiro ;
	}
	outra coisa {
		cout << " ent�o vamos recomer�ar " << endl << endl;
	}
		
	}	
}
