#include <iostream>
#include <vector>
#include <string>
#include "z3.h"

class DAGEncoding{
    vector<char> uop;
    vector<char> bop;
    context c;
    solver sol;
    vector<Traces> traces;
    int depth;
    vector<int> listOfVars;

    public:
    DAGEncoding(vector<Traces> &tr, int d){
        char[] tmp1 = {'!', 'X'};
        char[] tmp2 = {'&', '|', 'R'};
        for (int i = 0; i < 2; i++){
            uop.push_back(tmp1[i]);
        }
        for (int i = 0; i < 3; i++){
            bop.push_back(tmp2[i]);
        }
        traces = tr;
        depth = d;
        sol = solver(c);
        for (int i = 0; i < traces.getNumVars(); i++){
            
        }
    }

}