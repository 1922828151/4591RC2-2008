/*
 * func-name: sub_100337A0
 * func-address: 0x100337a0
 * callers: 0x100337a0, 0x10033910
 * callees: 0x10031470, 0x100314d0, 0x10032ca0, 0x10033480, 0x100337a0
 */

int __stdcall sub_100337A0(int a1, unsigned int a2, float *a3, int a4, int a5, unsigned int a6)
{
  unsigned int v6; // eax
  char v7; // bl
  unsigned int v10; // esi
  unsigned int v11; // ecx
  bool v12; // zf
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // ebx
  float *v18; // eax
  unsigned int v19; // esi
  float *v20; // eax
  float v22[6]; // [esp+14h] [ebp-18h] BYREF
  unsigned int v23; // [esp+40h] [ebp+14h]

  v6 = a2;
  v7 = a4;
  if ( a2 != 1 )
  {
    do
    {
      v10 = v6 >> 1;
      v11 = v6 >> 1 << 7;
      v12 = v7 == 0;
      v13 = v11 - 16;
      if ( v12 )
        v13 = v6 >> 1 << 7;
      if ( v13 >= a6 )
      {
        v14 = a6;
      }
      else if ( (_BYTE)a4 )
      {
        v14 = v11 - 16;
      }
      else
      {
        v14 = v6 >> 1 << 7;
      }
      v15 = v6 - v10;
      v23 = v15;
      if ( a6 >= v15 << 7 )
        v16 = a6 - (v15 << 7);
      else
        v16 = 0;
      v17 = sub_10032CA0(a5, a6, v16, v14);
      sub_100337A0(a1, v10, a3, a4, a5, v17);
      a6 -= v17;
      v6 = v23;
      a1 += 1888 * v10;
      a5 += 4 * v17;
      v7 = 0;
      LOBYTE(a4) = 0;
      a3 += 6 * v10;
    }
    while ( v23 != 1 );
  }
  v18 = sub_100314D0(v22);
  *a3 = *v18;
  a3[1] = v18[1];
  a3[2] = v18[2];
  a3[3] = v18[3];
  a3[4] = v18[4];
  v19 = 0;
  for ( a3[5] = v18[5]; v19 < a6; a3[5] = v20[5] )
  {
    v20 = (float *)sub_10031470(a3, v22, *(float **)(a5 + 4 * v19));
    *a3 = *v20;
    a3[1] = v20[1];
    a3[2] = v20[2];
    a3[3] = v20[3];
    a3[4] = v20[4];
    ++v19;
  }
  return sub_10033480((__int16 *)(224 * (v7 != 0) + a1 + 96), (__int16 *)(a1 + 12 * (v7 != 0)), 8 - (v7 != 0), a5, a6);
}
