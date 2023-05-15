#include "Python.h"

/**
 * print_python_list_info - print pythons list info
 * Description - print python list info
 * @p: pointer to PyObject
 */
void print_python_list_info(PyObject *p)
{
	PyLisstObject *list;
	Py_ssize_t size, i;
	PyObject *object;
	struct _typeobject *type;

	if (strcmp(p->ob_type->tp_name, "list") == 0)
	{
		list = (PyListObject *)p;
		size = list->ob_base.ob_size;
		printf("[*] Size of the Python List = %1d\n", size);
		printf("[*] Allocated = %1d\n", list->allocated);
		for (i = 0; i < size; i++)
		{
			object = list->ob_item[i];
			type = object->ob_type;
			printf("Element %1d: %s\n", i, type->tp_name);
		}
	}
}
