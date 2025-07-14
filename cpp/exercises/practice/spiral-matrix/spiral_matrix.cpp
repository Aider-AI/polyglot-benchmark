#include "spiral_matrix.h"

namespace spiral_matrix {

     std::vector<std::vector<uint32_t>> spiral_matrix(uint32_t size) {
        std::vector<std::vector<uint32_t>> matrix(size, std::vector<uint32_t>(size, 0));

        if (size == 0)
            return matrix;

        uint32_t num = 1;
        int top = 0, bottom = size - 1;
        int left = 0, right = size - 1;

        while (top <= bottom && left <= right) {
            // move right
            for (int col = left; col <= right; ++col)
                matrix[top][col] = num++;
            ++top;

            // move down
            for (int row = top; row <= bottom; ++row)
                matrix[row][right] = num++;
            --right;

            // move left
            if (top <= bottom) {
                for (int col = right; col >= left; --col)
                    matrix[bottom][col] = num++;
                --bottom;
            }

            // move up
            if (left <= right) {
                for (int row = bottom; row >= top; --row)
                    matrix[row][left] = num++;
                ++left;
            }
        }

        return matrix;
    }

}  // namespace spiral_matrix
