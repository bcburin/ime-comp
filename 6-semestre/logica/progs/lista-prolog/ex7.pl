
/* Removes first occurrence of element in list */

remove(_, [], []).
remove(X, [X|R], R).
remove(X, [H|T], [H|R]) :- remove(X, T, R).


/* Finds difference between two lists */

diff(L, [H|T], S) :-
    remove(H, L, NewL),
    diff(NewL,T,S).

diff(L, [], L).
