#!/usr/bin/python3
"""Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """perimeter of the island described in grid
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    """

    row = len(grid)
    col = len(grid[0])
    perimeter = 0

    for x in range(row):
        for y in range(col):

            if grid[x][y] == 1:  

                """Top checker"""
                if x-1 == -1 or grid[x-1][y] == 0:
                    perimeter += 1

                """"Left checker"""
                if y-1 == -1 or grid[x][y-1] == 0:
                    perimeter += 1

                """Right checker"""
                if x == row or grid[x+1][y] == 0:
                    perimeter += 1

                """Bottom checker"""
                if y == col or grid[x][y+1] == 0:
                    perimeter += 1
    return (perimeter)
