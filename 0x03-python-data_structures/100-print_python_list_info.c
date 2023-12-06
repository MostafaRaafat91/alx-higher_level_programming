#include <Python.h>

void print_python_list_info(PyObject *py_object) {
    Py_ssize_t list_size = PyList_Size(py_object);
    printf("[*] Size of the Python List = %ld\n", list_size);

    Py_ssize_t allocated = ((PyListObject *)py_object)->allocated;
    printf("[*] Allocated = %ld\n", allocated);

    for (Py_ssize_t i = 0; i < list_size; ++i) {
        PyObject *item = PyList_GetItem(py_object, i);
        PyObject *item_type = Py_TYPE(item);
        const char *type_name = item_type->tp_name;
        printf("Element %ld: %s\n", i, type_name);
    }
}
