/*
 * func-name: sub_101100E0
 * func-address: 0x101100e0
 * callers: 0x1002cad0, 0x1002cb80, 0x1002cc30, 0x1002cce0, 0x1002cd90, 0x1002ce40, 0x1002cef0, 0x1002cfa0, 0x1003bf60, 0x1006f040, 0x100912b0, 0x100d2070, 0x100f7400, 0x100f7830, 0x1010d330, 0x10111cb0, 0x10111d60, 0x10111e10, 0x10111ec0, 0x10111f70, 0x10112020, 0x101120d0, 0x10170180, 0x101701f0, 0x10170260, 0x10171b80, 0x10175ea0, 0x10176030
 * callees: none
 */

_DWORD *__thiscall sub_101100E0(_DWORD *this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  int v6; // ebp
  char *v8; // eax
  char *v9; // ecx
  int v10; // edx
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a6;
  if ( a4 != a6 )
  {
    v9 = (char *)this[2];
    if ( a6 != v9 )
    {
      v10 = a4 - a6;
      do
      {
        *(_DWORD *)&v8[v10] = *(_DWORD *)v8;
        *(_DWORD *)&v8[v10 + 4] = *((_DWORD *)v8 + 1);
        v8 += 8;
      }
      while ( v8 != v9 );
      v6 = a3;
    }
    this[2] = &a4[8 * ((v9 - a6) >> 3)];
  }
  result = a2;
  a2[1] = a4;
  *a2 = v6;
  return result;
}
