/*
 * func-name: sub_10007D70
 * func-address: 0x10007d70
 * callers: 0x10024d80, 0x10024f00
 * callees: 0x10013120, 0x10013150, 0x100131a0, 0x100133e0
 */

char __thiscall sub_10007D70(int this, int a2, int a3)
{
  char result; // al
  int v7; // ebp
  int v8; // eax
  unsigned int v9; // edx
  unsigned int j; // ebp
  unsigned int k; // ebp
  unsigned int m; // ebp
  unsigned int n; // ebp
  unsigned int ii; // ebp
  _DWORD *v15; // ebp
  int v16; // ecx
  int v17; // eax
  float *v18; // ebp
  unsigned __int16 *v19; // [esp+1Ch] [ebp-14h]
  unsigned __int16 *v20; // [esp+1Ch] [ebp-14h]
  unsigned __int16 *v21; // [esp+20h] [ebp-10h]
  int mm; // [esp+24h] [ebp-Ch]
  int v23; // [esp+28h] [ebp-8h]
  int v24; // [esp+28h] [ebp-8h]
  _DWORD *v25; // [esp+2Ch] [ebp-4h]
  unsigned int i; // [esp+34h] [ebp+4h]
  unsigned int jj; // [esp+34h] [ebp+4h]
  unsigned int kk; // [esp+38h] [ebp+8h]
  int v29; // [esp+38h] [ebp+8h]

  result = sub_100133E0(67, 76, 84, 72, 3, a3, a2);
  if ( result )
  {
    sub_10013150(*(_DWORD *)(this + 212), a3, a2);
    sub_10013150(*(_DWORD *)(this + 216), a3, a2);
    sub_100131A0(COERCE_UNSIGNED_INT(*(float *)(this + 220)), a3, a2);
    sub_10013150((*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 12, a3, a2);
    v7 = 0;
    for ( i = 0; i < (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 12; v7 += 12 )
    {
      sub_100131A0(COERCE_UNSIGNED_INT(*(float *)(*(_DWORD *)(this + 4) + v7)), a3, a2);
      sub_100131A0(COERCE_UNSIGNED_INT(*(float *)(*(_DWORD *)(this + 4) + v7 + 4)), a3, a2);
      sub_100131A0(COERCE_UNSIGNED_INT(*(float *)(*(_DWORD *)(this + 4) + v7 + 8)), a3, a2);
      ++i;
    }
    v8 = *(_DWORD *)(this + 212);
    if ( v8 == 1 )
    {
      v9 = ((*(_DWORD *)(this + 68) - *(_DWORD *)(this + 64)) >> 2) / 3u;
    }
    else
    {
      if ( v8 != 2 )
        return 0;
      v9 = (unsigned int)((*(_DWORD *)(this + 68) - *(_DWORD *)(this + 64)) >> 2) >> 2;
    }
    sub_10013150(v9, a3, a2);
    for ( j = 0; j < (*(_DWORD *)(this + 68) - *(_DWORD *)(this + 64)) >> 2; ++j )
      sub_10013150(*(_DWORD *)(*(_DWORD *)(this + 64) + 4 * j), a3, a2);
    sub_10013150((*(_DWORD *)(this + 28) - *(_DWORD *)(this + 24)) >> 2, a3, a2);
    for ( k = 0; k < (*(_DWORD *)(this + 28) - *(_DWORD *)(this + 24)) >> 2; ++k )
      sub_100131A0(COERCE_UNSIGNED_INT(*(float *)(*(_DWORD *)(this + 24) + 4 * k)), a3, a2);
    sub_10013150((*(_DWORD *)(this + 48) - *(_DWORD *)(this + 44)) >> 2, a3, a2);
    for ( m = 0; m < (*(_DWORD *)(this + 48) - *(_DWORD *)(this + 44)) >> 2; ++m )
      sub_10013150(*(_DWORD *)(*(_DWORD *)(this + 44) + 4 * m), a3, a2);
    sub_10013150((*(_DWORD *)(this + 88) - *(_DWORD *)(this + 84)) >> 2, a3, a2);
    for ( n = 0; n < (*(_DWORD *)(this + 88) - *(_DWORD *)(this + 84)) >> 2; ++n )
      sub_10013150(*(_DWORD *)(*(_DWORD *)(this + 84) + 4 * n), a3, a2);
    sub_10013150((*(_DWORD *)(this + 108) - *(_DWORD *)(this + 104)) >> 2, a3, a2);
    for ( ii = 0; ii < (*(_DWORD *)(this + 108) - *(_DWORD *)(this + 104)) >> 2; ++ii )
      sub_10013150(*(_DWORD *)(*(_DWORD *)(this + 104) + 4 * ii), a3, a2);
    sub_10013150((*(_DWORD *)(this + 128) - *(_DWORD *)(this + 124)) >> 2, a3, a2);
    for ( jj = 0; jj < (*(_DWORD *)(this + 128) - *(_DWORD *)(this + 124)) >> 2; ++jj )
    {
      v15 = *(_DWORD **)(*(_DWORD *)(this + 124) + 4 * jj);
      v25 = v15;
      sub_10013150(*v15, a3, a2);
      sub_10013150((v15[2] - v15[1]) >> 2, a3, a2);
      for ( kk = 0; kk < (v15[2] - v15[1]) >> 2; ++kk )
        sub_10013150(*(_DWORD *)(v15[1] + 4 * kk), a3, a2);
      sub_10013150((v15[7] - v15[6]) >> 5, a3, a2);
      v16 = 0;
      v29 = 0;
      if ( (v15[7] - v15[6]) >> 5 )
      {
        for ( mm = 0; ; v16 = mm )
        {
          v17 = *(_DWORD *)(this + 212);
          if ( v17 == 1 )
          {
            v18 = (float *)(v16 + v15[6]);
            sub_10013120(*(unsigned __int16 *)v18, a3, a2);
            sub_10013120(*((unsigned __int16 *)v18 + 1), a3, a2);
            sub_10013120(*((unsigned __int16 *)v18 + 2), a3, a2);
            sub_10013120(*((unsigned __int16 *)v18 + 3), a3, a2);
            sub_100131A0(COERCE_UNSIGNED_INT(v18[3]), a3, a2);
            sub_100131A0(COERCE_UNSIGNED_INT(v18[4]), a3, a2);
            sub_100131A0(COERCE_UNSIGNED_INT(v18[5]), a3, a2);
            sub_10013120(*((unsigned __int16 *)v18 + 14), a3, a2);
            v15 = v25;
          }
          else
          {
            if ( v17 != 2 )
              return 0;
            v21 = (unsigned __int16 *)(v16 + v15[6]);
            v19 = v21;
            v23 = 4;
            do
            {
              sub_10013120(*v19++, a3, a2);
              --v23;
            }
            while ( v23 );
            sub_100131A0(COERCE_UNSIGNED_INT(*((float *)v21 + 2)), a3, a2);
            v20 = v21 + 6;
            v24 = 6;
            do
            {
              sub_10013120(*v20++, a3, a2);
              --v24;
            }
            while ( v24 );
            sub_10013120(v21[14], a3, a2);
          }
          mm += 32;
          if ( ++v29 >= (unsigned int)((v15[7] - v15[6]) >> 5) )
            break;
        }
      }
    }
    return 1;
  }
  return result;
}
