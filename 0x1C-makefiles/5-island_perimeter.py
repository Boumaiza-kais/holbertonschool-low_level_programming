#!/usr/bin/python3


def island_perimeter(grid):
    """Create a function def island_perimeter(grid): that returns
    the perimeter of the island described in grid"""
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x + 1 == len(grid) or grid[x + 1][y] == 0:
                    perimeter += 1
                if y + 1 == len(grid[0]) or grid[x][y + 1] == 0:
                    perimeter += 1
                if x - 1 == -1 or grid[x - 1][y] == 0:
                    perimeter += 1
                if y - 1 == -1 or grid[x][y - 1] == 0:
                    perimeter += 1
    return(perimeter)
