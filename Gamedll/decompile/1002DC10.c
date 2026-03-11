/*
 * func-name: sub_1002DC10
 * func-address: 0x1002dc10
 * callers: 0x1002e120, 0x1002e190, 0x1002e200, 0x1002e270, 0x1002e340, 0x1002e3c0, 0x1002e440, 0x1002e4d0, 0x1002e550, 0x1002e610, 0x1002e680, 0x1002e6f0, 0x1002e760, 0x1002e7d0, 0x1002e840, 0x1002e930, 0x1002ea00, 0x1002eab0, 0x1002eb90, 0x1002ec70, 0x1002ed30, 0x1002edc0, 0x1002ee50, 0x1002ef00, 0x1002efa0, 0x1002f040, 0x1002f0d0, 0x1002f160, 0x1002f1f0, 0x1002f250, 0x1002f2f0, 0x1002f360, 0x1002f400, 0x1002f4a0, 0x1002f540, 0x1002f5e0, 0x1002f700, 0x1002f800, 0x1002f870, 0x1002f8e0, 0x1002f950, 0x1002f9c0, 0x1002fa70, 0x1002faf0, 0x1002fba0, 0x1002fc40, 0x1002fd10, 0x1002fdf0, 0x1002feb0, 0x1002ff60, 0x10030030, 0x10030100, 0x10030180, 0x10030270, 0x10030330, 0x10030400, 0x10030470, 0x10030540, 0x10030620, 0x100306f0, 0x10030780, 0x10030870, 0x10030930, 0x10030a20, 0x10030ae0, 0x10030bc0, 0x10030c60, 0x10030d00, 0x10030d80, 0x10030e30
 * callees: 0x1002d8b0, 0x1002dbb0
 */

int __usercall sub_1002DC10@<eax>(_BYTE *a1@<eax>, _DWORD *a2@<ecx>, const char **a3, int a4)
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
  v9 = dword_103B4E98;
  if ( !dword_103B4E98 )
  {
    v9 = PyString_InternFromString("this");
    dword_103B4E98 = v9;
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
      v14 = sub_1002DBB0((char *)(v13 + 1), a1, 4);
      if ( v5 )
      {
        v12 = (*v4)-- == 1;
        if ( v12 )
          (*(void (__cdecl **)(_DWORD *))(v4[1] + 24))(v4);
      }
      if ( a3 )
      {
        v15 = sub_1002D8B0((int)a3, v14);
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
