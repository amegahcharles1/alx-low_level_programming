#!/usr/bin/python3
"""
Defins the island_perimeter function
that returns the perimeter of an iland
(described as an array of integers)
"""


def island_perimeter(grid):
    """
        Argument
          @grid is a list of list of integers:
            *0 represents a water zone
            *1 represents a land zone
            *One cell is a square with side length 1
            *Grid cells are connected horizontally/vertically
             (not diagonally).
            *Grid is rectangular, width and height don’t exceed
             100
            *Grid is completely surrounded by water, and there is
             one island (or nothing).
            *The island doesn’t have “lakes” (water inside that
             isn’t connected to the water around the island).
        Returns
           the perimeter of the island described in grid:
    """

    pmeter = 0
    width = len(grid[0])
    height = len(grid)

    # first suround the lake with water to make calculations simple
    grid.insert(0, [0 for x in range(width)])
    grid.append([0 for x in range(width)])
    for row in range(height + 2):
            grid[row].append(0)
            grid[row].insert(0, 0)

    for row in range(1, height + 1):
        for col in range(1, width + 1):
            if grid[row][col] == 1:
                # check if the box is near to the lake
                if grid[row][col - 1] == 0:
                    pmeter += 1
                if grid[row][col + 1] == 0:
                    pmeter += 1

                if grid[row - 1][col] == 0:
                    pmeter += 1

                if grid[row + 1][col] == 0:
                    pmeter += 1

    return pmeter
