/*
 * func-name: sub_100EC630
 * func-address: 0x100ec630
 * callers: 0x10015690
 * callees: 0x10001ee2, 0x10010b7c, 0x10015852, 0x102c9d50, 0x102c9e3e, 0x102ca0d8
 */

void __thiscall sub_100EC630(char *this, int a2)
{
  char *v2; // ebp
  unsigned int v3; // ebx
  bool v4; // zf
  int **v5; // eax
  int *v6; // esi
  int v7; // edi
  int v8; // esi
  void **v9; // ebp
  void *v10; // eax
  unsigned int v11; // edi
  int *v12; // esi
  void *v13; // eax
  int v14; // ecx
  int v15; // eax
  void *v16; // ecx
  _BYTE *v17; // eax
  int v18; // ecx
  char *v19; // esi
  unsigned int v20; // edi
  char *v21; // ebx
  int v22; // eax
  int *v23; // esi
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  void **v27; // eax
  void *v28; // ecx
  void **v29; // esi
  int v31; // [esp+14h] [ebp-15Ch]
  char v32[4]; // [esp+18h] [ebp-158h] BYREF
  void *v33; // [esp+1Ch] [ebp-154h]
  _DWORD v34[2]; // [esp+20h] [ebp-150h] BYREF
  int v35; // [esp+28h] [ebp-148h]
  _BYTE v36[8]; // [esp+2Ch] [ebp-144h] BYREF
  char v37; // [esp+34h] [ebp-13Ch] BYREF
  char v38; // [esp+38h] [ebp-138h] BYREF
  int v39; // [esp+16Ch] [ebp-4h]

  v2 = this;
  if ( *((_DWORD *)this + 2) >= 2u )
  {
    v3 = 0;
    v33 = (void *)sub_10015852();
    v34[0] = 0;
    v39 = 0;
    `eh vector constructor iterator'(v36, 0xCu, 26, sub_10018DDB, sub_10016996);
    v4 = *((_DWORD *)v2 + 2) == 0;
    LOBYTE(v39) = 1;
    if ( !v4 )
    {
      do
      {
        v5 = (int **)*((_DWORD *)v2 + 1);
        v6 = *v5;
        if ( *v5 == (int *)v5 )
          _invalid_parameter_noinfo();
        v7 = **((_DWORD **)v2 + 1);
        v8 = *v6;
        v9 = *(void ***)v33;
        if ( v32 != this )
        {
          sub_10010B7C(1);
          --*((_DWORD *)this + 2);
        }
        **(_DWORD **)(v7 + 4) = v8;
        **(_DWORD **)(v8 + 4) = v9;
        *(_DWORD *)v9[1] = v7;
        v10 = v9[1];
        v9[1] = *(void **)(v8 + 4);
        *(_DWORD *)(v8 + 4) = *(_DWORD *)(v7 + 4);
        *(_DWORD *)(v7 + 4) = v10;
        v11 = 0;
        if ( !v3 )
          goto LABEL_13;
        v12 = (int *)&v37;
        do
        {
          if ( !*v12 )
            break;
          sub_10001EE2((int)v32, a2);
          v13 = (void *)*(v12 - 1);
          v14 = v34[0];
          *(v12 - 1) = (int)v33;
          v33 = v13;
          v15 = *v12;
          *v12 = v14;
          ++v11;
          v12 += 3;
          v34[0] = v15;
        }
        while ( v11 < v3 );
        if ( v11 == 25 )
        {
          sub_10001EE2((int)v32, a2);
        }
        else
        {
LABEL_13:
          v16 = *(void **)&v36[12 * v11 + 4];
          v17 = &v36[12 * v11];
          *((_DWORD *)v17 + 1) = v33;
          v33 = v16;
          v18 = *((_DWORD *)v17 + 2);
          *((_DWORD *)v17 + 2) = v34[0];
          v34[0] = v18;
          if ( v11 == v3 )
            ++v3;
        }
        v2 = this;
      }
      while ( *((_DWORD *)this + 2) );
    }
    if ( v3 > 1 )
    {
      v19 = &v38;
      v20 = v3 - 1;
      do
      {
        sub_10001EE2((int)(v19 - 12), a2);
        v19 += 12;
        --v20;
      }
      while ( v20 );
    }
    v21 = (char *)&v34[3 * v3];
    v35 = **((_DWORD **)v2 + 1);
    if ( v2 != v21 )
    {
      v22 = *((_DWORD *)v21 + 2);
      v31 = v22;
      if ( v22 )
      {
        v23 = (int *)*((_DWORD *)v21 + 1);
        v24 = *v23;
        sub_10010B7C(v22);
        *((_DWORD *)v21 + 2) -= v31;
        **(_DWORD **)(v24 + 4) = v23;
        v25 = v35;
        *(_DWORD *)v23[1] = v35;
        **(_DWORD **)(v25 + 4) = v24;
        v26 = *(_DWORD *)(v25 + 4);
        *(_DWORD *)(v25 + 4) = v23[1];
        v23[1] = *(_DWORD *)(v24 + 4);
        *(_DWORD *)(v24 + 4) = v26;
      }
    }
    LOBYTE(v39) = 0;
    `eh vector destructor iterator'(v36, 0xCu, 26, sub_10016996);
    v27 = *(void ***)v33;
    *(_DWORD *)v33 = v33;
    *((_DWORD *)v33 + 1) = v33;
    v28 = v33;
    v34[0] = 0;
    if ( v27 != v33 )
    {
      do
      {
        v29 = (void **)*v27;
        operator delete(v27);
        v28 = v33;
        v27 = v29;
      }
      while ( v29 != v33 );
    }
    operator delete(v28);
  }
}
