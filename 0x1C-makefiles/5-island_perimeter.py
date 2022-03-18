#!/usr/bin/python3
""" module that defines the function island_perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    perimeter = 0
    for i in range(len(grid)):
        for n in range(len(grid[i])):
            if grid[i][n] == 1:
                perimeter += 4
                if grid[i][n - 1] == 1:
                    perimeter -= 1
                if grid[i][n + 1] == 1:
                    perimeter -= 1
                if grid[i + 1][n] == 1:
                    perimeter -= 1
                if grid[i - 1][n] == 1:
                    perimeter -= 1
    return perimeter
