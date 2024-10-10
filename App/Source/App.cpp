#include "Core/Core.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

/*
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods);
void cursor_position_callback(GLFWwindow* window, double xpos, double ypos); */


int main()
{
	glfwInit();
glfwInit();
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGl", NULL, NULL);
if (window == NULL) {
	std::cout << "Failed to create GLFW window" << std::endl;
	glfwTerminate();
	return -1;
}


glfwMakeContextCurrent(window);

GLenum err = glewInit();
if (err != GLEW_OK) {
    std::cout << "Error initializing GLEW" << std::endl;
    return -1;
}

glViewport(0, 0, 800, 600); 

/*
glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
glfwSetMouseButtonCallback(window, mouse_button_callback);
glfwSetCursorPosCallback(window, cursor_position_callback); */

while (!glfwWindowShouldClose(window)) {
	glfwSwapBuffers(window);
	glfwPollEvents();
}

glfwTerminate();
return 0; 
}