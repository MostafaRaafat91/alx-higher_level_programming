#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    # Iterate over each row of the matrix
    for line in matrix:
        # Iterate over each element in the row
        for col in range(len(line)):
            # Print the element with a space separator
            print(
                    "{:d}".format(line[col]),
                    end="" if col == len(line) - 1 else " ")
        # Print a newline character after each row
        print("")
