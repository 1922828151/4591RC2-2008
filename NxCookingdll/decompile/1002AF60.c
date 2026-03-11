/*
 * func-name: sub_1002AF60
 * func-address: 0x1002af60
 * callers: 0x10024900
 * callees: 0x100261f0, 0x100269a0, 0x1002ad60, 0x10035300
 */

int __userpurge sub_1002AF60@<eax>(int a1, int a2, int a3)
{
  unsigned int v3; // eax
  float *v4; // esi
  int v5; // edx
  double v6; // st7
  float *v7; // eax
  double v8; // st6
  int v9; // ecx
  double v10; // st5
  double v11; // st4
  double v12; // st7
  int v13; // esi
  int v14; // eax
  int v15; // ebp
  int v16; // edi
  bool v17; // zf
  int v18; // edi
  size_t v19; // edi
  int v20; // eax
  int v21; // ecx
  size_t v22; // ebp
  int v23; // eax
  int v24; // ecx
  _DWORD *v25; // esi
  _DWORD *v26; // eax
  size_t v27; // edi
  int v28; // eax
  int v29; // ebx
  int v30; // ebp
  int v31; // eax
  void *v32; // ecx
  _DWORD *v33; // esi
  _DWORD *v34; // eax
  float *v35; // esi
  unsigned int v37; // [esp-4h] [ebp-5Ch]
  int v38; // [esp+0h] [ebp-58h]
  int v39; // [esp+4h] [ebp-54h]
  void *v40; // [esp+Ch] [ebp-4Ch]
  float v41; // [esp+10h] [ebp-48h]
  void *v42; // [esp+10h] [ebp-48h]
  float v43; // [esp+14h] [ebp-44h]
  int v44; // [esp+28h] [ebp-30h] BYREF
  float *v45; // [esp+2Ch] [ebp-2Ch] BYREF
  void *Src; // [esp+30h] [ebp-28h]
  int v47; // [esp+34h] [ebp-24h]
  int v48[3]; // [esp+38h] [ebp-20h] BYREF
  _DWORD v49[2]; // [esp+44h] [ebp-14h] BYREF
  int v50; // [esp+4Ch] [ebp-Ch]
  float *v51; // [esp+50h] [ebp-8h]
  void *v52; // [esp+54h] [ebp-4h]
  int retaddr; // [esp+58h] [ebp+0h]

  v3 = *(_DWORD *)(a1 + 4);
  v47 = 1;
  v49[0] = 0;
  v49[1] = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( v3 < 8 )
    v3 = 8;
  v4 = (float *)(*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  12 * v3,
                  261);
  v41 = *(float *)(a1 + 16);
  v39 = *(_DWORD *)(a1 + 12);
  v38 = *(_DWORD *)(a1 + 8);
  v37 = *(_DWORD *)(a1 + 4);
  v45 = v4;
  if ( sub_100261F0(v37, v38, v39, &v44, (int)v4, v41, (float *)v48) )
  {
    v5 = v44;
    if ( v44 )
    {
      v6 = *(float *)&v48[2];
      v7 = v4 + 2;
      v8 = *(float *)&v48[1];
      v9 = v44;
      v10 = *(float *)v48;
      do
      {
        v11 = *(v7 - 2);
        v7 += 3;
        --v9;
        *(v7 - 5) = v11 * v10;
        *(v7 - 4) = v8 * *(v7 - 4);
        *(v7 - 3) = v6 * *(v7 - 3);
      }
      while ( v9 );
    }
    v12 = 0.0;
    if ( (*(_BYTE *)a1 & 4) != 0 )
      v12 = *(float *)(a1 + 20);
    v43 = v12;
    if ( sub_1002AD60(a1, 0, v5, v4, (int)v49, *(_DWORD *)(a1 + 24), v43) )
    {
      v13 = v49[0];
      v14 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 12 * v49[0], 261);
      v15 = v50;
      v47 = v14;
      sub_100269A0((int)v52, v13, v14, (int *)&v45, retaddr, v50);
      v16 = (int)v45;
      v17 = (*(_BYTE *)a1 & 1) == 0;
      *(_DWORD *)(a3 + 4) = v45;
      v48[0] = 0;
      v18 = 3 * v16;
      if ( v17 )
      {
        *(_BYTE *)a3 = 1;
        v27 = 4 * v18;
        v28 = (*(int (__thiscall **)(int, size_t))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v27);
        v29 = v50;
        *(_DWORD *)(a3 + 8) = v28;
        v30 = v29 + v15;
        *(_DWORD *)(a3 + 12) = v29;
        *(_DWORD *)(a3 + 16) = v30;
        v31 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * v30, 261);
        v32 = *(void **)(a3 + 8);
        *(_DWORD *)(a3 + 20) = v31;
        memcpy_0(v32, Src, v27);
        v33 = *(_DWORD **)(a3 + 20);
        if ( v29 )
        {
          v34 = (char *)v52 + 8;
          do
          {
            *v33 = 3;
            if ( (*(_BYTE *)a1 & 2) != 0 )
            {
              v33[1] = *v34;
              v33[2] = *(v34 - 1);
              v33[3] = *(v34 - 2);
            }
            else
            {
              v33[1] = *(v34 - 2);
              v33[2] = *(v34 - 1);
              v33[3] = *v34;
            }
            v33 += 4;
            v34 += 3;
            --v29;
          }
          while ( v29 );
        }
      }
      else
      {
        *(_BYTE *)a3 = 0;
        v19 = 4 * v18;
        v20 = (*(int (__thiscall **)(int, size_t))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v19);
        v21 = v50;
        *(_DWORD *)(a3 + 16) = v15;
        *(_DWORD *)(a3 + 8) = v20;
        *(_DWORD *)(a3 + 12) = v21;
        v22 = 4 * v15;
        v23 = (*(int (__thiscall **)(int, size_t, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v22, 261);
        v42 = Src;
        v40 = *(void **)(a3 + 8);
        *(_DWORD *)(a3 + 20) = v23;
        memcpy_0(v40, v42, v19);
        if ( (*(_BYTE *)a1 & 2) != 0 )
        {
          v24 = v50;
          v25 = *(_DWORD **)(a3 + 20);
          if ( v50 )
          {
            v26 = (char *)v52 + 4;
            do
            {
              *v25 = v26[1];
              v25[1] = *v26;
              v25[2] = *(v26 - 1);
              v25 += 3;
              v26 += 3;
              --v24;
            }
            while ( v24 );
          }
        }
        else
        {
          memcpy_0(*(void **)(a3 + 20), v52, v22);
        }
      }
      v35 = v51;
      if ( v51 == v45 )
        v45 = 0;
      if ( v52 )
        (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v52);
      if ( v35 )
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v35);
      if ( Src )
        (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, Src);
      v4 = v45;
    }
  }
  if ( v4 )
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v4);
  return v47;
}
