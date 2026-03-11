/*
 * func-name: sub_1002C940
 * func-address: 0x1002c940
 * callers: 0x1002ce50, 0x1002d2f0
 * callees: 0x1002c660, 0x1002c8e0
 */

int __usercall sub_1002C940@<eax>(_BYTE *a1@<eax>, _DWORD *a2@<ecx>, const char **a3, int a4)
{
  _DWORD *v4; // ebx
  int v5; // ebp
  int v8; // eax
  int v9; // eax
  int Attr; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  char *v14; // esi
  int v15; // eax
  char *v16; // esi
  int (__cdecl *v17)(_DWORD); // eax

  v4 = a2;
  v5 = 0;
  if ( !a2 )
    return 0;
  if ( a2 == (_DWORD *)Py_NoneStruct )
  {
    *(_DWORD *)a1 = 0;
    return 0;
  }
  v8 = a2[1];
  if ( v8 == PyString_Type || PyType_IsSubtype(v8, PyString_Type) )
    goto LABEL_14;
  v9 = dword_103B4E74;
  if ( !dword_103B4E74 )
  {
    v9 = PyString_InternFromString("this");
    dword_103B4E74 = v9;
  }
  Attr = PyObject_GetAttr(v4, v9);
  v4 = (_DWORD *)Attr;
  v5 = 1;
  if ( !Attr )
    goto LABEL_27;
  v11 = *(_DWORD *)(Attr + 4);
  if ( v11 == PyString_Type || PyType_IsSubtype(v11, PyString_Type) )
  {
LABEL_14:
    v13 = PyString_AsString(v4);
    if ( *(_BYTE *)v13 == 95 )
    {
      v14 = sub_1002C8E0((char *)(v13 + 1), a1, 4);
      if ( v5 )
      {
        v12 = (*v4)-- == 1;
        if ( v12 )
          (*(void (__cdecl **)(_DWORD *))(v4[1] + 24))(v4);
      }
      if ( a3 )
      {
        v15 = sub_1002C660((int)a3, v14);
        if ( !v15 )
          goto LABEL_27;
        v17 = *(int (__cdecl **)(_DWORD))(v15 + 4);
        if ( v17 )
        {
          *(_DWORD *)a1 = v17(*(_DWORD *)a1);
          return 0;
        }
        *(_DWORD *)a1 = *(_DWORD *)a1;
      }
    }
    else
    {
      *(_DWORD *)a1 = 0;
      if ( strcmp((const char *)v13, "NULL") )
      {
        if ( !v5 )
          goto LABEL_27;
        v12 = (*v4)-- == 1;
        if ( !v12 )
          goto LABEL_27;
        goto LABEL_13;
      }
      if ( v5 )
      {
        v12 = (*v4)-- == 1;
        if ( v12 )
        {
          (*(void (__cdecl **)(_DWORD *))(v4[1] + 24))(v4);
          return 0;
        }
      }
    }
    return 0;
  }
  v12 = (*v4)-- == 1;
  if ( v12 )
LABEL_13:
    (*(void (__cdecl **)(_DWORD *))(v4[1] + 24))(v4);
LABEL_27:
  if ( a4 )
  {
    if ( a3 )
    {
      v16 = (char *)malloc(strlen(*a3) + 64);
      sprintf(v16, "Type error. Expected %s", *a3);
      PyErr_SetString(PyExc_TypeError, v16);
      free(v16);
      return -1;
    }
    PyErr_SetString(PyExc_TypeError, "Expected a pointer");
  }
  return -1;
}
