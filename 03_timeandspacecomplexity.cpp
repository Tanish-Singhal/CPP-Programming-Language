// TODO: Time Complexity
// Rate at which the time taken increases with respect to the input size.

// slope of the graph of the time taken is the time complexity.

// Time Complexity:  Big-On Notation => O()
//                                        ^
//                                        |_ Time Taken


// FIXME: for (i = 1; i <= 5; i++) {
//           cout<< "Tanish";
//        }

// FIXME: Steps taken in the code:
// 1. Assigning the value of i
// 2. Comparison of i with 5            -   these three steps are repeating
// 3. Printing of Tanish                |   and we can assume there is any number in place of 5, let it be N
// 4. Incrementation of i               -   So, time Complexity: O(N*3)
// 5. Comparison of i with 5
// 6. Printing of Tanish
// 7. Incrementation of i 
// 8.   |
// 9.   |
// 10.  |
//      |

// FIXME: Rules: 
// 1. Time Complexity to be computed in terms of worst case senario+++++++++++ 
// 2. Avoid Constants
// 3. Avoid lower values

// Best Case :- when the computer has to do minimum number of operations
// Worst Case:- when the computer has to do the maximum number of operations
// Average Case:- (Best Case + Worst Case)/2

// FIXME:
//  Q:   O(4N^3 + 3N^2 + 8)        N = 10^5
// Ans: O(4*10^15 + 3*10^10 + 8)
//          |         |        |----Avoid Constant (and it is negligible)
//          |---------|------------- If we add 3N^2 in 4N^3 then 3N^2 is negligible
//                                   It was equal to adding 1 to 100000 (So, avoid adding it)


// FIXME:
// fun (int i = 0; i < N; i++) {            ===> Here (i=0) and (i++) are the constand operations. So, Avoid it
//     fun ( int j = 0; j < N; j++) {       ===> Here (j=0) and (j++) are the constand operations. So, Avoid it
//         cout<< "Tanish";                 ===> Avoid it (Because it is single lined, negligible)
//     }
// }

// Ans:     Time Complexity: O(N^2)           i=0   {j=0,1,2,3,....,N-1}
//                                            i=1   {j=0,1,2,3,....,N-1}
//                                            i=2   {j=0,1,2,3,....,N-1}
//                                            i=3   {j=0,1,2,3,....,N-1}
//                                                         |
//                                                         |
//                                            i=N-1 {j=0,1,2,3,....,N-1}

// FIXME:
// fun (int i = 0; i < N; i++) {             ===> Here (i=0) and (i++) are the constand operations. So, Avoid it
//     fun ( int j = 0; j <= i; j++) {       ===> Here (j=0) and (j++) are the constand operations. So, Avoid it
//         cout<< "Tanish";                  ===> Avoid it (Because it is single lined, negligible)
//     }
// }

// Ans:     time Complexity: O(N^2)           i=0   {j=0}
//                                            i=1   {j=0,1}
//                                            i=2   {j=0,1,2}
//                                            i=3   {j=0,1,2,3}
//                                                       |
//                                                       |
//                                            i=N-1 {j=0,1,2,3,....,N-1}

// So, (1 + 2 + 3 + 4 + ....... + n)
//     sum = (N * (N + 1))/2
//         = (N^2)/2 + (N/2)        ===> Avoid smaller values (N/2)
//                                       But this is the exact Time Complexity
//         = O((N^2)/2)
//         ~ O(N^2)                      But you can also write this also

// FIXME:
// for (int i = 1; i <=n; i++) {            ===> Time Complexity = (log n)
//     cout<< "Tanish";
// }

// FIXME:
// for (int i = n; i > 0; i++) {
//     cout<< "Tanish";
// }

// FIXME:
// for (int i = 0; i < n; i++) {
//     for (int j = 0; j <= n; j++) {
//         cout<< "Tanish";
//     }
// }



