#include <iostream>
#include <GLFW/glfw3.h>

int main(int argc, char** argv)
{
    if ( !glfwInit() )
        return 1;

    GLFWwindow* myWindow = glfwCreateWindow(1920, 1080, "SCP: Containment Breach  -  C++ Port", nullptr, nullptr);
    if ( !myWindow )
        return 1;


    while ( !glfwWindowShouldClose(myWindow) )
    {
        glfwPollEvents();
        glClear()
    }


    glfwDestroyWindow(myWindow);
    glfwTerminate();
    return 0;
}