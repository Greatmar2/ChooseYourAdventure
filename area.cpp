#include "content.h"

Area::Area(int id, QString name, QString description, int travelSpeed, int* items, int* itemProbs, int numItems, int* events, int* eventProbs, int numEvents, int* restrictions, int numRestrictions) {
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

Area::~Area() {
    delete &id;
    delete &name;
    delete &description;
    delete &travelSpeed;
    delete items;
    delete itemProbs;
    delete &numItems;
    delete events;
    delete eventProbs;
    delete &numEvents;
    delete restrictions;
    delete &numRestrictions;
}
