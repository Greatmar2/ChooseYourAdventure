#include "content.h"

Event::Event(int *id, QString *name, QString *description, QString *actions, int *actionIDs, int *numActions, Result *results, int *numResults) {
    this->id = id;
    this->name = name;
    this->description = description;
    this->actions = actions;
    this->actionIDs = actionIDs;
    this->numActions = numActions;
    this->results = results;
    this->numResults = numResults;
}

Event::Event()
{

}

Event::~Event() {
    delete id;
    delete name;
    delete description;
    delete actions;
    delete actionIDs;
    delete numActions;
    delete results;
    delete numResults;
}
