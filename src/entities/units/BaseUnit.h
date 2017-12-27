//
// Created by bdol on 12/26/17.
//

#ifndef OSGE_BASEUNIT_H
#define OSGE_BASEUNIT_H


class BaseUnit {
public:
    BaseUnit();

    void draw();

    int getDepthLevel() const;
    void setDepthLevel(int depthLevel);

    int getID();

private:
    static int idPool;

    int depthLevel;
    int id;
};


#endif //OSGE_BASEUNIT_H
