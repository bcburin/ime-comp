# Camada de Transporte

---

- **Função principal**
	- Permitir comunicação fim-a-fim entre programas de nível de aplicação
- **Características**
	- Divide as mensagens em pacotes no envio e as rearruma na chegada
	- Possui dois protocolos básicos
		- TCP (*Transmission Control Protocol*)
		- UDP (*User Datagram Protocol*)

---

### TCP

- orientado à conexão: [[RE1 - Comutação a Pacote por Circuito Virtual|circuito virtual]]
- Faz controle de erros
- Trata a ordem dos pacotes
- Realiza controle de fluxo
- Maior overhead que UDP
- Tráfego de dados em geral

---

### UDP

- Não orientado à conexão: [[RE1 - Comutação a Pacote por Datagrama|datagrama]] não confiável
- Menor overhead que TCP
- Tráfego isócrono

---

Tags: #redes1 