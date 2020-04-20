//
// Created by aref on 4/20/20.
//

#ifndef GUNGAME_OBJECT_H
#define GUNGAME_OBJECT_H

namespace gg {

    class Object {
    public:
        enum Type {
            PLAYER,
            WALL,
            BULLET
        };

    private:
        Type M_type;
        Shape* Shape;

        Vector2D M_pos;
        Vector2D M_vel;

    };

}

#endif //GUNGAME_OBJECT_H
