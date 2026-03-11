/*
 * func-name: sub_1002CB30
 * func-address: 0x1002cb30
 * callers: 0x1002cd70, 0x1002ce50
 * callees: 0x102c9d62
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_1002CB30(int a1, int a2, int a3)
{
  int result; // eax
  char v4; // dl
  char v5; // dl
  char v6; // al
  char *v7; // eax
  int v8; // edx
  char v9; // cl
  _DWORD *v10; // esi
  int v11; // eax
  bool v12; // zf
  _DWORD *v13; // edi
  int v14; // eax
  _DWORD *v15; // edi
  _BYTE v16[9]; // [esp+4h] [ebp-204h] BYREF
  _BYTE v17[503]; // [esp+Dh] [ebp-1FBh] BYREF

  if ( a1 )
  {
    v16[2] = byte_103AC938[a1 & 0xF];
    v4 = byte_103AC938[(unsigned __int8)a1 >> 4];
    v16[4] = byte_103AC938[BYTE1(a1) & 0xF];
    v16[1] = v4;
    v5 = byte_103AC938[BYTE1(a1) >> 4];
    v16[6] = byte_103AC938[BYTE2(a1) & 0xF];
    v16[3] = v5;
    v6 = byte_103AC938[HIBYTE(a1) & 0xF];
    v16[5] = byte_103AC938[BYTE2(a1) >> 4];
    v16[7] = byte_103AC938[HIBYTE(a1) >> 4];
    v16[8] = v6;
    v7 = *(char **)a2;
    v16[0] = 95;
    v8 = v17 - v7;
    do
    {
      v9 = *v7;
      v7[v8] = *v7;
      ++v7;
    }
    while ( v9 );
    result = PyString_FromString(v16);
    v10 = (_DWORD *)result;
    if ( result && result != Py_NoneStruct )
    {
      if ( *(_DWORD *)(a2 + 20) )
      {
        v11 = Py_BuildValue("(O)", result);
        v12 = (*v10)-- == 1;
        v13 = (_DWORD *)v11;
        if ( v12 )
          (*(void (__cdecl **)(_DWORD *))(v10[1] + 24))(v10);
        v14 = PyObject_CallObject(*(_DWORD *)(a2 + 20), v13);
        v12 = (*v13)-- == 1;
        v10 = (_DWORD *)v14;
        if ( v12 )
          (*(void (__cdecl **)(_DWORD *))(v13[1] + 24))(v13);
        if ( a3 )
        {
          v15 = (_DWORD *)PyInt_FromLong(1);
          PyObject_SetAttrString(v10, "thisown", v15);
          v12 = (*v15)-- == 1;
          if ( v12 )
            (*(void (__cdecl **)(_DWORD *))(v15[1] + 24))(v15);
        }
      }
      return (int)v10;
    }
  }
  else
  {
    return ++Py_NoneStruct;
  }
  return result;
}
