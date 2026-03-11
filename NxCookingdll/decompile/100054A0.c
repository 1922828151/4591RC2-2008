/*
 * func-name: sub_100054A0
 * func-address: 0x100054a0
 * callers: 0x10005800
 * callees: 0x10004c30, 0x10004cd0, 0x10005190, 0x100053c0
 */

char __thiscall sub_100054A0(int this, int a2)
{
  double v4; // st7
  unsigned __int16 *v5; // edi
  unsigned int v6; // ebx
  bool v7; // zf
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  long double v11; // st6
  long double v12; // st5
  long double v13; // st7
  int v14; // eax
  int v15; // edx
  int v16; // eax
  double v17; // st7
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st1
  double v22; // st7
  double v23; // st7
  double v24; // st4
  double v25; // st5
  double v26; // st6
  int v27; // edx
  int v28; // edx
  double v29[4]; // [esp+10h] [ebp-30h] BYREF
  int v30; // [esp+30h] [ebp-10h] BYREF
  int v31; // [esp+34h] [ebp-Ch]
  int v32; // [esp+38h] [ebp-8h]

  if ( !dword_100580A0 )
    return 0;
  v4 = 0.0;
  v5 = *(unsigned __int16 **)(this + 84);
  *(double *)(this + 360) = 0.0;
  v6 = 0;
  v7 = *(_DWORD *)(this + 68) == 0;
  *(double *)(this + 352) = 0.0;
  *(double *)(this + 344) = 0.0;
  *(double *)(this + 336) = 0.0;
  *(double *)(this + 328) = 0.0;
  *(double *)(this + 320) = 0.0;
  *(double *)(this + 312) = 0.0;
  *(double *)(this + 304) = 0.0;
  *(double *)(this + 296) = 0.0;
  *(double *)(this + 288) = 0.0;
  if ( !v7 )
  {
    do
    {
      v8 = *(_DWORD *)(this + 88);
      if ( (v8 & 2) != 0 )
      {
        v9 = v5[2];
        v30 = *v5;
        v10 = v5[1];
      }
      else
      {
        v10 = *((_DWORD *)v5 + 1);
        v30 = *(_DWORD *)v5;
        v9 = *((_DWORD *)v5 + 2);
      }
      v32 = v9;
      v31 = v10;
      if ( (v8 & 1) != 0 )
      {
        v31 = v9;
        v32 = v10;
      }
      sub_100053C0((_DWORD *)this, v29, &v30);
      v11 = fabs(v29[1]);
      v12 = fabs(v29[0]);
      v13 = fabs(v29[2]);
      if ( v12 <= v11 || v12 <= v13 )
      {
        v14 = 1;
        if ( v11 <= v13 )
          v14 = 2;
        *(_DWORD *)(this + 104) = v14;
      }
      else
      {
        *(_DWORD *)(this + 104) = 0;
      }
      v15 = (*(_DWORD *)(this + 104) + 1) % 3;
      *(_DWORD *)(this + 96) = v15;
      *(_DWORD *)(this + 100) = (v15 + 1) % 3;
      sub_10005190((void *)this, (int)v29);
      v16 = *(_DWORD *)(this + 96);
      if ( v16 )
      {
        if ( *(_DWORD *)(this + 100) )
          v17 = *(double *)(this + 208);
        else
          v17 = *(double *)(this + 200);
      }
      else
      {
        v17 = *(double *)(this + 192);
      }
      ++v6;
      *(double *)(this + 288) = v17 * v29[0] + *(double *)(this + 288);
      *(double *)(this + 8 * v16 + 296) = v29[v16] * *(double *)(this + 216) + *(double *)(this + 8 * v16 + 296);
      *(double *)(this + 8 * *(_DWORD *)(this + 100) + 296) = v29[*(_DWORD *)(this + 100)] * *(double *)(this + 224)
                                                            + *(double *)(this + 8 * *(_DWORD *)(this + 100) + 296);
      *(double *)(this + 8 * *(_DWORD *)(this + 104) + 296) = v29[*(_DWORD *)(this + 104)] * *(double *)(this + 232)
                                                            + *(double *)(this + 8 * *(_DWORD *)(this + 104) + 296);
      *(double *)(this + 8 * *(_DWORD *)(this + 96) + 320) = v29[*(_DWORD *)(this + 96)] * *(double *)(this + 240)
                                                           + *(double *)(this + 8 * *(_DWORD *)(this + 96) + 320);
      *(double *)(this + 8 * *(_DWORD *)(this + 100) + 320) = v29[*(_DWORD *)(this + 100)] * *(double *)(this + 248)
                                                            + *(double *)(this + 8 * *(_DWORD *)(this + 100) + 320);
      *(double *)(this + 8 * *(_DWORD *)(this + 104) + 320) = v29[*(_DWORD *)(this + 104)] * *(double *)(this + 256)
                                                            + *(double *)(this + 8 * *(_DWORD *)(this + 104) + 320);
      *(double *)(this + 8 * *(_DWORD *)(this + 96) + 344) = v29[*(_DWORD *)(this + 96)] * *(double *)(this + 264)
                                                           + *(double *)(this + 8 * *(_DWORD *)(this + 96) + 344);
      *(double *)(this + 8 * *(_DWORD *)(this + 100) + 344) = v29[*(_DWORD *)(this + 100)] * *(double *)(this + 272)
                                                            + *(double *)(this + 8 * *(_DWORD *)(this + 100) + 344);
      *(double *)(this + 8 * *(_DWORD *)(this + 104) + 344) = v29[*(_DWORD *)(this + 104)] * *(double *)(this + 280)
                                                            + *(double *)(this + 8 * *(_DWORD *)(this + 104) + 344);
      v5 = (unsigned __int16 *)((char *)v5 + *(_DWORD *)(this + 76));
    }
    while ( v6 < *(_DWORD *)(this + 68) );
    v4 = 0.0;
  }
  v18 = *(double *)(this + 296) * 0.5;
  *(double *)(this + 296) = v18;
  v19 = *(double *)(this + 304) * 0.5;
  *(double *)(this + 304) = v19;
  v20 = *(double *)(this + 312) * 0.5;
  *(double *)(this + 312) = v20;
  *(double *)(this + 320) = *(double *)(this + 320) * 0.3333333333333333;
  *(double *)(this + 328) = *(double *)(this + 328) * 0.3333333333333333;
  *(double *)(this + 336) = 0.3333333333333333 * *(double *)(this + 336);
  *(double *)(this + 344) = *(double *)(this + 344) * 0.5;
  *(double *)(this + 352) = *(double *)(this + 352) * 0.5;
  *(double *)(this + 360) = 0.5 * *(double *)(this + 360);
  v21 = v4;
  v22 = 0.0;
  if ( v21 == *(double *)(this + 288) )
  {
    v25 = 0.0;
    v26 = 0.0;
  }
  else
  {
    v23 = v19;
    v24 = 1.0 / *(double *)(this + 288);
    v25 = v18 * v24;
    v22 = v23 * v24;
    v26 = v20 * v24;
  }
  *(float *)a2 = v25;
  *(float *)(a2 + 4) = v22;
  *(float *)(a2 + 8) = v26;
  sub_10004C30((double *)this, (double *)(a2 + 24));
  sub_10004CD0((double *)this, (void *)(v27 + 96));
  *(double *)(v28 + 16) = *(double *)(this + 48);
  return 1;
}
