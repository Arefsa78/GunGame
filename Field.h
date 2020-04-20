//
// Created by aref on 4/20/20.
//

#ifndef GUNGAME_FIELD_H
#define GUNGAME_FIELD_H

#include <vector>

namespace gg {

    class Field {
    private:
        Shape *M_shape;

        std::vector<Object *> M_objects;
        std::vector<Player *> M_players;
        std::vector<Wall *> M_walls;
        std::vector<Bullet *> M_bullets;

    };

}

#endif //GUNGAME_FIELD_H
