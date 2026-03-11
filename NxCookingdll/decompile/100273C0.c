/*
 * func-name: sub_100273C0
 * func-address: 0x100273c0
 * callers: 0x1002a6f0
 * callees: none
 */

int __cdecl sub_100273C0(int a1, _DWORD *a2, float a3)
{
  float *v3; // ecx
  double v4; // st6
  _DWORD *v5; // ebp
  int v6; // edi
  int v7; // ebx
  double v8; // st4
  double v9; // st3
  unsigned int v10; // edi
  float *v11; // esi
  float *v12; // edx
  double v13; // st2
  double v14; // st2
  double v15; // st2
  double v16; // st2
  float *v17; // edx
  int v18; // esi
  double v19; // st2
  double v20; // st3
  double v21; // st4
  float *v22; // ebx
  double v23; // st3
  double v24; // rt0
  double v25; // st4
  double v26; // st3
  int v27; // edi
  int v28; // esi
  unsigned __int8 *v29; // edx
  float *v30; // eax
  double v31; // rt1
  int v33; // [esp+4h] [ebp-18h]
  int v34; // [esp+8h] [ebp-14h]
  int v35; // [esp+Ch] [ebp-10h]
  int v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  int v38; // [esp+18h] [ebp-4h]

  v4 = 0.0;
  v5 = a2;
  v36 = -1;
  v34 = 0;
  v37 = cos(flt_10056874 * 0.017453292);
  if ( a1 > 0 )
  {
    v6 = a2[1];
    v35 = v6;
    do
    {
      v7 = 0;
      v8 = 0.0;
      v9 = 0.0;
      if ( v6 >= 4 )
      {
        v10 = ((unsigned int)(v6 - 4) >> 2) + 1;
        v11 = (float *)(*v5 + 4);
        v12 = (float *)(*v5 + 16);
        v7 = 4 * v10;
        do
        {
          v13 = v11[1] * v3[2] + *(v11 - 1) * *v3 + v3[1] * *v11 + v3[3];
          if ( v13 >= v8 )
            v8 = v13;
          if ( v13 <= v9 )
            v9 = v13;
          v14 = v11[2] * *v3 + v12[1] * v3[2] + v3[1] * *v12 + v3[3];
          if ( v14 >= v8 )
            v8 = v14;
          if ( v14 <= v9 )
            v9 = v14;
          v15 = v12[3] * v3[1] + v11[5] * *v3 + v12[4] * v3[2] + v3[3];
          if ( v15 >= v8 )
            v8 = v15;
          if ( v15 <= v9 )
            v9 = v15;
          v16 = v12[6] * v3[1] + v11[8] * *v3 + v12[7] * v3[2] + v3[3];
          if ( v16 >= v8 )
            v8 = v16;
          if ( v16 <= v9 )
            v9 = v16;
          v11 += 12;
          v12 += 12;
          --v10;
        }
        while ( v10 );
      }
      v6 = a2[1];
      if ( v7 < v35 )
      {
        v17 = (float *)(*v5 + 12 * v7);
        v18 = v35 - v7;
        do
        {
          v19 = v3[2] * v17[2] + v3[1] * v17[1] + *v17 * *v3 + v3[3];
          if ( v19 >= v8 )
            v8 = v19;
          if ( v19 <= v9 )
            v9 = v19;
          v17 += 3;
          --v18;
        }
        while ( v18 );
      }
      v20 = v8 - v9;
      if ( v20 < flt_10056870 )
        v20 = 1.0;
      v21 = v8 / v20;
      if ( v21 > v4 )
      {
        v33 = 0;
        v38 = v5[7];
        if ( v38 > 0 )
        {
          v22 = (float *)v5[6];
          v23 = v37;
          while ( 1 )
          {
            if ( *v22 == *v3 && v22[1] == v3[1] && v22[2] == v3[2] && v22[3] == v3[3] )
            {
              v25 = v23;
              v26 = 0.0;
            }
            else if ( v22[2] * v3[2] + v22[1] * v3[1] + *v3 * *v22 <= v23 || (v27 = v5[4], v28 = 0, v27 <= 0) )
            {
LABEL_47:
              v31 = v23;
              v26 = v21;
              v25 = v31;
            }
            else
            {
              v29 = (unsigned __int8 *)(v5[3] + 2);
              while ( 1 )
              {
                if ( v29[1] == v33 )
                {
                  v30 = (float *)(*a2 + 12 * *v29);
                  if ( v30[1] * v3[1] + v30[2] * v3[2] + *v3 * *v30 + v3[3] < 0.0 )
                    break;
                }
                ++v28;
                v29 += 4;
                if ( v28 >= v27 )
                {
                  v5 = a2;
                  goto LABEL_47;
                }
              }
              v5 = a2;
              v25 = v23;
              v26 = 0.0;
            }
            v22 += 4;
            if ( ++v33 >= v38 )
              break;
            v24 = v26;
            v23 = v25;
            v21 = v24;
          }
          v6 = a2[1];
          v21 = v26;
        }
        if ( v21 > v4 )
        {
          v4 = v21;
          v36 = v34;
        }
      }
      v3 += 4;
      ++v34;
    }
    while ( v34 < a1 );
  }
  if ( v4 <= a3 )
    return -1;
  else
    return v36;
}
