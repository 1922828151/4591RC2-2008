/*
 * func-name: sub_10020380
 * func-address: 0x10020380
 * callers: 0x10021280, 0x10021fa0
 * callees: none
 */

char __thiscall sub_10020380(_DWORD *this)
{
  _DWORD *v1; // eax
  float *v2; // esi
  unsigned __int16 *v3; // ecx
  unsigned int v4; // edx
  unsigned int v6; // eax
  unsigned __int16 *v7; // ebp
  float *i; // ebx
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // [esp+4h] [ebp-10h]
  unsigned int v12; // [esp+8h] [ebp-Ch]
  unsigned int v13; // [esp+Ch] [ebp-8h]
  float *v14; // [esp+10h] [ebp-4h]

  v1 = (_DWORD *)this[1];
  v2 = (float *)v1[4];
  v14 = v2;
  if ( !v2 )
    return 0;
  if ( !v1[2] )
    return 0;
  v3 = (unsigned __int16 *)v1[10];
  if ( !v3 )
    return 0;
  v4 = v1[9];
  v13 = v4;
  if ( v4 < 3 )
    return 0;
  v11 = 0;
  v6 = v1[3];
  v12 = v6;
  v7 = v3;
  for ( i = (float *)(v3 + 6); ; i += 9 )
  {
    v9 = 0;
    if ( v6 )
      break;
LABEL_14:
    v7 += 18;
    if ( ++v11 >= v4 )
      return 1;
  }
  while ( 1 )
  {
    v10 = 0;
    if ( *v7 )
    {
      while ( *(_BYTE *)(*((_DWORD *)v7 + 1) + v10) != (_BYTE)v9 )
      {
        if ( ++v10 >= (unsigned int)*v7 )
          goto LABEL_11;
      }
      goto LABEL_12;
    }
LABEL_11:
    if ( i[2] * v2[2] + i[1] * v2[1] + *v2 * *i + i[3] > 0.02 )
      return 0;
LABEL_12:
    v6 = v12;
    ++v9;
    v2 += 3;
    if ( v9 >= v12 )
    {
      v4 = v13;
      v2 = v14;
      goto LABEL_14;
    }
  }
}
