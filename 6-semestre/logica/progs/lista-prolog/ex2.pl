
/* Determines whether an element belogs to list */

member(X,[X|_]).
member(X,[_|T]) :- member(X,T).


/* Reduce list to a set of unique elements */

set([X|T], [X|S]) :-
    set(T, S),
    \+ member(X,S).

set([X|T], S) :-
    set(T,S),
    member(X,S).

set([],[]).


/* Finds intersection of lists with repetition */

inter_rep([X|T],L,[X|I]) :-
    member(X,L),
    inter_rep(T,L,I).

inter_rep([X|T],L,I) :-
    \+ member(X,L),
    inter_rep(T,L,I).

inter_rep([],_,[]).


/* Finds intersection of lists without repetition */

inter(L1,L2,I) :- 
    inter_rep(L1,L2,RI), 
    set(RI,I).
