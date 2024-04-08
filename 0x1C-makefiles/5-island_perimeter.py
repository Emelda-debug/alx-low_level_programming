#!/usr/bin/python3
""" Function that measures perimeter of an island."""


def island_perimeter(grid):
    """Return the perimiter of an island described in grid.

    The grid represents water (0) and land (1)

    Args:
        grid: A list of list of integers
    Returns:
        The perimeter of the island described in grid.
    """
    width = len(grid[0])
    height = len(grid)
    side1 = 0
    side2 = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                side2 += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    side1 += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    side1 += 1
    return side2 * 4 - side1 * 2
