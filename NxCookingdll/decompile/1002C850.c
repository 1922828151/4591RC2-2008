/*
 * func-name: sub_1002C850
 * func-address: 0x1002c850
 * callers: 0x1002db30
 * callees: 0x10012f90, 0x10014910, 0x10034f10
 */

char __thiscall sub_1002C850(int this)
{
  int v2; // edi
  int v3; // ebx
  unsigned int v4; // ebp
  float *v5; // edi
  int v6; // ecx
  float *v7; // eax
  float *v8; // edx
  double v9; // st7
  double v10; // st6
  double v11; // st5
  int v12; // ecx
  double v13; // st4
  int v14; // ecx
  double v15; // st4
  double v16; // st3
  double v17; // st2
  float *v18; // ecx
  double v19; // st2
  long double v20; // st7
  long double v21; // st7
  int (__stdcall ***v22)(size_t, int); // eax
  int v23; // eax
  int (__stdcall ***v24)(size_t, int); // eax
  int v25; // eax
  unsigned int v26; // edx
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned int i; // eax
  int *v32; // ecx
  int v33; // edx
  int (__stdcall ***v34)(size_t, int); // eax
  int v35; // eax
  unsigned int v36; // eax
  _DWORD *v37; // ecx
  int v38; // edx
  int v39; // ebp
  int v40; // edi
  unsigned int j; // eax
  int v42; // ecx
  int v43; // edx
  int *v44; // ecx
  int v46; // [esp+18h] [ebp-10h]
  int v47; // [esp+18h] [ebp-10h]
  float v48; // [esp+1Ch] [ebp-Ch]
  float v49; // [esp+20h] [ebp-8h]
  float v50; // [esp+24h] [ebp-4h]

  if ( !*(_BYTE *)(this + 283) && !*(_BYTE *)(this + 282) )
    return 1;
  if ( *(_DWORD *)(this + 212) )
  {
    if ( *(_DWORD *)(this + 228) )
    {
      if ( *(_DWORD *)(this + 252) )
      {
        v2 = *(_DWORD *)(this + 248);
        v46 = v2;
        if ( v2 )
        {
          v3 = *(_DWORD *)(this + 236);
          if ( v3 )
          {
            v4 = 0;
            if ( *(_DWORD *)(this + 224) )
            {
              v5 = (float *)(v2 + 40);
              do
              {
                v6 = *(_DWORD *)(this + 252);
                v7 = (float *)(v3 + 12 * *(_DWORD *)(v6 + 12 * *((_DWORD *)v5 - 6)));
                v8 = (float *)(v3 + 12 * *(_DWORD *)(v6 + 12 * *((_DWORD *)v5 - 5)));
                v9 = *v8 - *v7;
                v10 = v8[1] - v7[1];
                v11 = v8[2] - v7[2];
                v12 = 3 * *(_DWORD *)(v6 + 12 * *((_DWORD *)v5 - 7));
                v13 = *(float *)(v3 + 4 * v12);
                v14 = v3 + 4 * v12;
                v15 = v13 - *v7;
                v16 = *(float *)(v14 + 4) - v7[1];
                v17 = *(float *)(v14 + 8);
                v18 = v5 - 2;
                v19 = v17 - v7[2];
                v48 = v19 * v10 - v16 * v11;
                *v18 = v48;
                v49 = v11 * v15 - v19 * v9;
                v18[1] = v49;
                v50 = v9 * v16 - v10 * v15;
                *v5 = v50;
                v20 = *v5 * *v5 + *(v5 - 2) * *(v5 - 2) + *(v5 - 1) * *(v5 - 1);
                if ( 0.0 != v20 )
                {
                  v21 = 1.0 / sqrt(v20);
                  *v18 = *v18 * v21;
                  *(v5 - 1) = v21 * *(v5 - 1);
                  *v5 = v21 * *v5;
                }
                if ( *(_BYTE *)(this + 283) )
                  sub_10012F90((_DWORD *)(this + 144), v5 - 2);
                ++v4;
                v5 += 12;
              }
              while ( v4 < *(_DWORD *)(this + 224) );
            }
            v22 = sub_10014910();
            v23 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v22)(
                    v22,
                    4 * *(_DWORD *)(this + 212),
                    0);
            *(_DWORD *)(this + 264) = v23;
            if ( v23 )
            {
              v24 = sub_10014910();
              v25 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v24)(
                      v24,
                      4 * *(_DWORD *)(this + 212),
                      0);
              *(_DWORD *)(this + 268) = v25;
              if ( v25 )
              {
                memset(*(void **)(this + 264), 0, 4 * *(_DWORD *)(this + 212));
                memset(*(void **)(this + 268), 0, 4 * *(_DWORD *)(this + 212));
                v26 = 0;
                if ( *(_DWORD *)(this + 224) )
                {
                  v27 = (_DWORD *)(v46 + 16);
                  do
                  {
                    v28 = *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(v27 - 1));
                    ++*(_DWORD *)(*(_DWORD *)(this + 264) + 4 * v28);
                    v29 = *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *v27);
                    ++*(_DWORD *)(*(_DWORD *)(this + 264) + 4 * v29);
                    v30 = *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * v27[1]);
                    ++*(_DWORD *)(*(_DWORD *)(this + 264) + 4 * v30);
                    ++v26;
                    v27 += 12;
                  }
                  while ( v26 < *(_DWORD *)(this + 224) );
                }
                for ( i = 1; i < *(_DWORD *)(this + 212); *v32 = v33 )
                {
                  v32 = (int *)(*(_DWORD *)(this + 268) + 4 * i);
                  v33 = *(v32 - 1) + *(_DWORD *)(*(_DWORD *)(this + 264) + 4 * i++ - 4);
                }
                v34 = sub_10014910();
                v35 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v34)(
                        v34,
                        12 * *(_DWORD *)(this + 224),
                        0);
                *(_DWORD *)(this + 272) = v35;
                if ( v35 )
                {
                  v36 = 0;
                  if ( *(_DWORD *)(this + 224) )
                  {
                    v37 = (_DWORD *)(v46 + 16);
                    do
                    {
                      v38 = *(_DWORD *)(this + 252);
                      v39 = *(_DWORD *)(v38 + 12 * *v37);
                      v40 = *(_DWORD *)(v38 + 12 * *(v37 - 1));
                      v47 = *(_DWORD *)(v38 + 12 * v37[1]);
                      *(_DWORD *)(*(_DWORD *)(this + 272) + 4 * (*(_DWORD *)(*(_DWORD *)(this + 268) + 4 * v40))++) = v36;
                      *(_DWORD *)(*(_DWORD *)(this + 272) + 4 * (*(_DWORD *)(*(_DWORD *)(this + 268) + 4 * v39))++) = v36;
                      *(_DWORD *)(*(_DWORD *)(this + 272) + 4 * (*(_DWORD *)(*(_DWORD *)(this + 268) + 4 * v47))++) = v36++;
                      v37 += 12;
                    }
                    while ( v36 < *(_DWORD *)(this + 224) );
                  }
                  **(_DWORD **)(this + 268) = 0;
                  for ( j = 1; j < *(_DWORD *)(this + 212); *v44 = v43 )
                  {
                    v42 = *(_DWORD *)(this + 268);
                    v43 = *(_DWORD *)(v42 + 4 * j - 4) + *(_DWORD *)(*(_DWORD *)(this + 264) + 4 * j - 4);
                    v44 = (int *)(v42 + 4 * j++);
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
