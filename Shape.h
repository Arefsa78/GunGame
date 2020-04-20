//
// Created by aref on 4/20/20.
//

#ifndef GUNGAME_SHAPE_H
#define GUNGAME_SHAPE_H

namespace gg {


    class Shape {
    public:
        enum Type {
            RECTANGLE,
            TRIANGLE,
            CIRCLE
        };

    private:
        Type M_type;

    };

}

#endif //GUNGAME_SHAPE_H
