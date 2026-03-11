/*
 * func-name: sub_1005F270
 * func-address: 0x1005f270
 * callers: 0x1005f270, 0x1005f340
 * callees: 0x1005f270
 */

char __thiscall sub_1005F270(_DWORD *this, int a2, int a3, int a4, int (__thiscall ***a5)(_DWORD, int, int), int a6)
{
  int v6; // esi
  int v8; // ecx
  char *v9; // esi
  int v10; // ecx
  float v12; // [esp+14h] [ebp+4h]
  float v13; // [esp+14h] [ebp+4h]

  v6 = a2;
  if ( a2 < 0 )
    return (**a5)(a5, -1 - v6, a6);
  while ( 1 )
  {
    v8 = this[3];
    if ( !v8 || v6 >= (unsigned int)((this[4] - v8) >> 4) )
      invalid_parameter_noinfo();
    v9 = (char *)(this[3] + 16 * v6);
    v10 = 4 * *v9;
    v12 = *(float *)(v10 + a4) - *((float *)v9 + 1);
    if ( v12 > -0.03125 )
      break;
    v6 = *((_DWORD *)v9 + 2);
LABEL_10:
    if ( v6 < 0 )
      return (**a5)(a5, -1 - v6, a6);
  }
  v13 = *(float *)(v10 + a3) - *((float *)v9 + 1);
  if ( v13 >= 0.03125 || (unsigned __int8)sub_1005F270(*((_DWORD *)v9 + 2), a3, a4, a5, a6) )
  {
    v6 = *((_DWORD *)v9 + 3);
    goto LABEL_10;
  }
  return 0;
}
