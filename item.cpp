#include "content.h"

Item::Item(int *id, QString *name, QString *description, int* mass, QString *actions, int *actionIDs, int *numActions, Result *results, int *numResults) {
    this->id = id;
    this->name = name;
    this->description = description;
    this->mass = mass;
    this->actions = actions;
    this->actionIDs = actionIDs;
    this->numActions = numActions;
    this->results = results;
    this->numResults = numResults;
}

Item::Item()
{

}

Item::~Item() {
    delete id;
    delete name;
    delete description;
    delete mass;
    delete actions;
    delete actionIDs;
    delete numActions;
    delete results;
    delete numResults;
}
