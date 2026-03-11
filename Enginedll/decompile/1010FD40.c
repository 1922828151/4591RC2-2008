/*
 * func-name: sub_1010FD40
 * func-address: 0x1010fd40
 * callers: 0x10037230, 0x1003c7f0, 0x1008b740, 0x100f2ba0, 0x100f2c20, 0x100f2d50, 0x100f5230, 0x100f5510, 0x1010a600, 0x1010ad30, 0x1010b430, 0x1010b610, 0x1010b790, 0x1010b910, 0x1010bad0, 0x1010c190, 0x10114e90, 0x10114f50, 0x10115010, 0x101150d0, 0x10115190, 0x10115250, 0x10171580, 0x101715f0, 0x10171860, 0x10172570, 0x10173030, 0x10174960, 0x10174aa0, 0x10174d80, 0x10175180, 0x10175470
 * callees: 0x1003b730
 */

_DWORD *__thiscall sub_1010FD40(_DWORD *this, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ebp
  unsigned int v10; // esi
  int v11; // ecx
  _DWORD *v12; // esi
  _DWORD *result; // eax
  _DWORD *v14; // ecx
  unsigned int i; // [esp+10h] [ebp-10h]

  v4 = this[8];
  v5 = v4 & sub_1003B730(a3);
  if ( this[9] <= v5 )
    v5 += -1 - (v4 >> 1);
  v6 = this[5];
  if ( !v6 || v5 >= (this[6] - v6) >> 3 )
    invalid_parameter_noinfo();
  v7 = this[5];
  v8 = *(_DWORD *)(v7 + 8 * v5);
  v9 = *(_DWORD **)(v7 + 8 * v5 + 4);
  v10 = v5 + 1;
  for ( i = v10; ; v10 = i )
  {
    v11 = this[5];
    if ( !v11 || v10 >= (this[6] - v11) >> 3 )
      invalid_parameter_noinfo();
    v12 = (_DWORD *)(this[5] + 8 * v10);
    if ( !v8 || v8 != *v12 )
      invalid_parameter_noinfo();
    if ( v9 == (_DWORD *)v12[1] )
    {
      result = a2;
      a2[1] = this[2];
      *a2 = this + 1;
      return result;
    }
    if ( !v8 )
      invalid_parameter_noinfo();
    if ( v9 == *(_DWORD **)(v8 + 4) )
      invalid_parameter_noinfo();
    if ( !(unsigned __int8)std::operator<<char>(v9 + 2, a3) )
      break;
    if ( v9 == *(_DWORD **)(v8 + 4) )
      invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
  }
  if ( v9 == *(_DWORD **)(v8 + 4) )
    invalid_parameter_noinfo();
  if ( (unsigned __int8)std::operator<<char>(a3, v9 + 2) )
  {
    result = a2;
    v14 = (_DWORD *)this[2];
    *a2 = this + 1;
  }
  else
  {
    result = a2;
    v14 = v9;
    *a2 = v8;
  }
  result[1] = v14;
  return result;
}
