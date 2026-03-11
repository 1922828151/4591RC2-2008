/*
 * func-name: sub_1002DAC0
 * func-address: 0x1002dac0
 * callers: none
 * callees: none
 */

int __cdecl sub_1002DAC0(int a1, const char *a2, int a3)
{
  int v3; // esi

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    while ( strcmp(*(const char **)v3, a2) )
    {
      v3 = *(_DWORD *)(v3 + 12);
      if ( !v3 )
        goto LABEL_4;
    }
    return (*(int (__cdecl **)(int))(v3 + 8))(a3);
  }
  else
  {
LABEL_4:
    PyErr_SetString(PyExc_NameError, "Unknown C global variable");
    return 1;
  }
}
