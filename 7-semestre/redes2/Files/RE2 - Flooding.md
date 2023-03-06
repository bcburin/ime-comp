
# Flooding

- Cada pacote que chega é enviado para todas as portas, exceto para aquela por onde chegou
- Gera pacotes duplicados -> $\infty$
- Contador de *hops* no cabeçalho 
	- evitar envio pela segunda vez (controle de pacotes já inundados)
	- selective flooding
- Aplicações militares: **robustez**
- bancos de dados distribuídos *(atualização simultânea)*
- sempre escolhe o caminho mais curto


#redes2

