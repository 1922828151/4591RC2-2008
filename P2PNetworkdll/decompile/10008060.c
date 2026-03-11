/*
 * func-name: sub_10008060
 * func-address: 0x10008060
 * callers: 0x10009e90
 * callees: 0x100046c0, 0x10023306
 */

_DWORD *__stdcall sub_10008060(int a1, _DWORD *a2, int a3, _DWORD **a4)
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
    sub_100046C0((int)(a4 + 2));
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
