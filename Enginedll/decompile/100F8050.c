/*
 * func-name: sub_100F8050
 * func-address: 0x100f8050
 * callers: 0x100f8170
 * callees: 0x1013f020, 0x101a2500
 */

_DWORD *__thiscall sub_100F8050(int this, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v6; // eax
  _DWORD *result; // eax
  _DWORD *v8; // [esp+20h] [ebp+Ch]

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    invalid_parameter_noinfo();
  v6 = *a4;
  v8 = *a4;
  if ( a4 != *(_DWORD ***)(this + 4) )
  {
    *a4[1] = v6;
    (*a4)[1] = a4[1];
    sub_1013F020(a4 + 9);
    std::string::~string(a4 + 2);
    operator delete(a4);
    --*(_DWORD *)(this + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v8;
  return result;
}
