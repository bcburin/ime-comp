# Camada de Enlace

---

- **Função**
	- Fazer que o serviço de transmissão de bits (nível físico + canal) aparente ser uma linha livre de erros para as camadas superiores
- **Unidade de Dados**
	- Quadro (delimitação e sincronização de sequência de bits)
- **Tarefas**
	- Dividir os dados enviados pelas camadas superiores em quadros (algumas centenas ou milhares de bytes)
	- Endereçamento físico
	- Criar e reconhecer os quadros
	- Controlar acesso ao meio
	- Evitar duplicação de quadros
	- Detectar e, opcionalmente, corrigir erros de meio físico
	- Requisitar retransmissão de um ou mais quadros (que foram transmitidos com erros)
	- Implementar controle de fluxo

---

Tags: #redes1 