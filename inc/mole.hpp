#ifndef MOLE_H_
#define MOLE_H_

#include "raylib.h"

class Mole {
    private:
        Texture2D text;
        Vector2 pos;
        int speed_x, speed_y;
    public:
        Mole(Vector2 _pos, const char* ImagePath, int _speed_x, int _speed_y, float scale);
        ~Mole();

        void Draw();
        void Update();
        bool IsAlive();
};


#endif //MOLE_H_