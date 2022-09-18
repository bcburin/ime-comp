# Arquitetura em Camadas

---

- Problema complexo: solução baseada no princípio "dividir para conquistar"
- Decomposição do problema em níveis hierárquicos de menor complexidade
- Facilidade de modificação e validação
- Cada camada utiliza os serviços oferecidos pela camada imediatamente inferior para implementar e oferece seus seus serviços à camada imediatamente superior
- Camada $n$ de uma máquina se comunica com a camada $n$ da outra máquina virtualmente (comunicação horizontal)

---

### Funções das Camadas

- Endereçamento
- Quantificação e qualificação dos canais de comunicação
- Controle de erros
- Ordenação das mensagens
- Controle de fluxo
- Tamanho das mensagens
- Escolha de rota
- Etc.

---

Tags: #redes1 