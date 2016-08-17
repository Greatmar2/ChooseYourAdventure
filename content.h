#ifndef CONTENT_H
#define CONTENT_H

#include <QString>

class Environment {

public:
    Environment(int id, QString name, QString description, int travelSpeed, int* items, int* itemProbs, int numItems, int* events, int* eventProbs, int numEvents, int* restrictions, int numRestrictions);//(int id, QString name, QString description, int travelSpeed, int* items[50] = {0}, int* itemProbs[50] = {0}, int numItems = 0, int* events[50] = {0}, int* eventProbs[50] = {0}, int numEvents = 0, int* restrictions[20] = {0}, int numRestrictions = 0);
    virtual ~Environment();

    int getID() { return id; }
    QString getName() { return name; }
    QString getDescription() { return description; }
    int getTravelSpeed() { return travelSpeed; }
    int* getItems() { return items; }
    int* getItemProbs() { return itemProbs; }
    int getNumItems() { return numItems; }
    int* getEvents() { return events; }
    int* getEventProbs() { return eventProbs; }
    int getNumEvents() { return numEvents; }
    int* getRestrictions() { return restrictions; }
    int getNumRestrictions() { return numRestrictions; }


private:
    int id; //ID of environment. Used when referred to in code.
    QString name; //Name of environment. Will be displayed when environment is referenced in output.
    QString description; //Description of the environment. Will be displayed when describe command is used.
    int travelSpeed; //Integer describing the travel speed modifier out of 5.
    int* items; //Array of IDs of items that can be found in environment.
    int* itemProbs; //Array of probabilities of finding items in area. Out of 10000. Note that individual areas may modify this. Same size as items.
    int numItems; //Number of items in array. Default 0.
    int* events; //Array of IDs of events that can randomly occur in environment.
    int* eventProbs; //Array of probabilities of events occuring each minute in area. Out of 10000. Note that individual areas may modify this. Same size as items.
    int numEvents; //Number of events in array. Default 0.
    int* restrictions; //Array containing all the restrictions that to travel in this area. See enum posRestrictions. Default 0.
    int numRestrictions; //Integer descibing the number of items in the restrictions array. Default 0.
};

class Area {

public:
    Area(int id, QString name, QString description, int travelSpeed, int* items, int* itemProbs, int numItems, int* events, int* eventProbs, int numEvents, int* restrictions, int numRestrictions);//(int id, QString name, QString description, int travelSpeed, int* items[50] = {0}, int* itemProbs[50] = {0}, int numItems = 0, int* events[50] = {0}, int* eventProbs[50] = {0}, int numEvents = 0, int* restrictions[20] = {0}, int numRestrictions = 0);
    virtual ~Area();

    int getID() { return id; }
    QString getName() { return name; }
    QString getDescription() { return description; }
    int getTravelSpeed() { return travelSpeed; }
    int* getItems() { return items; }
    int* getItemProbs() { return itemProbs; }
    int getNumItems() { return numItems; }
    int* getEvents() { return events; }
    int* getEventProbs() { return eventProbs; }
    int getNumEvents() { return numEvents; }
    int* getRestrictions() { return restrictions; }
    int getNumRestrictions() { return numRestrictions; }


private:
    int id; //ID of environment. Used when referred to in code.
    QString name; //Name of environment. Will be displayed when environment is referenced in output.
    QString description; //Description of the environment. Will be displayed when describe command is used.
    int travelSpeed; //Integer describing the travel speed modifier out of 5.
    int* items; //Array of IDs of items that can be found in environment.
    int* itemProbs; //Array of probabilities of finding items in area. Out of 10000. Note that individual areas may modify this. Same size as items.
    int numItems; //Number of items in array. Default 0.
    int* events; //Array of IDs of events that can randomly occur in environment.
    int* eventProbs; //Array of probabilities of events occuring each minute in area. Out of 10000. Note that individual areas may modify this. Same size as items.
    int numEvents; //Number of events in array. Default 0.
    int* restrictions; //Array containing all the restrictions that to travel in this area. See enum posRestrictions. Default 0.
    int numRestrictions; //Integer descibing the number of items in the restrictions array. Default 0.
};

#endif // CONTENT_H
