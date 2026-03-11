/*
 * func-name: sub_100118F0
 * func-address: 0x100118f0
 * callers: 0x100126b0
 * callees: 0x1001ab00, 0x1001ab10, 0x1001ab20
 */

int __thiscall sub_100118F0(int this, int a2)
{
  unsigned int v3; // edx
  bool v4; // zf
  unsigned int j; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  double v12; // st6
  double v13; // st7
  double v14; // st6
  int v15; // edi
  double v16; // st7
  double v17; // st6
  double v18; // st7
  double v19; // st6
  double v20; // st7
  double v21; // st6
  double v22; // st7
  double v23; // st6
  double v24; // st7
  double v25; // st6
  double v26; // st7
  double v27; // st6
  double v28; // st7
  unsigned int i; // [esp+8h] [ebp-C4h]
  unsigned int v31; // [esp+Ch] [ebp-C0h]
  int v32; // [esp+10h] [ebp-BCh] BYREF
  int v33; // [esp+14h] [ebp-B8h]
  int v34; // [esp+18h] [ebp-B4h]
  int v35; // [esp+1Ch] [ebp-B0h]
  int v36; // [esp+20h] [ebp-ACh]
  int v37; // [esp+24h] [ebp-A8h]
  int v38; // [esp+28h] [ebp-A4h]
  int v39; // [esp+2Ch] [ebp-A0h]
  float v40[3]; // [esp+30h] [ebp-9Ch] BYREF
  float v41[3]; // [esp+3Ch] [ebp-90h] BYREF
  float v42[3]; // [esp+48h] [ebp-84h] BYREF
  float v43[3]; // [esp+54h] [ebp-78h] BYREF
  float v44[3]; // [esp+60h] [ebp-6Ch] BYREF
  float v45[3]; // [esp+6Ch] [ebp-60h] BYREF
  float v46[3]; // [esp+78h] [ebp-54h] BYREF
  float v47[3]; // [esp+84h] [ebp-48h] BYREF
  _BYTE v48[56]; // [esp+90h] [ebp-3Ch] BYREF
  int v49; // [esp+C8h] [ebp-4h]

  v32 = -1;
  sub_1001AB00(v48);
  v3 = 0;
  v4 = *(_DWORD *)(this + 88) == 0;
  v39 = 0;
  v31 = 0;
  if ( !v4 )
  {
    do
    {
      for ( i = 0; i < *(_DWORD *)(this + 88); ++i )
      {
        for ( j = 0; j < *(_DWORD *)(this + 88); ++j )
        {
          v6 = *(_DWORD *)(this + 92);
          v7 = *(_DWORD *)(this + 88);
          v8 = j + v3 * v6 + i * v7;
          v38 = v8 + 1;
          v37 = v7 + v8;
          v36 = v7 + v8 + 1;
          v9 = v6 + v8;
          v35 = v6 + v8 + 1;
          v34 = v7 + v6 + v8;
          v33 = v34 + 1;
          if ( j == v7 - 1 )
          {
            v33 = -1;
            v35 = -1;
            v36 = -1;
            v38 = -1;
          }
          v10 = *(_DWORD *)(this + 88) - 1;
          if ( i == v10 )
          {
            v33 = -1;
            v34 = -1;
            v36 = -1;
            v37 = -1;
          }
          if ( v3 == v10 )
          {
            v33 = -1;
            v34 = -1;
            v35 = -1;
            v9 = -1;
          }
          if ( v8 == -1 || (v11 = *(_DWORD *)(this + 108), (~(*(_DWORD *)(v11 + 4 * v8) >> 31) & 1) == 0) )
          {
            if ( v38 == -1 || (v11 = *(_DWORD *)(this + 108), (~(*(_DWORD *)(v11 + 4 * v38) >> 31) & 1) == 0) )
            {
              if ( v37 == -1 || (v11 = *(_DWORD *)(this + 108), (~(*(_DWORD *)(v11 + 4 * v37) >> 31) & 1) == 0) )
              {
                if ( v9 == -1 || (v11 = *(_DWORD *)(this + 108), (~(*(_DWORD *)(v11 + 4 * v9) >> 31) & 1) == 0) )
                {
                  if ( v35 == -1 || (v11 = *(_DWORD *)(this + 108), (~(*(_DWORD *)(v11 + 4 * v35) >> 31) & 1) == 0) )
                  {
                    if ( v34 == -1 || (v11 = *(_DWORD *)(this + 108), (~(*(_DWORD *)(v11 + 4 * v34) >> 31) & 1) == 0) )
                    {
                      if ( v36 == -1 || (v11 = *(_DWORD *)(this + 108), (~(*(_DWORD *)(v11 + 4 * v36) >> 31) & 1) == 0) )
                      {
                        if ( v33 == -1 )
                          continue;
                        v11 = *(_DWORD *)(this + 108);
                        if ( (~(*(_DWORD *)(v11 + 4 * v33) >> 31) & 1) == 0 )
                          continue;
                      }
                    }
                  }
                }
              }
            }
          }
          ++v39;
          if ( v8 != -1 && (~(*(_DWORD *)(v11 + 4 * v8) >> 31) & 1) == 0 )
          {
            v12 = (double)i * *(float *)(this + 80) - *(float *)(this + 44) + *(float *)(this + 32);
            v13 = (double)v3 * *(float *)(this + 84) - *(float *)(this + 48) + *(float *)(this + 36);
            v41[0] = (double)j * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
            v41[1] = v12;
            v41[2] = v13;
            sub_1001AB20(v41, a2, 0, &v32);
            *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v8) = v49 | 0x80000000;
            v3 = v31;
          }
          if ( v9 == -1 || (~(*(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v9) >> 31) & 1) != 0 )
          {
            v15 = a2;
          }
          else
          {
            v14 = (double)i * *(float *)(this + 80) - *(float *)(this + 44) + *(float *)(this + 32);
            v15 = a2;
            v16 = (double)(v3 + 1) * *(float *)(this + 84) - *(float *)(this + 48) + *(float *)(this + 36);
            v45[0] = (double)j * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
            v45[1] = v14;
            v45[2] = v16;
            sub_1001AB20(v45, a2, 0, &v32);
            *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v9) = v49 | 0x80000000;
            v3 = v31;
          }
          if ( v37 != -1 && (~(*(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v37) >> 31) & 1) == 0 )
          {
            v17 = (double)(i + 1) * *(float *)(this + 80) - *(float *)(this + 44) + *(float *)(this + 32);
            v18 = (double)v3 * *(float *)(this + 84) - *(float *)(this + 48) + *(float *)(this + 36);
            v43[0] = (double)j * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
            v43[1] = v17;
            v43[2] = v18;
            sub_1001AB20(v43, v15, 0, &v32);
            *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v37) = v49 | 0x80000000;
            v3 = v31;
          }
          if ( v34 != -1 && (~(*(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v34) >> 31) & 1) == 0 )
          {
            v19 = (double)(i + 1) * *(float *)(this + 80) - *(float *)(this + 44) + *(float *)(this + 32);
            v20 = (double)(v3 + 1) * *(float *)(this + 84) - *(float *)(this + 48) + *(float *)(this + 36);
            v47[0] = (double)j * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
            v47[1] = v19;
            v47[2] = v20;
            sub_1001AB20(v47, v15, 0, &v32);
            *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v34) = v49 | 0x80000000;
            v3 = v31;
          }
          if ( v38 != -1 && (~(*(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v38) >> 31) & 1) == 0 )
          {
            v21 = (double)i * *(float *)(this + 80) - *(float *)(this + 44) + *(float *)(this + 32);
            v22 = (double)v3 * *(float *)(this + 84) - *(float *)(this + 48) + *(float *)(this + 36);
            v40[0] = (double)(j + 1) * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
            v40[1] = v21;
            v40[2] = v22;
            sub_1001AB20(v40, v15, 0, &v32);
            *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v38) = v49 | 0x80000000;
            v3 = v31;
          }
          if ( v35 != -1 && (~(*(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v35) >> 31) & 1) == 0 )
          {
            v23 = (double)i * *(float *)(this + 80) - *(float *)(this + 44) + *(float *)(this + 32);
            v24 = (double)(v3 + 1) * *(float *)(this + 84) - *(float *)(this + 48) + *(float *)(this + 36);
            v42[0] = (double)(j + 1) * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
            v42[1] = v23;
            v42[2] = v24;
            sub_1001AB20(v42, v15, 0, &v32);
            *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v35) = v49 | 0x80000000;
            v3 = v31;
          }
          if ( v36 != -1 && (~(*(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v36) >> 31) & 1) == 0 )
          {
            v25 = (double)(i + 1) * *(float *)(this + 80) - *(float *)(this + 44) + *(float *)(this + 32);
            v26 = (double)v3 * *(float *)(this + 84) - *(float *)(this + 48) + *(float *)(this + 36);
            v44[0] = (double)(j + 1) * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
            v44[1] = v25;
            v44[2] = v26;
            sub_1001AB20(v44, v15, 0, &v32);
            *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v36) = v49 | 0x80000000;
            v3 = v31;
          }
          if ( v33 != -1 && (~(*(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v33) >> 31) & 1) == 0 )
          {
            v27 = (double)(i + 1) * *(float *)(this + 80) - *(float *)(this + 44) + *(float *)(this + 32);
            v28 = (double)(v3 + 1) * *(float *)(this + 84) - *(float *)(this + 48) + *(float *)(this + 36);
            v46[0] = (double)(j + 1) * *(float *)(this + 76) - *(float *)(this + 40) + *(float *)(this + 28);
            v46[1] = v27;
            v46[2] = v28;
            sub_1001AB20(v46, v15, 0, &v32);
            *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v33) = v49 | 0x80000000;
            v3 = v31;
          }
        }
      }
      v31 = ++v3;
    }
    while ( v3 < *(_DWORD *)(this + 88) );
  }
  sub_1001AB10(v48);
  return v39;
}
