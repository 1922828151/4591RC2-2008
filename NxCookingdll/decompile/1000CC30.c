/*
 * func-name: sub_1000CC30
 * func-address: 0x1000cc30
 * callers: 0x1000ce00
 * callees: 0x100161a0, 0x10034ca4, 0x10034dd7, 0x10035700
 */

int __cdecl sub_1000CC30(int a1, _DWORD *a2, char a3, int a4)
{
  int v4; // esi
  void *v5; // esp
  float v6; // edi
  int result; // eax
  float *v8; // ecx
  float v9; // edx
  double v10; // st5
  double v11; // st7
  double v12; // st4
  double v13; // st6
  __int16 v14; // fps
  double v15; // rt2
  double v16; // st5
  double v17; // st7
  double v18; // rtt
  double v19; // rt0
  bool v20; // c0
  char v21; // c2
  bool v22; // c3
  double v23; // rt1
  unsigned __int16 v25; // ax
  char v26; // cl
  int *v27; // edx
  char *v28; // esi
  _BYTE v29[12]; // [esp+0h] [ebp-28h] BYREF
  float v30; // [esp+Ch] [ebp-1Ch]
  float v31; // [esp+10h] [ebp-18h]
  float v32; // [esp+14h] [ebp-14h]
  float v33; // [esp+18h] [ebp-10h]
  int v34; // [esp+1Ch] [ebp-Ch]
  int v35; // [esp+20h] [ebp-8h]
  int v36; // [esp+30h] [ebp+8h]

  v4 = a1;
  v5 = alloca(2 * a1);
  v6 = COERCE_FLOAT(v29);
  result = sub_100161A0(v29, a1, a3, a4);
  if ( (dword_1005B0BC & 1) == 0 )
  {
    dword_1005B0BC |= 1u;
    result = atexit(nullsub_2);
  }
  if ( !byte_1005B0B8 )
  {
    byte_1005B0B8 = 1;
    v34 = 0;
    v8 = (float *)&unk_100580BC;
    do
    {
      *(float *)&v35 = (double)v34 * 0.025335426;
      v33 = cos(*(float *)&v35);
      v32 = sin(*(float *)&v35);
      v9 = 0.0;
      *(float *)&v35 = 0.0;
      do
      {
        *(float *)&v35 = (double)v35 * 0.025335426;
        v30 = cos(*(float *)&v35);
        v31 = sin(*(float *)&v35);
        v10 = v31;
        v11 = v31;
        v12 = v33 * v30;
        v13 = v30 * v32;
        if ( v12 <= v31 )
          v10 = v12;
        else
          v11 = v12;
        v15 = v10;
        v16 = v11;
        v17 = v15;
        if ( v16 > v13 )
        {
          v18 = v16;
          v16 = v13;
          v13 = v18;
        }
        if ( v16 < v17 )
        {
          v19 = v16;
          v16 = v17;
          v17 = v19;
        }
        v20 = v16 < v13;
        v21 = 0;
        v22 = v16 == v13;
        LOWORD(result) = v14;
        if ( v16 > v13 )
        {
          v23 = v16;
          v16 = v13;
          v13 = v23;
        }
        ++LODWORD(v9);
        *(v8 - 1) = v17;
        v8 += 3;
        *(v8 - 3) = v16;
        *(float *)&v35 = v9;
        *(v8 - 2) = v13;
      }
      while ( SLODWORD(v9) < 32 );
      ++v34;
    }
    while ( (int)v8 < (int)&dword_1005B0BC );
  }
  if ( a1 )
  {
    while ( 1 )
    {
      v25 = *(_WORD *)LODWORD(v6);
      v26 = (unsigned __int8)*(_WORD *)LODWORD(v6) >> 3;
      v35 = LODWORD(v6) + 2;
      v36 = v4 - 1;
      v27 = a2 + 2;
      v28 = (char *)&unk_100580B8 + 12 * (v25 >> 6);
      *(v27 - 2) = *(_DWORD *)&v28[4 * ((1176 >> (2 * (v25 & 7))) & 3)] | ((v26 & 7) << 31);
      *(v27 - 1) = *(_DWORD *)&v28[4 * ((8544 >> (2 * (v25 & 7))) & 3)] | ((v26 & 6) << 30);
      result = *(_DWORD *)&v28[4 * ((6660 >> (2 * (v25 & 7))) & 3)] | ((v26 & 4) << 29);
      v4 = v36;
      *v27 = result;
      a2 = v27 + 1;
      if ( !v36 )
        break;
      v6 = *(float *)&v35;
    }
  }
  return result;
}
