#include "content.h"

Area::Area(int *id, QString *name, QString *description, int *environment, int *travelSpeed, Item *items, int *numItems, Event *events, int *numEvents, int* restrictions, int *numRestrictions) {
    this->id = id;
    this->name = name;
    this->description = description;
    this->environment = environment;
    this->travelSpeed = travelSpeed;
    this->items = items;
    this->numItems = numItems;
    this->events = events;
    this->numEvents = numEvents;
    this->restrictions = restrictions;
    this->numRestrictions = numRestrictions;
}

Area::~Area() {
    delete id;
    delete name;
    delete description;
    delete environment;
    delete travelSpeed;
    delete items;
    delete numItems;
    delete events;
    delete numEvents;
    delete restrictions;
    delete numRestrictions;
}
