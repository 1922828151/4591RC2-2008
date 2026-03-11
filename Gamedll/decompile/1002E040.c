/*
 * func-name: sub_1002E040
 * func-address: 0x1002e040
 * callers: 0x10030f00
 * callees: 0x1002de00, 0x1002dfb0
 */

void __cdecl sub_1002E040(int a1, int a2)
{
  int v2; // edi
  int i; // ebx
  int v4; // eax
  _DWORD *v5; // esi

  v2 = a2;
  for ( i = 0; *(_DWORD *)v2; v2 = 32 * i + a2 )
  {
    switch ( *(_DWORD *)v2 )
    {
      case 1:
        v4 = PyInt_FromLong(*(_DWORD *)(v2 + 8));
        goto LABEL_8;
      case 2:
        v4 = PyFloat_FromDouble(
               COERCE_UNSIGNED_INT64(*(double *)(v2 + 16)),
               HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v2 + 16))));
        goto LABEL_8;
      case 3:
        v4 = PyString_FromString(*(_DWORD *)(v2 + 24));
        goto LABEL_8;
      case 4:
        v4 = sub_1002DE00(*(_DWORD *)(v2 + 24), **(_DWORD **)(v2 + 28), 0);
        goto LABEL_8;
      case 5:
        v4 = sub_1002DFB0(*(char **)(v2 + 24), *(_DWORD *)(v2 + 8), **(const char ****)(v2 + 28));
LABEL_8:
        v5 = (_DWORD *)v4;
        if ( v4 )
        {
          PyDict_SetItemString(a1, *(_DWORD *)(v2 + 4), v4);
          if ( (*v5)-- == 1 )
            (*(void (__cdecl **)(_DWORD *))(v5[1] + 24))(v5);
        }
        break;
      default:
        break;
    }
    ++i;
  }
}
