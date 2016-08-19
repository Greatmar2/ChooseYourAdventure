#include "content.h"

Result::Result(QString *description, int *resultCause, int *resultProbability) {
    this->description = description;
    this->resultCause = resultCause;
    this->resultProbability = resultProbability;
}

Result::~Result() {
    delete description;
    delete resultCause;
    delete resultProbability;
}
