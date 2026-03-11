/*
 * func-name: sub_10265CD0
 * func-address: 0x10265cd0
 * callers: 0x10016cf7
 * callees: 0x10017a8a, 0x102c9d50
 */

_DWORD *__thiscall sub_10265CD0(int this, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v5; // ebp
  _DWORD *result; // eax

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    _invalid_parameter_noinfo();
  v5 = *a4;
  if ( a4 != *(_DWORD ***)(this + 4) )
  {
    *a4[1] = v5;
    (*a4)[1] = a4[1];
    sub_10017A8A();
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  a2[1] = v5;
  *a2 = a3;
  return result;
}
