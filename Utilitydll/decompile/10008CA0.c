/*
 * func-name: sub_10008CA0
 * func-address: 0x10008ca0
 * callers: 0x100086c0, 0x10008950
 * callees: 0x10018cf2
 */

_DWORD *__stdcall sub_10008CA0(int a1, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v4; // ebx
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = *a4;
  if ( a4 != *(_DWORD ***)(a1 + 4) )
  {
    *a4[1] = v4;
    (*a4)[1] = a4[1];
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
