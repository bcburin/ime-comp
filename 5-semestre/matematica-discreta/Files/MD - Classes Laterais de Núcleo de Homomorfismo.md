# Classes Laterais de Núcleo de Homomorfismo

---

### Teorema

A [[MD - Imagem Inversa de Homomorfismo|imagem inversa]] da [[MD - Imagem de Homomorfismo|imagem]] de um [[MD - Homomorfismo|homomorfismo]] é igual às [[MD - Classes Laterais à Esquerda|classes laterais à esquerda]] e [[MD - Classes Laterais à Direita|à direita]] geradas pelo elemento e pelo [[MD - Núcleo de Homomorfismo|núcleo do homomorfismo]].

Ou seja, para um homomorfismo $\phi:G \to G'$ com núcleo $\mathrm{ker}(\phi) = H$ e $g \in G$, tem-se

$$
\phi^{-1}[\{\phi(g)\}] = gH = Hg
$$

---

### Demonstração

Perceba que

$$
\phi^{-1}[\{\phi(g)\}] = \{\;  x \in G \;|\; \phi(x) = \phi(g) \;\}
$$

Então, queremos demonstar que

$$
\{\;  x \in G \;|\; \phi(x) = \phi(g) \;\} = gH
$$

Suponha $x \in G$ tal que $\phi(x)=\phi(g)$. Assim, tem-se que $\phi(g)^{-1}\phi(x)=e'$. Como $\phi(g)^{-1}=\phi(g^{-1})$^[[[MD - Imagem Homomórfica do Elemento Inverso]]], temos $\phi(g^{-1})\phi(x)=e'$. Como $\phi$ é homomorfismo, $\phi(g^{-1}x)=\phi(g^{-1})\phi(x)=e'$. Logo, $g^{-1}x \in H$. Desse modo, existe $h \in H$ tal que $g^{-1}x=h$. Portanto $x=gh$ implica $x \in aH$, e

$$
\{\;  x \in G \;|\; \phi(x) = \phi(g) \;\} \subset gH
$$

Por outro lado, suponha $x \in gH$. Então existe $h \in H$ tal que $x=gh$. Aplicando a função, tem-se $\phi(x)=\phi(gh)=\phi(g)\phi(h)=\phi(g)e'=\phi(g)$. Logo

$$
gH \subset \{\;  x \in G \;|\; \phi(x) = \phi(g) \;\}
$$

Portanto, foi provado que

$$
\{\;  x \in G \;|\; \phi(x) = \phi(g) \;\} = gH
$$

De modo análogo, demonstra-se que 

$$
\{\;  x \in G \;|\; \phi(x) = \phi(g) \;\} = Hg
$$

Disso, segue-se que

$$
\{\;  x \in G \;|\; \phi(x) = \phi(g) \;\} = gH = Hg = \phi^{-1}[\{\phi(g\}]
$$

Como queriamos provar.

---

### Corolário

O [[MD - Núcleo de Homomorfismo|núcleo]] de um [[MD - Homomorfismo|homomorfismo]] é um [[MD - Subgrupo Normal|subgrupo normal]] do seu domíno.

---

### Demonstração

Como o núcleo é um subgrupo do domínio^[[[MD - Núcleo de Homomorfismo#Teorema]]], o corolário segue direto da definição de subgrupo normal e do teorema acima.

---

Tags: #mat-discreta 