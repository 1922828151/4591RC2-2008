/*
 * func-name: sub_10008D60
 * func-address: 0x10008d60
 * callers: 0x1000b550
 * callees: 0x10008410, 0x10018cf2
 */

_DWORD *__stdcall sub_10008D60(int a1, _DWORD *a2, int a3, _DWORD **a4)
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
    sub_10008410((LONG)a4);
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
