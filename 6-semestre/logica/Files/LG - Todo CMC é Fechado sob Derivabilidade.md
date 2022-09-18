# Todo Conjunto Maximalmente Consistente é Fechado sob Derivabilidade

---

### Teorema

Se $\Gamma$ é [[LG - Conjunto Maximalmente Consistente|maximalmente consistente]], então $\Gamma$ é [[LG - Conjunto Fechado sob Derivabilidade|fechado sob derivabilidade]].

---

### Demonstração

Seja $\phi$ tal  que $\Gamma \vdash \phi$, queremos provar que $\phi \in \Gamma$. Suponha, por absurdo, que $\phi\not\in\Gamma$. Como $\Gamma$ é maximalmente consistente, isso implica que $\Gamma\cup\{\phi\}$ é inconsistente, portanto $\Gamma \vdash \neg\phi$ ^[[[LG - Derivação da Negação]]]. Nesse caso, $\Gamma \vdash \phi$ e $\Gamma \vdash \neg\phi$, o que implicaria $\Gamma$ inconsistente ^[[[LG - Conjunto Consistente#Teorema]]], um absurdo. Assim, $\phi \in \Gamma$, de modo que $\Gamma$ é fechado por derivação.


---

Tags: #logica 