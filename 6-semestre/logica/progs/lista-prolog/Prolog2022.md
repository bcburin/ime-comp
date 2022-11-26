1. Escreva em Prolog um programa definindo o predicado prog (L1, L2, L) que dadas duas listas L1 e L2 com repeti��o, nos retorna a interse��o com repeti��o L dessas listas. Defina todos os predicados que utilizar.
Exemplo: prog([2,7,2,11], [3,4,5,2,8,2,7], L) nos dar� a resposta L=[2,2,7] ou qualquer permuta��o dessa lista.

2. Escreva em Prolog um programa definindo o predicado prog (L1, L2, L) que dadas duas listas L1 e L2 com repeti��o, nos retorna a interse��o sem repeti��o L dessas listas. Defina todos os predicados que utilizar.
Exemplo: prog([2,7,2,11], [3,4,5,2,8,2,7], L) nos dar� a resposta L=[2,7] ou qualquer permuta��o dessa lista.

3. Considere 8 letras diferentes . Fa�a um programa que compare duas listas formadas por 4 letras distintas, e resposta quantos elementos da lista s�o iguais na posi��o correta e quantos s�o iguais mas em uma posi��o errada.
Ex: p([a,b,c,d],[b,e,a,d],X,Y) devera retornar X=1 e Y = 2.

4. igual ao anterior, mas com repeti��o nas listas.

5. Escreva em Prolog um programa cuja entrada seja uma lista de lista e que retorne uma lista simples.
flat([ [a],[b] ],L).           Resp: L = [a, b] ;  false.
flat([[a],[b],[c]],L).            L = [a, b, c] ;false.
flat([[a],[b],[[c]]],L).            L = [a, b, c] ;false.
flat([[a],[b],[[c],[d]]],L).            L = [a, b, c, d] ;false.
flat([[a,[[c|[d],[a]],e]],[b],[[c],[d]]],L).     L = [a, [c| ([d], [a])], e, b, c, d] ; false.


6. Escreva em prolog um programa que de todas as permuta��es de uma lista sem repeti��es:
perm([1, 4, 7], X).
X = [1, 4, 7]; X = [1, 7, 4]; X = [4, 1, 7]; X = [4, 7, 1]; X = [7, 1, 4]; X = [7, 4, 1]; false.


7. Escreva um programa definindo o predicado diff (L1, L2, L) que dadas duas listas L1 e L2, nos retorna L1 - L2. Defina todos os predicados que utilizar.
Exemplo: diff([2,7,2,11], [3,4,5,2,8,7], L) nos dar� a resposta L=[2,11].


8. Defina o predicado caminho(X,Y,P) que vale sse existe um caminho ac�clico P do n� X para o n� Y. 
Cuidado com loops: the grafo pode coter ciclos, mas seu programa deve os evitar.
       arc(a,b).  % 1
       arc(a,c).  % 2
       arc(b,c).  % 3
       arc(b,d).  % 4
       arc(c,d).  % 5
       arc(c,a).  % 6
:- caminho(a,d,P).