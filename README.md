# Rush01
Solving SkyCrapper's problem. Which has a 4x4 matrix to be filled based on numbers provided.

The problem:

Given the numbers provided, find a sequence of "boxes" of 4 different sizes, so that one box is bigger than another. So if we have a 3 for example, the visible boxes can be sizes 4, 3 and 1 for example.
We cannot repeat numbers within each row or column. And the rest is fun.

![Screen Shot 2021-06-13 at 22 25 37](https://user-images.githubusercontent.com/54086765/121833792-79cac700-cca3-11eb-9901-b8de8d514523.png)



My approach was to think of this game from 4 different points of view. From the bottom, left, right, and finally, by the view from the top side.

Once looking in that direction, imagine filling in the squares, one column at a time.
So, when you run out of possibilities in this view, simply rotate the matrix to now, position yourself from another point of view.

![skyCrappers](https://user-images.githubusercontent.com/54086765/121835492-cf08d780-cca7-11eb-9660-0b4b61396b49.jpg) 

boxes seen from above



![pov](https://user-images.githubusercontent.com/54086765/121835514-da5c0300-cca7-11eb-9221-9699d4f5cc83.jpg)

front point of view boxes (down)



![right pov](https://user-images.githubusercontent.com/54086765/121835518-ddef8a00-cca7-11eb-8f00-7450c23bafd4.jpg)

right point of view boxes (right)



Then, once exhausted the possibilities of positioning the boxes seen from this point of view. Just rotate your "board" to open 4 more rows of possibilities.

![skyCrappers-right-pov](https://user-images.githubusercontent.com/54086765/121836120-412dec00-cca9-11eb-979c-04b21dc3fe24.jpg)

rotated board. now you see from right pov.



And so, little by little, it goes around and around, around and around. Until in a few turns, your puzzle is solved.
