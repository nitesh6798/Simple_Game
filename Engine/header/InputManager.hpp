#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <unordered_map>
#include <glm/glm.hpp>

#define GLM_ENABLE_EXPERIMENTAL
namespace Engine{

class InputManager{
    public:
        InputManager();
        ~InputManager();

        void pressKey(unsigned int keyID);
        void releaseKey(unsigned int keyID);

        void setMouseCoords(float x,float y);

        bool isKeyPressed(unsigned int keyID);

        glm::vec2 getMouseCoords() { return mouseCoords; }
    private:
        std::unordered_map<unsigned int,bool> keyMap;
        glm::vec2 mouseCoords;
};

}

#endif