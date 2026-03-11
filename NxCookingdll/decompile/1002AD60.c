/*
 * func-name: sub_1002AD60
 * func-address: 0x1002ad60
 * callers: 0x1002af60
 * callees: 0x10027110, 0x10029dd0, 0x1002acb0
 */

char __usercall sub_1002AD60@<al>(int a1@<ebx>, int a2@<ebp>, int a3, float *a4, int a5, int a6, float a7)
{
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  float v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  int v16; // ecx
  int *v17; // edi
  int v18; // ebx
  int v19; // ebp
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // edx
  bool v23; // zf
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  int v27; // [esp+14h] [ebp-30h]
  int v28; // [esp+18h] [ebp-2Ch] BYREF
  int v29; // [esp+1Ch] [ebp-28h]
  int v30; // [esp+20h] [ebp-24h] BYREF
  int v31; // [esp+24h] [ebp-20h] BYREF
  int v32; // [esp+28h] [ebp-1Ch] BYREF
  int v33; // [esp+2Ch] [ebp-18h] BYREF
  int v34; // [esp+30h] [ebp-14h]
  int v35; // [esp+34h] [ebp-10h]
  int v36; // [esp+40h] [ebp-4h]

  if ( a7 == 0.0 )
  {
    if ( sub_10029DD0(a1, a2, a3, (int)a4, a3, &v28, (int *)&a7, a6) )
    {
      v8 = 3 * LODWORD(a7);
      *(float *)(a5 + 8) = a7;
      v9 = v28;
      *(_DWORD *)(a5 + 12) = a4;
      *(_DWORD *)a5 = a3;
      *(_DWORD *)(a5 + 4) = v8;
      *(_DWORD *)(a5 + 16) = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v10 = 0;
    if ( sub_1002ACB0(a6, a3, a4, 35, (int)&v31, &v32, &a7, &v30, a7, 120.0) )
    {
      v11 = a7;
      v12 = *(_DWORD *)LODWORD(a7);
      v13 = 0;
      v34 = 0;
      v35 = 0;
      v33 = 0;
      v14 = 1;
      if ( v12 > 0 )
      {
        v28 = v12;
        do
        {
          v15 = *(_DWORD *)(LODWORD(v11) + 4 * v14);
          v16 = v14 + 1;
          v30 = v15;
          v29 = v16;
          if ( v15 > 2 )
          {
            v17 = (int *)(LODWORD(v11) + 4 * v16 + 8);
            v27 = v15 - 2;
            do
            {
              v18 = *(_DWORD *)(LODWORD(v11) + 4 * v16);
              v19 = *(v17 - 1);
              v36 = *v17;
              if ( v10 == v13 )
              {
                v20 = 2 * v13;
                if ( !v13 )
                  v20 = 16;
                sub_10027110(&v33, v20);
                v10 = v34;
                v16 = v29;
              }
              v21 = (_DWORD *)(v33 + 12 * v10);
              v22 = v36;
              *v21 = v18;
              v21[1] = v19;
              ++v10;
              v21[2] = v22;
              v11 = a7;
              v13 = v35;
              ++v17;
              v23 = v27-- == 1;
              v34 = v10;
            }
            while ( !v23 );
            v15 = v30;
          }
          v14 = v15 + v16;
          --v28;
        }
        while ( v28 );
      }
      (*(void (__thiscall **)(int, float))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, COERCE_FLOAT(LODWORD(v11)));
      v24 = v31;
      *(_DWORD *)(a5 + 4) = 3 * v10;
      v25 = v32;
      *(_DWORD *)(a5 + 12) = v24;
      v26 = v33;
      *(_DWORD *)(a5 + 8) = v10;
      *(_DWORD *)a5 = v25;
      *(_DWORD *)(a5 + 16) = v26;
      if ( dword_1005B470 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, dword_1005B470);
        dword_1005B470 = 0;
      }
      dword_1005B478 = 0;
      dword_1005B474 = 0;
      return 1;
    }
    else
    {
      if ( dword_1005B470 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, dword_1005B470);
        dword_1005B470 = 0;
      }
      dword_1005B478 = 0;
      dword_1005B474 = 0;
      return 0;
    }
  }
}
