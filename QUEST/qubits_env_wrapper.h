/** @file
Specifications for QUEST library functions whose implementation depends on environment (local, MPI)
*/

void initQUESTEnv(QUESTEnv *env);

void closeQUESTEnv(QUESTEnv env);

void syncQUESTEnv(QUESTEnv env);

double calcTotalProbability(MultiQubit multiQubit);

void rotateQubit(MultiQubit multiQubit, const int rotQubit, Complex alpha, Complex beta);

double findProbabilityOfZero(MultiQubit multiQubit, const int measureQubit);
