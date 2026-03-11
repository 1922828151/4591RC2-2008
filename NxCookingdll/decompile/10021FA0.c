/*
 * func-name: sub_10021FA0
 * func-address: 0x10021fa0
 * callers: 0x1001e200
 * callees: 0x1000c970, 0x10014910, 0x10015660, 0x1001fca0, 0x1001fda0, 0x10020380, 0x10020d70, 0x10020e00, 0x10025ac0, 0x10035300
 */

char __thiscall sub_10021FA0(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  int *v6; // edi
  int (__stdcall ***v7)(size_t, int); // eax
  int v8; // edx
  int (__stdcall ***v10)(size_t, int); // eax
  int (__stdcall ***v11)(size_t, int); // eax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int *v15; // esi
  _DWORD *v16; // ebx
  int (__stdcall ***v17)(size_t, int); // eax
  int (__stdcall ***v18)(size_t, int); // eax
  int v19; // ecx
  int (__stdcall ***v20)(size_t, int); // eax
  _DWORD *v21; // ecx
  int v22; // edx
  int v23; // esi
  _DWORD *i; // eax
  int (__stdcall ***v25)(size_t, int); // eax
  int v26; // edx
  unsigned int v27; // edi
  int *v28; // eax
  char *v29; // ebx
  int v30; // esi
  int v31; // edi
  int v32; // edx
  size_t v33; // ecx
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  double v37; // st7
  float *v38; // eax
  int v39; // edx
  _DWORD *v40; // eax
  int v41; // esi
  float *v42; // ebx
  float *v43; // ecx
  float *v44; // eax
  double v45; // st5
  double v46; // st4
  double v47; // st5
  float *v48; // ecx
  int v49; // esi
  unsigned int v50; // eax
  int v51; // edx
  _DWORD *v52; // ecx
  _DWORD *v53; // edi
  _DWORD *v54; // eax
  int *v55; // edx
  int v56; // ebx
  float v57[3]; // [esp+30h] [ebp-Ch] BYREF

  v6 = a2;
  *(_DWORD *)(this[1] + 12) = *a2;
  *(_DWORD *)(this[1] + 4) = v6[2];
  v7 = sub_10014910();
  *(_DWORD *)(this[1] + 16) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v7)(
                                v7,
                                12 * *(_DWORD *)(this[1] + 12),
                                47);
  v8 = this[1];
  if ( !*(_DWORD *)(v8 + 16) )
    return 0;
  memcpy_0(*(void **)(this[1] + 16), (const void *)v6[1], 12 * *(_DWORD *)(v8 + 12));
  if ( v6[4] )
  {
    v10 = sub_10014910();
    *(_DWORD *)(this[1] + 8) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v10)(
                                 v10,
                                 12 * *(_DWORD *)(this[1] + 4),
                                 0);
    if ( !*(_DWORD *)(this[1] + 8) )
      return 0;
  }
  if ( v6[3] )
  {
    v11 = sub_10014910();
    *(_DWORD *)(this[1] + 8) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v11)(
                                 v11,
                                 12 * *(_DWORD *)(this[1] + 4),
                                 0);
    v12 = this[1];
    if ( !*(_DWORD *)(v12 + 8) )
      return 0;
    v13 = 0;
    if ( *(_DWORD *)(v12 + 4) )
    {
      v14 = 0;
      do
      {
        *(_DWORD *)(v14 + *(_DWORD *)(this[1] + 8)) = *(_DWORD *)(v14 + v6[3]);
        *(_DWORD *)(*(_DWORD *)(this[1] + 8) + v14 + 4) = *(_DWORD *)(v6[3] + v14 + 4);
        *(_DWORD *)(*(_DWORD *)(this[1] + 8) + v14 + 8) = *(_DWORD *)(v6[3] + v14 + 8);
        ++v13;
        v14 += 12;
      }
      while ( v13 < *(_DWORD *)(this[1] + 4) );
    }
  }
  v15 = (int *)a3;
  if ( a3 && (v16 = (_DWORD *)a4) != 0 )
  {
    *(_DWORD *)(this[1] + 36) = 0;
    if ( *(_DWORD *)(this[1] + 44) )
    {
      v17 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v17)[3])(v17, *(_DWORD *)(this[1] + 44));
      *(_DWORD *)(this[1] + 44) = 0;
    }
    if ( *(_DWORD *)(this[1] + 40) )
    {
      v18 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v18)[3])(v18, *(_DWORD *)(this[1] + 40));
      *(_DWORD *)(this[1] + 40) = 0;
    }
    v19 = this[1];
    a3 = *v15;
    *(_DWORD *)(v19 + 36) = a3;
    v20 = sub_10014910();
    *(_DWORD *)(this[1] + 40) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v20)(
                                  v20,
                                  36 * *(_DWORD *)(this[1] + 36),
                                  6);
    v21 = (_DWORD *)this[1];
    if ( v21[10] )
    {
      sub_1000C970(v21, v57);
      v22 = a3;
      v23 = 0;
      for ( i = v16; v22; i += *i + 1 )
      {
        v23 += *i;
        --v22;
      }
      v25 = sub_10014910();
      *(_DWORD *)(this[1] + 44) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v25)(v25, v23, 49);
      v26 = this[1];
      if ( *(_DWORD *)(v26 + 44) )
      {
        v27 = a3;
        v28 = v16;
        v29 = *(char **)(v26 + 44);
        if ( a3 )
        {
          v30 = 0;
          a4 = a3;
          while ( 1 )
          {
            *(_DWORD *)(*(_DWORD *)(this[1] + 40) + v30 + 4) = v29;
            v31 = *v28;
            v32 = *(_DWORD *)(this[1] + 40);
            v33 = 4 * *v28;
            a2 = v28 + 1;
            *(_WORD *)(v30 + v32) = v31;
            memcpy_0(v29, v28 + 1, v33);
            sub_10015660(
              (float *)(*(_DWORD *)(this[1] + 40) + v30 + 12),
              v31,
              (unsigned __int8 *)v29,
              *(_DWORD *)(this[1] + 16));
            v34 = *(_DWORD *)(this[1] + 40);
            if ( *(float *)(v34 + v30 + 16) * v57[1]
               + *(float *)(v34 + v30 + 20) * v57[2]
               + *(float *)(v34 + v30 + 12) * v57[0]
               + *(float *)(v34 + v30 + 24) > 0.0 )
            {
              sub_10025AC0(v31, v29);
              v35 = this[1];
              v36 = *(_DWORD *)(v35 + 40);
              v37 = *(float *)(v36 + v30 + 12);
              v38 = (float *)(v36 + v30 + 12);
              *v38 = -v37;
              v38[1] = -v38[1];
              v38[2] = -v38[2];
              *(float *)(*(_DWORD *)(v35 + 40) + v30 + 24) = -*(float *)(*(_DWORD *)(v35 + 40) + v30 + 24);
            }
            a2 += v31;
            v29 += v31;
            v30 += 36;
            if ( !--a4 )
              break;
            v28 = a2;
          }
          v27 = a3;
          if ( a3 )
          {
            v39 = 0;
            a2 = (int *)a3;
            do
            {
              v40 = (_DWORD *)this[1];
              v41 = v40[3];
              v42 = (float *)v40[4];
              *(float *)(v40[10] + v39 + 28) = 3.4028235e38;
              *(float *)(*(_DWORD *)(this[1] + 40) + v39 + 32) = -3.4028235e38;
              while ( v41 )
              {
                v43 = v42;
                v44 = (float *)(v39 + *(_DWORD *)(this[1] + 40));
                v45 = v42[2] * v44[5];
                --v41;
                v46 = v42[1];
                v42 += 3;
                v47 = v45 + v46 * v44[4] + v44[3] * *v43;
                if ( v47 < v44[7] )
                  *(float *)(*(_DWORD *)(this[1] + 40) + v39 + 28) = v47;
                v48 = (float *)(*(_DWORD *)(this[1] + 40) + v39 + 32);
                if ( v47 > *v48 )
                  *v48 = v47;
              }
              v39 += 36;
              a2 = (int *)((char *)a2 - 1);
            }
            while ( a2 );
          }
        }
        v49 = a5;
        if ( a5 )
        {
          v50 = 0;
          if ( v27 )
          {
            v51 = 0;
            do
            {
              if ( *(_BYTE *)(v50 + v49) )
                *(_WORD *)(*(_DWORD *)(this[1] + 40) + v51 + 2) |= 1u;
              ++v50;
              v51 += 36;
            }
            while ( v50 < v27 );
          }
        }
        goto LABEL_42;
      }
    }
  }
  else
  {
    v52 = (_DWORD *)this[1];
    v53 = (_DWORD *)v52[2];
    sub_10020D70(v52 + 1, v52[4], v53, v52 + 3);
    v54 = (_DWORD *)this[1];
    v55 = (int *)v54[1];
    v56 = v54[4];
    a3 = v54[3];
    a2 = v55;
    if ( sub_1001FCA0((unsigned int *)&a2, v53, 0) && sub_1001FDA0(a3, v56, (int)a2, v53, 0) && sub_10020E00(this) )
    {
LABEL_42:
      sub_1000C970((_DWORD *)this[1], (float *)(this[1] + 24));
      return sub_10020380(this);
    }
  }
  return 0;
}
