"""
    ModernGL Practice
    Jason Knoll
"""

import glfw
import moderngl as mgl


if not glfw.init():
    raise # this is an error i think lol

def main():
    window = glfw.create_window(640,320, "ModernGL", None, None)

    if not window:
        glfw.terminate()
        raise Exception("GLFW window could not be created.")

    glfw.make_context_current(window)

    ctx = mgl.create_context()

    ctx.viewport = (0, 0, 640, 320)

    while not glfw.window_should_close(window):
        ctx.clear(0.2, 0.3, 0.3, 1.0)

        glfw.swap_buffers(window)
        glfw.poll_events()

    glfw.terminate()


if (__name__ == '__main__'):
    main()
