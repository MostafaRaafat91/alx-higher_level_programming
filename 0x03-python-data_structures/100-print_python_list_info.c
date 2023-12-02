#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints python list info
 *
 * @p: PyObject
 * Return: no return
 */
void print_python_list_info(PyObject *p)
{
    long int size, i;
    PyListObject *list;
    PyObject *item;

    // Get the size of the Python list
    size = Py_SIZE(p);
    printf("[*] Size of the Python List = %ld\n", size);

    // Get the amount of memory allocated for the list
    list = (PyListObject *)p;
    printf("[*] Allocated = %ld\n", list->allocated);

    // Iterate over each element in the list and print the type of each element
    for (i = 0; i < size; i++)
    {
        item = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
    }
}
