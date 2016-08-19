#ifndef CONTENT_H
#define CONTENT_H

#include <QString>

class Result {
public:
    Result(QString* description, int* resultCause, int* resultProbability);
    virtual ~Result();

    QString* getDescription() { return description; }
    int* getResultCause() { return resultCause; }
    int* getResultProbability() { return resultProbability; }

private:
    QString* description; //String with the text to describe the outcome of the event. Can make use of @c for character name and @p for parent area/item/npc name.
    int* resultCause; //Integer correlating indicating the ID of action that would cause this result. 0 for no cause. Make integer negative to indicate whether the result chance is exhastive.
    int* resultProbability; //The probability of the result. The probabilities of all results with causes matching the actionID are added together. If non-exhaustive probabilities for an action (negative ActionID), ID 0 results are added to total too. Individual probabilities are compared to total. Only one result will occur.
};

class Event{
public:
    Event(int* id, QString* name, QString* description, QString* actions, int* actionIDs, int* numActions, Result* results, int* numResults);
    virtual ~Event();

    int* getID() { return id; }
    QString* getName() { return name; }
    QString* getDescription() { return description; }
    QString* getActions() { return actions; }
    int* getActionIDs() { return actionIDs; }
    int* getNumActions() { return numActions; }
    Result* getResults() { return results; }
    int* getNumResults() { return numResults; }

private:
    int* id;
    QString* name;
    QString* description;
    QString* actions;
    int* actionIDs; //Each action is assigned an ID for reference in Results. Start at 1.
    int* numActions;
    Result* results; //An array of possible results to the event
    int* numResults;
};

class Item {
public:
    Item(int* id, QString* name, QString* description, int* mass, QString* actions, int* actionIDs, int* numActions, Result* results, int* numResults);
    virtual ~Item();

    int* getID() { return id; }
    QString* getName() { return name; }
    QString* getDescription() { return description; }
    int* getMass() { return mass; }
    QString* getActions() { return actions; }
    int* getActionIDs() { return actionIDs; }
    int* getNumActions() { return numActions; }
    Result* getResults() { return results; }
    int* getNumResults() { return numResults; }

private:
    int* id;
    QString* name;
    QString* description;
    int* mass;
    QString* actions;
    int* actionIDs; //Each action is assigned an ID for reference in Results. Start at 1.
    int* numActions;
    Result* results; //An array of possible results to actions with the item.
    int* numResults;
};

class Race {
public:

private:
    int* id;
    QString* name; //The name of the race.
    QString* description; //A description of the race as a whole.
    int* reactions; //Integers indicating a modifier applied to NPC's attitude towards player when first encountered. Position in array corresponds to the race's ID.
    int* numReactions;
};

class Environment {

public:
    Environment(int* id, QString* name, QString* description, int* travelSpeed, Item* items = NULL, int* numItems = 0, Event* events = NULL, int* eventProbs = NULL, int* numEvents = 0, int* restrictions = 0, int* numRestrictions = 0);
    virtual ~Environment();

    int* getID() { return id; }
    QString* getName() { return name; }
    QString* getDescription() { return description; }
    int* getTravelSpeed() { return travelSpeed; }
    Item* getItems() { return items; }
    int* getNumItems() { return numItems; }
    Event* getEvents() { return events; }
    int* getEventProbs() { return eventProbs; }
    int* getNumEvents() { return numEvents; }
    int* getRestrictions() { return restrictions; }
    int* getNumRestrictions() { return numRestrictions; }


private:
    int* id; //ID of environment. Used when referred to in code.
    QString* name; //Name of environment. Will be displayed when environment is referenced in output.
    QString* description; //Description of the environment. Will be displayed when describe command is used.
    int* travelSpeed; //Integer describing the travel speed modifier out of 5.
    Item* items; //Array of IDs of items that can be found in environment.
    int* numItems; //Number of items in array. Default 0.
    Event* events; //Array of IDs of events that can randomly occur in environment.
    int* eventProbs; //Array of probabilities of events occuring each minute in area. Out of 10000. Note that individual areas may modify this. Same size as items.
    int* numEvents; //Number of events in array. Default 0.
    int* restrictions; //Array containing all the restrictions that to travel in this area. See enum posRestrictions. Default 0.
    int* numRestrictions; //Integer descibing the number of items in the restrictions array. Default 0.
};

class Area {

public:
    Area(int* id, QString* name, QString* description, int* environment, int* travelSpeed, Item* items = NULL, int* numItems = 0, Event* events = NULL, int* eventProbs = NULL, int* numEvents = 0, int* restrictions = 0, int* numRestrictions = 0);
    virtual ~Area();

    int* getID() { return id; }
    QString* getName() { return name; }
    QString* getDescription() { return description; }
    int* getEnvironment() { return environment; }
    int* getTravelSpeed() { return travelSpeed; }
    Item* getItems() { return items; }
    int* getNumItems() { return numItems; }
    Event* getEvents() { return events; }
    int* getEventProbs() { return eventProbs; }
    int* getNumEvents() { return numEvents; }
    int* getRestrictions() { return restrictions; }
    int* getNumRestrictions() { return numRestrictions; }


private:
    int* id;
    QString* name;
    QString* description;
    int* environment;
    int* travelSpeed;
    Item* items;
    int* numItems;
    Event* events;
    int* eventProbs; //Array of probabilities of events occuring each minute in area. Out of 10000. Note that individual areas may modify this. Same size as items.
    int* numEvents;
    int* restrictions;
    int* numRestrictions;
};

class NPC {
public:
    NPC(int* id, QString* name, QString* description, int* attitude, int* raceID, char* gender, QString* actions, int* actionIDs, int* numActions, Event* events, int* eventProbs, int* numEvents, Result* results, int* numResults);
    virtual ~NPC();

    int* getID() { return id; }
    QString* getName() { return name; }
    QString* getDescription() { return description; }
    int* getAttitude() { return attitude; }
    int* getRaceID() { return raceID; }
    char* getGender() { return gender; }
    QString* getActions() { return actions; }
    int* getActionIDs() { return actionIDs; }
    int* getNumActions() { return numActions; }
    Event* getEvents() { return events; }
    int* getEventProbs() { return eventProbs; }
    int* getNumEvents() { return numEvents; }
    Result* getResults() { return results; }
    int* getNumResults() { return numResults; }

private:
    int* id;
    QString* name;
    QString* description;
    int* attitude; //NPC's attitude towards player. Higher number is better. Max 20.
    int* raceID; //ID of character's race
    char* gender; //Char indicating character's gender. Will be used when referencing character. 'M' (he, him, his), 'F' (she, her, hers), 'N' (they, them, theirs) or 'O' (it, its, its).
    QString* actions;
    int* actionIDs;
    int* numActions;
    Event* events;
    int* eventProbs;
    int* numEvents;
    Result* results; //Can be used for results or dialogue. In the case of dialogue, merely make the result description the dialogue that the character says.
    int* numResults;
};

#endif // CONTENT_H
