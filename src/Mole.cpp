#include "../inc/mole.hpp"

Mole::Mole(Vector2 _pos, const char* ImagePath, int _speed_x, int _speed_y, float scale) {
    pos = _pos;
    speed_x = _speed_x;
    speed_y = _speed_y;

    Image img = LoadImage(ImagePath);
    ImageResize(&img, img.width * scale, img.height * scale);
    text = LoadTextureFromImage(img);
    UnloadImage(img);
}

Mole::~Mole() {
    UnloadTexture(text);
}

void Mole::Draw() {
    DrawTexture(text, pos.x, pos.y, WHITE);
}

void Mole::Update() {
    if (IsKeyDown(KEY_D)) {
        pos.x += speed_x;
    } else if (IsKeyDown((KEY_A))) {
        pos.x -= speed_x;
    }

    if (IsKeyDown(KEY_S)) {
        pos.y += speed_y;
    } else if (IsKeyDown(KEY_W)) {
        pos.y -= speed_y;
    }
}