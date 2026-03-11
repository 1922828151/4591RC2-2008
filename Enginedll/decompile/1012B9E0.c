/*
 * func-name: sub_1012B9E0
 * func-address: 0x1012b9e0
 * callers: 0x1012bf70, 0x10140250
 * callees: 0x100ec7b0, 0x100ec930, 0x100eca60, 0x1012b050, 0x1012b360, 0x1012b410, 0x1012b4e0, 0x1012b830, 0x101a2500, 0x101a2522
 */

void __thiscall sub_1012B9E0(int this, int a2, char *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  char *v13; // eax
  char *v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  char *v17; // ecx
  int v18; // eax
  char *v19; // esi
  char *v20; // [esp-20h] [ebp-74h]
  int v21; // [esp-Ch] [ebp-60h]
  int v22; // [esp-8h] [ebp-5Ch]
  int v23; // [esp+0h] [ebp-54h] BYREF
  _BYTE v24[56]; // [esp+Ch] [ebp-48h] BYREF
  int *v25; // [esp+44h] [ebp-10h]
  int v26; // [esp+50h] [ebp-4h]
  int v27; // [esp+64h] [ebp+10h]
  char *v28; // [esp+68h] [ebp+14h]
  char *v29; // [esp+68h] [ebp+14h]

  qmemcpy(v24, a5, sizeof(v24));
  v6 = *(_DWORD *)(this + 4);
  v25 = &v23;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 56;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 56;
    else
      v9 = 0;
    if ( 76695844 - v9 < a4 )
      sub_1012B050();
    if ( *(_DWORD *)(this + 4) )
      v10 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 56;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v17 = *(char **)(this + 8);
      v27 = (int)v17;
      if ( (v17 - a3) / 56 >= a4 )
      {
        v18 = 56 * a4;
        v19 = &v17[-56 * a4];
        v29 = (char *)v18;
        *(_DWORD *)(this + 8) = sub_1012B830(&v17[-v18], v17, v17);
        sub_1012B4E0(a3, v19, v27);
        sub_1012B410(a3, &v29[(_DWORD)a3], v24);
      }
      else
      {
        sub_1012B830(a3, v17, &a3[56 * a4]);
        v22 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 56;
        v21 = *(_DWORD *)(this + 8);
        v26 = 2;
        sub_100ECA60(v21, v22, (int)v24);
        *(_DWORD *)(this + 8) += 56 * a4;
        sub_1012B410(a3, (char *)(*(_DWORD *)(this + 8) - 56 * a4), v24);
      }
    }
    else
    {
      if ( 76695844 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( *(_DWORD *)(this + 4) )
        v12 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 56;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_100EC7B0((_DWORD *)this);
      v28 = (char *)sub_100EC930(v11);
      v20 = *(char **)(this + 4);
      v26 = 0;
      v13 = sub_1012B360(v20, a3, v28);
      v14 = (char *)sub_100ECA60((int)v13, a4, (int)v24);
      sub_1012B360(a3, *(char **)(this + 8), v14);
      v15 = *(_DWORD *)(this + 4);
      if ( v15 )
        v15 = (*(_DWORD *)(this + 8) - v15) / 56;
      v16 = v15 + a4;
      if ( *(_DWORD *)(this + 4) )
        operator delete(*(void **)(this + 4));
      *(_DWORD *)(this + 12) = &v28[56 * v11];
      *(_DWORD *)(this + 8) = &v28[56 * v16];
      *(_DWORD *)(this + 4) = v28;
    }
  }
}
