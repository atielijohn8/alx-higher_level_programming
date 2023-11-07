#include <Python.h>

/**
 * print_python_list_info - function providing info for python list
 * 
 * @p: pointer to a PyObject
 *     print details about list
 *     iterates through elements
 */
void print_python_list_info(PyObject *p)
{
    if (!PyList_Check(p))
    {
        printf("[*] Invalid List Object\n");
        return;
    }

    int size = PyList_Size(p);
    int alloc = ((PyListObject *)p)->allocated;

    if (size < 0)
    {
        PyErr_Print();
        return;
    }

    printf("[*] Size of the Python List = %d\n", size);
    printf("[*] Allocated = %d\n", alloc);

    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i);

        PyObject *obj = PyList_GetItem(p, i);

        if (obj != NULL)
        {
            printf("%s\n", Py_TYPE(obj)->tp_name);
        }
        else
        {
            PyErr_Print();
        }
    }
}
