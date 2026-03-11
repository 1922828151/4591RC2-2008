/*
 * func-name: sub_1005F360
 * func-address: 0x1005f360
 * callers: 0x1005f360, 0x1005f440
 * callees: 0x1005f360
 */

char __thiscall sub_1005F360(_DWORD *this, int a2, int a3, float a4, int (__thiscall ***a5)(_DWORD, int, int), int a6)
{
  int v6; // esi
  double v8; // st7
  int v9; // ecx
  char *v10; // esi
  float *v11; // ecx
  float v13; // [esp+0h] [ebp-1Ch]
  float v14; // [esp+20h] [ebp+4h]
  float v15; // [esp+20h] [ebp+4h]

  v6 = a2;
  if ( a2 < 0 )
    return (**a5)(a5, -1 - v6, a6);
  v8 = a4;
  while ( 1 )
  {
    v9 = this[3];
    if ( !v9 || v6 >= (unsigned int)((this[4] - v9) >> 4) )
    {
      invalid_parameter_noinfo();
      v8 = a4;
    }
    v10 = (char *)(this[3] + 16 * v6);
    v11 = (float *)(a3 + 4 * *v10);
    v14 = *v11 + v8 - *((float *)v10 + 1);
    if ( v14 > -0.03125 )
      break;
    v6 = *((_DWORD *)v10 + 2);
LABEL_12:
    if ( v6 < 0 )
      return (**a5)(a5, -1 - v6, a6);
  }
  v15 = *v11 - v8 - *((float *)v10 + 1);
  if ( v15 >= 0.03125 )
  {
LABEL_11:
    v6 = *((_DWORD *)v10 + 3);
    goto LABEL_12;
  }
  v13 = v8;
  if ( (unsigned __int8)sub_1005F360(*((_DWORD *)v10 + 2), a3, v13, (int)a5, a6) )
  {
    v8 = a4;
    goto LABEL_11;
  }
  return 0;
}
