#include "content.h"

Environment::Environment(int id, QString name, QString description, int travelSpeed, int* items, int* itemProbs, int numItems, int* events, int* eventProbs, int numEvents, int* restrictions, int numRestrictions) {
    this->id = id;
    this->name = name;
    this->description = description;
    this->travelSpeed = travelSpeed;
    this->items = items;
    this->itemProbs = itemProbs;
    this->numItems = numItems;
    this->events = events;
    this->eventProbs = eventProbs;
    this->numEvents = numEvents;
    this->restrictions = restrictions;
    this->numRestrictions = numRestrictions;
}

Environment::~Environment() {

}
