//
// Created by Rohan Kumar.
//

#include <bits/stdc++.h>
#include "RubiksCube3dArray.cpp"
#include "BFSSolver.h"


using namespace std;

int main() {
 RubiksCube3dArray object3DArray;
 object3DArray.print();


//BFS Solver -----------------------------------------------------------------------------------------------------
   RubiksCube3dArray cube;
   cube.print();

   vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
   for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
   cout << "\n";
   cube.print();

   BFSSolver<RubiksCube3dArray, Hash3d> bfsSolver(cube);
   vector<RubiksCube::MOVE> solve_moves = bfsSolver.solve();

   for(auto move: solve_moves) cout << cube.getMove(move) << " ";
   cout << "\n";
   bfsSolver.rubiksCube.print();


    return 0;
}