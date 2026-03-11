/*
 * func-name: sub_10023FD0
 * func-address: 0x10023fd0
 * callers: 0x100286a0
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_10023FD0(int this, _DWORD *a2, int a3, _DWORD **a4)
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
    std::string::~string(a4 + 4);
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  a2[1] = v5;
  *a2 = a3;
  return result;
}
