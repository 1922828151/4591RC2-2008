/*
 * func-name: sub_1000B410
 * func-address: 0x1000b410
 * callers: 0x1000aa50, 0x1000ad20, 0x1000b0f0
 * callees: 0x1000a7c0, 0x100294f2
 */

_DWORD *__stdcall sub_1000B410(int a1, _DWORD *a2, int a3, _DWORD **a4)
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
    sub_1000A7C0((int)a4);
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
