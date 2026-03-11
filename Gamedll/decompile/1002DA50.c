/*
 * func-name: sub_1002DA50
 * func-address: 0x1002da50
 * callers: none
 * callees: none
 */

int __cdecl sub_1002DA50(int a1, const char *a2)
{
  int v2; // esi

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    while ( strcmp(*(const char **)v2, a2) )
    {
      v2 = *(_DWORD *)(v2 + 12);
      if ( !v2 )
        goto LABEL_4;
    }
    return (*(int (**)(void))(v2 + 4))();
  }
  else
  {
LABEL_4:
    PyErr_SetString(PyExc_NameError, "Unknown C global variable");
    return 0;
  }
}
