

/* Concatenate two lists */

append([], L, L).
append([X|T], L, [X|R]) :- append(T,L,R).


/* Flatten list */

flat([H|T], FL) :-
    !,
    flat(H, FlatH),
    flat(T, FlatT),
    append(FlatH, FlatT, FL).

flat([],[]):- !.
flat(X,[X]).
