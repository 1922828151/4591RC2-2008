/*
 * func-name: sub_1010F500
 * func-address: 0x1010f500
 * callers: 0x10020950, 0x10020ae0, 0x10020c00, 0x100585f0, 0x100f5230, 0x100f5df0, 0x10101f00, 0x10109e10, 0x10109eb0, 0x10109f50, 0x10109ff0, 0x1010a090, 0x1010a130, 0x101673d0, 0x1016ed50
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_1010F500(int this, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v5; // ebp
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    invalid_parameter_noinfo();
  v5 = *a4;
  if ( a4 != *(_DWORD ***)(this + 4) )
  {
    *a4[1] = v5;
    (*a4)[1] = a4[1];
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  a2[1] = v5;
  *a2 = a3;
  return result;
}
