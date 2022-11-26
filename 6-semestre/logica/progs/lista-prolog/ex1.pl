
/* Determines whether an element belogs to list */

member(X,[X|_]).
member(X,[_|T]) :- member(X,T).


/* Finds intersection of lists with repetition */

inter_rep([],_,[]).

inter_rep([X|T],L,[X|I]) :-
    member(X,L),
    inter_rep(T,L,I).

inter_rep([X|T],L,I) :-
    \+ member(X,L),
    inter_rep(T,L,I).
