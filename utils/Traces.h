class Trace{
    int lenOfTrace;
    /*0 - false
      1 - true
      2 - unknown
    */
    int intendedEvaluation;
    int numVars;
    vector<vector<bool> > trace;  //for now, we have traces containing only bool
    
    public:
    Trace(vector<vector<bool> > &trace_, int intendedEvaluation_){
        trace = trace_;
        intendedEvaluation = intendedEvaluation_;
        lenOfTrace = trace.size();
        numVars = trace[0].size();
    }

    int getNumVars(){
        return numVars;
    }

}

class ExperimentTraces{
    vector<Trace*> accepted;
    vector<Trace*> rejected;
    vector<Trace*> unknown;

    vector<char> operators;
    int depthSolution;

    public:
    ExperimentTraces(){
        char[] temp = {'!', '&', '|', 'R', 'X'};
        for (int i = 0; i < 5 ; i++){
            operators.push_back(temp[i]);
        }
    }

    ~ExperimentTraces(){
        for (int i = 0; i < accepted.size(); i++){
            delete accepted[i];
        }
        for (int i = 0; i < rejected.size(); i++){
            delete rejected[i];
        }
        for (int i = 0; i < unknown.size(); i++){
            delete unknown[i];
        }
    }

    void readTracesFromFile(string filename){
        
    }
}