#include "content.h"

Environment::Environment(int *id, QString *name, QString *description, int *travelSpeed, Item *items, int *numItems, Event *events, int *eventProbs, int *numEvents, int* restrictions, int *numRestrictions) {
    this->id = id;
    this->name = name;
    this->description = description;
    this->travelSpeed = travelSpeed;
    this->items = items;
    this->numItems = numItems;
    this->events = events;
    this->eventProbs = eventProbs;
    this->numEvents = numEvents;
    this->restrictions = restrictions;
    this->numRestrictions = numRestrictions;
}

Environment::Environment()
{

}

Environment::~Environment() {
    delete id;
    delete name;
    delete description;
    delete travelSpeed;
    delete items;
    delete numItems;
    delete events;
    delete eventProbs;
    delete numEvents;
    delete restrictions;
    delete numRestrictions;
}
