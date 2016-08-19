#include "content.h"

NPC::NPC(int *id, QString *name, QString *description, int *attitude, int *raceID, char *gender, QString *actions, int *actionIDs, int *numActions, int *events, int *eventProbs, int *numEvents, Result *results, int *numResults) {
    this->id = id;
    this->name = name;
    this->description = description;
    this->attitude = attitude;
    this->raceID = raceID;
    this->gender = gender;
    this->actions = actions;
    this->actionIDs = actionIDs;
    this->numActions = numActions;
    this->events = events;
    this->eventProbs = eventProbs;
    this->numEvents = numEvents;
    this->results = results;
    this->numResults = numResults;
}

NPC::~NPC() {
    delete id;
    delete name;
    delete description;
    delete attitude;
    delete raceID;
    delete gender;
    delete actions;
    delete actionIDs;
    delete numActions;
    delete events;
    delete eventProbs;
    delete numEvents;
    delete results;
    delete numResults;
}
