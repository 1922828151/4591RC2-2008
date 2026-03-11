/*
 * func-name: sub_10119160
 * func-address: 0x10119160
 * callers: 0x10118d20, 0x10118dc0, 0x10118ff0, 0x10119d20
 * callees: none
 */

char *sub_10119160()
{
  _DWORD *v0; // esi
  _DWORD *v1; // ebp
  _DWORD *v2; // ebx
  const char *v3; // eax
  char *v4; // eax
  char *v5; // edi
  bool v6; // zf
  int AttrString; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const char *v12; // eax
  _DWORD *v13; // [esp+14h] [ebp-1Ch]
  _DWORD *v14; // [esp+18h] [ebp-18h]
  _DWORD *v15; // [esp+1Ch] [ebp-14h]
  _DWORD *v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+24h] [ebp-Ch] BYREF
  int v18; // [esp+28h] [ebp-8h] BYREF
  int v19; // [esp+2Ch] [ebp-4h] BYREF

  v0 = 0;
  v13 = 0;
  v1 = 0;
  v14 = 0;
  v16 = 0;
  v2 = 0;
  PyErr_Fetch(&v19, &v18, &v17);
  v15 = (_DWORD *)PyImport_ImportModule("StringIO");
  if ( v15 )
  {
    v13 = (_DWORD *)PyImport_ImportModule("traceback");
    if ( v13 )
    {
      AttrString = PyObject_GetAttrString(v15, "StringIO");
      v0 = (_DWORD *)AttrString;
      if ( AttrString )
      {
        v1 = (_DWORD *)PyObject_CallObject(AttrString, 0);
        if ( v1 )
        {
          v14 = (_DWORD *)PyObject_GetAttrString(v13, "print_exception");
          if ( v14 )
          {
            v9 = Py_BuildValue("OOOOO");
            v16 = (_DWORD *)v9;
            if ( v9 )
            {
              v2 = (_DWORD *)PyObject_CallObject(v14, v9);
              if ( v2 )
              {
                v6 = (*v0)-- == 1;
                if ( v6 )
                  (*(void (__cdecl **)(_DWORD *))(v0[1] + 24))(v0);
                v0 = (_DWORD *)PyObject_GetAttrString(v1, "getvalue");
                if ( v0 )
                {
                  v6 = (*v2)-- == 1;
                  if ( v6 )
                    (*(void (__cdecl **)(_DWORD *))(v2[1] + 24))(v2);
                  v10 = PyObject_CallObject(v0, 0);
                  v2 = (_DWORD *)v10;
                  if ( v10 )
                  {
                    v11 = *(_DWORD *)(v10 + 4);
                    if ( v11 == PyString_Type || PyType_IsSubtype(v11, PyString_Type) )
                    {
                      v12 = (const char *)PyString_AsString(v2);
                      v4 = strdup(v12);
                      goto LABEL_4;
                    }
                    v3 = "Python had no useful info on this error (getvalue() did not return a string)";
                  }
                  else
                  {
                    v3 = "Python had no useful info on this error (getvalue() failed.)";
                  }
                }
                else
                {
                  v3 = "Python had no useful info on this error (cant find getvalue function)";
                }
              }
              else
              {
                v3 = "Python had no useful info on this error (traceback.print_exception() failed)";
              }
            }
            else
            {
              v3 = "Python had no useful info on this error (cant make print_exception arguments)";
            }
          }
          else
          {
            v3 = "Python had no useful info on this error (cant find traceback.print_exception)";
          }
        }
        else
        {
          v3 = "Python had no useful info on this error (StringIO.StringIO() failed)";
        }
      }
      else
      {
        v3 = "Python had no useful info on this error (cant find cStringIO.StringIO)";
      }
    }
    else
    {
      v3 = "Python had no useful info on this error (cant import traceback)";
    }
  }
  else
  {
    v3 = "Python had no useful info on this error (cant import cStringIO)";
  }
  v4 = strdup(v3);
LABEL_4:
  v5 = v4;
  if ( v15 )
  {
    v6 = (*v15)-- == 1;
    if ( v6 )
      (*(void (__cdecl **)(_DWORD *))(v15[1] + 24))(v15);
  }
  if ( v13 )
  {
    v6 = (*v13)-- == 1;
    if ( v6 )
      (*(void (__cdecl **)(_DWORD *))(v13[1] + 24))(v13);
  }
  if ( v0 )
  {
    v6 = (*v0)-- == 1;
    if ( v6 )
      (*(void (__cdecl **)(_DWORD *))(v0[1] + 24))(v0);
  }
  if ( v1 )
  {
    v6 = (*v1)-- == 1;
    if ( v6 )
      (*(void (__cdecl **)(_DWORD *))(v1[1] + 24))(v1);
  }
  if ( v14 )
  {
    v6 = (*v14)-- == 1;
    if ( v6 )
      (*(void (__cdecl **)(_DWORD *))(v14[1] + 24))(v14);
  }
  if ( v16 )
  {
    v6 = (*v16)-- == 1;
    if ( v6 )
      (*(void (__cdecl **)(_DWORD *))(v16[1] + 24))(v16);
  }
  if ( v2 )
  {
    v6 = (*v2)-- == 1;
    if ( v6 )
      (*(void (__cdecl **)(_DWORD *))(v2[1] + 24))(v2);
  }
  PyErr_Restore(v19, v18, v17);
  return v5;
}
