#ifndef CAMERA_H
#define CAMERA_H

#include <glm\glm.hpp>

class Camera
{
	public:
		Camera() : m_position(), m_right(glm::vec3(1.0, 0.0f, 0.0f)), m_up(glm::vec3(0.0, 1.0f, 0.0f)), m_look(glm::vec3(0.0, 0.0f, 1.0f)), m_viewMatrix() {}

		// Movement functions
		void walk(float units);
		void strafe(float units);
		void fly(float units);

		// Orientation functions
		void pitch(float units);
		void yaw(float units);
		void roll(float units);

		void calculateViewMatrix();
		glm::mat4 getViewMatrix() { return m_viewMatrix; }

	private:
		void makeOthogonal();

		glm::vec3 m_position;
		glm::vec3 m_right;
		glm::vec3 m_up;
		glm::vec3 m_look;
		glm::mat4 m_viewMatrix;
};
#endif