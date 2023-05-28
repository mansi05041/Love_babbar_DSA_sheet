# [Flood Fill](https://leetcode.com/problems/flood-fill/)

## Table of contents

- [Question](#question)
- [Algorithm](#algorithm)

## Question
An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.</br>
You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].
</br>
To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

## Algorithm
- Check if the starting pixel already has the new color, in which case, return the image as it is.
- Store the color of the starting pixel as the oldColor.
- Call the dfs function with the image, starting row, starting column, oldColor and newColor.
- In dfs function:
    - if the current pixel is out of bound or if its color is different from the oldColor return.
    - set the color of current pixel to the newColor.
    - Recursively call dfs for the neighboring pixels in four directions: up, down, left and right.
- Finally return the modified image.

Time complexity: O(n) </br>
Space complexity: O(n)

