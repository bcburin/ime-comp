# Componentes de um SGBD

---

- **Processador de Consultas/Transações**
	- **Compilador de consultas [[BD - Linguagens de Banco de Dados|DML]]** -> Plano de consulta
		- Analisador -> Árvore de consulta
		- Pré-processador -> Árvore algébrica
		- Otimizador
	- **Mecanismo de execução de consulta** -> Solicitação de dados
		- Controle de Concorrência
		- Registro de log e recuperação
- **Gerenciador de Recursos**
	- Gerenciador de [[BD - Índices|índices]]
	- Gerenciador de armazenamento
	- Gerenciador de buffers


---


![[componentes-sgbd.png|550]]

---

![[processador-consultas.png|550]]

---

### Acesso ao Banco de Dados

![[acesso-bd.png|550]]

---

Tags: #banco-dados 