
/* Determines whether an element belogs to list */

member(X,[X|_]).
member(X,[_|T]) :- member(X,T).


/* Removes first occurrence of element in list */

remove(_, [], []).
remove(X, [X|R], R).
remove(X, [H|T], [H|R]) :- remove(X, T, R).


/* Finds intersection of lists with repetition */

inter_rep([],_,[]).

inter_rep([X|T],L,[X|I]) :-
    member(X,L),
    remove(X,L,U),
    inter_rep(T,U,I).

inter_rep([X|T],L,I) :-
    \+ member(X,L),
    inter_rep(T,L,I).
