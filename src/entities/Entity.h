//
// Created by bdol on 12/26/17.
//

#ifndef OSGE_ENTITY_H
#define OSGE_ENTITY_H


class Entity {

public:
    Entity();

    int getID() const;

    void setDepth(int depth);
    int getDepth() const;

    void draw() const;


private:
    static int idPool;
    int id;
    int depth;

    void drawChildren() const;

};


#endif //OSGE_ENTITY_H
