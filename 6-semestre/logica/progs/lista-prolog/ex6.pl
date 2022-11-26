

/* Removes first occurrence of element in list */

remove(X, [X|L], L).
remove(X, [H|L], [H|R]) :- remove(X, L, R).


/* Finds permutations of a list with unique elements */

perm([], []).

perm(L, [H|T]) :-
    remove(H, L, R),
    perm(R,T).
