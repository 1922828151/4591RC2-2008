/*
 * func-name: sub_1007B800
 * func-address: 0x1007b800
 * callers: 0x1007bab0
 * callees: 0x1004c1d0, 0x1007b4a0, 0x1007b620, 0x1007b6d0, 0x1007b700, 0x1007b760, 0x1007b790, 0x1007b7d0, 0x101a2500, 0x101a2522
 */

void __thiscall sub_1007B800(int this, int a2, char *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // esi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  char *v13; // eax
  char *v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  char *v17; // ecx
  int v18; // edi
  char *v19; // [esp-20h] [ebp-98h]
  char *v20; // [esp-Ch] [ebp-84h]
  int v21; // [esp-8h] [ebp-80h]
  int v22; // [esp+0h] [ebp-78h] BYREF
  char v23[92]; // [esp+Ch] [ebp-6Ch] BYREF
  int *v24; // [esp+68h] [ebp-10h]
  int v25; // [esp+74h] [ebp-4h]
  int v26; // [esp+88h] [ebp+10h]
  char *v27; // [esp+8Ch] [ebp+14h]
  char *v28; // [esp+8Ch] [ebp+14h]

  qmemcpy(v23, a5, sizeof(v23));
  v6 = *(_DWORD *)(this + 4);
  v24 = &v22;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 92;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 92;
    else
      v9 = 0;
    if ( 46684427 - v9 < a4 )
      sub_1007B4A0();
    if ( *(_DWORD *)(this + 4) )
      v10 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 92;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v17 = *(char **)(this + 8);
      v26 = (int)v17;
      if ( (v17 - a3) / 92 >= a4 )
      {
        v18 = 92 * a4;
        v28 = &v17[-v18];
        *(_DWORD *)(this + 8) = sub_1007B7D0(&v17[-v18], v17, v17);
        sub_1007B760(a3, v28, v26);
        sub_1007B700(a3, &a3[v18], v23);
      }
      else
      {
        sub_1007B7D0(a3, v17, &a3[92 * a4]);
        v21 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 92;
        v20 = *(char **)(this + 8);
        v25 = 2;
        sub_1007B790(v20, v21, v23);
        *(_DWORD *)(this + 8) += 92 * a4;
        sub_1007B700(a3, (char *)(*(_DWORD *)(this + 8) - 92 * a4), v23);
      }
    }
    else
    {
      if ( 46684427 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( *(_DWORD *)(this + 4) )
        v12 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 92;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_1004C1D0((_DWORD *)this);
      v27 = (char *)sub_1007B620(v11);
      v19 = *(char **)(this + 4);
      v25 = 0;
      v13 = sub_1007B6D0(v19, a3, v27);
      v14 = sub_1007B790(v13, a4, v23);
      sub_1007B6D0(a3, *(char **)(this + 8), v14);
      v15 = *(_DWORD *)(this + 4);
      if ( v15 )
        v15 = (*(_DWORD *)(this + 8) - v15) / 92;
      v16 = v15 + a4;
      if ( *(_DWORD *)(this + 4) )
        operator delete(*(void **)(this + 4));
      *(_DWORD *)(this + 12) = &v27[92 * v11];
      *(_DWORD *)(this + 8) = &v27[92 * v16];
      *(_DWORD *)(this + 4) = v27;
    }
  }
}
