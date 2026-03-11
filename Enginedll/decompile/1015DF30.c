/*
 * func-name: sub_1015DF30
 * func-address: 0x1015df30
 * callers: 0x1015fcb0
 * callees: 0x101a26c0
 */

int __stdcall sub_1015DF30(_BYTE *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, unsigned __int8 a5)
{
  int v5; // edx
  unsigned __int8 v6; // cl
  int v7; // esi
  double v8; // st7
  double v9; // st6
  int v10; // esi
  char v11; // al
  char v12; // al
  int result; // eax
  float v14; // [esp+24h] [ebp+14h]
  float v15; // [esp+24h] [ebp+14h]

  v5 = (unsigned __int8)*a1;
  v6 = a5;
  if ( a5 + v5 > 255 )
    v6 = -1 - v5;
  *a1 += v6;
  v7 = (unsigned __int8)*a2;
  v14 = (float)(v7 + (unsigned __int8)*a3 + (unsigned __int8)*a4);
  v8 = v14;
  v15 = v14 - 255.0 + (double)(unsigned __int8)*a1;
  v9 = v15;
  v10 = v7 - (int)((double)v7 / v8 * v15);
  v11 = v10;
  if ( v10 < 0 )
    v11 = 0;
  *a2 = v11;
  v12 = *a3 - (int)((double)(unsigned __int8)*a3 / v8 * v9);
  if ( (unsigned __int8)*a3 - (int)((double)(unsigned __int8)*a3 / v8 * v9) < 0 )
    v12 = 0;
  *a3 = v12;
  result = (unsigned __int8)*a4 - (int)((double)(unsigned __int8)*a4 / v8 * v9);
  if ( result < 0 )
    result = 0;
  *a4 = result;
  return result;
}
