
/* Determine whether an element X belongs to a List */

member(X,[X|_]).
member(X,[_|T]) :- member(X,T).


/* Find the length of a list */

len([_|T], L, AccL) :-
    NewAccL is AccL + 1,
    len(T,L,NewAccL).

len([], L, L).

len(List, Length) :- len(List, Length, 0).


/* Reduce list to a set of unique elements */

set([X|T], [X|S]) :-
    set(T, S),
    \+ member(X,S).

set([X|T], S) :-
    set(T,S),
    member(X,S).

set([],[]).


/* Find the intersection of two list with repetition */

inter_rep([X|T], L, [X|I]) :-
    member(X, L),
    inter_rep(T, L, I).

inter_rep([X|T], L, I) :-
    \+ member(X, L),
    inter_rep(T, L, I).

inter_rep([], _, []).


/* Find intersection of lists without repetition */

inter(List1, List2, Inter) :-
    inter_rep(List1, List2, RepInter),
    set(RepInter, Inter).


/* Find the number of elements of two lists that belong to both
 * lists in the same postition
 */

nsame_pos([H1|T1], [H2|T2], X, AccX) :-
    H1 = H2,
    NewAccX is AccX + 1,
    nsame_pos(T1, T2, X, NewAccX).

nsame_pos([H1|T1], [H2|T2], X, AccX) :-
    \+ H1 = H2,
    nsame_pos(T1, T2, X, AccX).

nsame_pos([], [], X, X).

nsame_pos(List1, List2, X) :- nsame_pos(List1, List2, X, 0).


/* Find number of elements that belong to both lists (without repetition) */

nsame_elements(List1, List2, X) :-
    inter(List1, List2, Inter),
    len(Inter, X).


/* Compare two lists, outputing
 *   - X: number of elements that belong to both lists in the same positions
 *   - Y: number of elements that belong to both lists in different positions
 */

compare(List1, List2, X, Y) :-
    nsame_pos(List1, List2, X),
    nsame_elements(List1, List2, Z),
    Y is Z - X.