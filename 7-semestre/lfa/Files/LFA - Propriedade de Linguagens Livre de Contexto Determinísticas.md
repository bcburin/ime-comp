---
alias: LLCD
---

# Propriedade de Linguagens Livre de Contexto Determinísticas

- [[LFA - Propriedade de Linguagens Livre de Contexto Determinísticas|LLCD]] $\not\subseteq$ [[LFA - Linguagem Livre de Contexto|LLC]]

Sejam $L_1$ e $L_2$ duas [[LFA - Propriedade de Linguagens Livre de Contexto Determinísticas|LLCD]], então

- $\overline{L_1}$ é LLCD? **Sim**
- $L_1 \cup L_2$ é LLCD? **Não**
	- $L_1 = \{x^n y^n\}$ é LLCD
	- $L_2 = \{x^n y^{2n}\}$ é LLCD
	- $L_1 \cup L_2$ não é LLCD
- $L_1 \cap L_2$ é LLCD? **Não**
	- Suponha que seja. Então $L_1 \cup L_2 = \overline{\overline{L_1} \cap \overline{L_2}}$ seria sempre LLCD *(absurdo)*
- $L_1L_2$ é LLCD? **Não**
- $L_1^*$ é LLCD? **Não**
- $L_1^R$ é LLCD? **Não**

#lfa

