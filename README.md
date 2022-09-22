# Sorting Algorithm Visualiser (C & OpenGL) 📊
Basic sorting algorithm Visualiser I made as a first program to practise working with C 😎. Graphics are created using OpenGL. When creating this, simplicity was my only real goal - I wanted to keep the code simple, easy to read, whilst obviously providing a decent level of functionality.

<h3>Instructions:</h3>

Once you have specified your desired array size and contents, the OpenGL display window should open.

From here the following controls should be available to you:

- **S**: Begins bubble sort.
- **Q**: Begins quick sort.
- **Esc**: Exits out of the window.

<h3>Video Demonstration:</h3>

![SortingAlgorithmGif](https://user-images.githubusercontent.com/56947241/187013301-89e93cef-b51d-4881-b6e2-e258c810c753.gif)

<h3>Known Bugs:</h3>

- If the program sorts for too long, it will freeze and will only unfreeze once the sort has been completed. This problem only occured for me during testing on Windows, on Linux there were no issues during testing.

<h3>TODO:</h3>

- Implement more sorting algorithms. ✅ Added quick sort.
- On screen instructions.
- Provide more customizability.
- Scale the bars' Y axis relative to the window's resolution in order to prevent the bars from clipping beyond the window's boundaries.
- (Maybe) Add sound.
