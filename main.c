#include <stdio.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <unistd.h>
#include <time.h>

int array_length = 0;
int array[10];
int windowX = 640;
int windowY = 480;
int bar_width = 30;
int bar_spacing = 4;
int padding = 20;

void visual(int *arr, int j);

void display() {
    visual(array, 0);
}

void visual(int *arr, int j) {
    int i;
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    for (i = 0; i <= array_length; i++) {
        if (i == j) {
            glColor3f(0.0f, 1.0f, 0.0f);
            glRecti(bar_width * i + padding,
                    padding,
                    bar_width * i + (bar_width - bar_spacing) + padding,
                    padding + (arr[i] * 10));
        } else {
            glColor3f(1.0f, 0.0f, 0.0f);
            glRecti(bar_width * i + padding,
                    padding,
                    bar_width * i + (bar_width - bar_spacing) + padding,
                    padding + (arr[i] * 10));
        }
    }
    usleep(20000);
    glFlush();
}


void bubble_sort() {
    int i, j, temp;

    for (i = 0; i <= array_length; i++) {
        for (j = 0; j < array_length - 1 - i; j++) {
            if (array[j + 1] < array[j]) // Flip operator to change between ascending and descending
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                visual(array, j + 1);
            }
        }
    }
}


void keyboardEvent(unsigned char c) {
    if (c == 115) //s
    {
        bubble_sort();
    } else if (c == 27) {
        exit(0);
    }
}

void generate_random_array() {
    int i;

    srand((unsigned) time(0));
    for (i = 0; i < array_length; i++) {
        array[i] = (0.07 * (rand() % 600));
    }
}

void gl_window_init(int argc, char **argv) {
    // gl window initialization
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(windowX, windowY);
    glutInitWindowPosition(0, 100);
    glutCreateWindow("OpenGL Sorting Algorithm Visualizer - Ross Williamson 2022");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboardEvent);
    gluOrtho2D(0, windowX, 0, windowY);

    glutMainLoop();
}

int main(int argc, char **argv) {

    int i;
    char user_choice;

    // Get Array length
    printf("\nEnter array length:\n");
    scanf("%d", &array_length);

    printf("Do you want to use a randomly generated array? (y/n): \n");
    scanf("%s", &user_choice);

    if (user_choice == 'y') {
        generate_random_array();
        gl_window_init(argc, argv);
    }

    if (user_choice == 'n') {
        // User enters elements manually
        printf("\nEnter in the array elements: \n");
        for (i = 0; i < array_length; i++) {
            scanf("%d", &array[i]);
        }
        gl_window_init(argc, argv);

    }
    return 0;
}
