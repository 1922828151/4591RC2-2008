/*
 * func-name: sub_100FF160
 * func-address: 0x100ff160
 * callers: 0x100ff7f0
 * callees: 0x100fdc70, 0x100fdfe0, 0x100fe540, 0x100fe670, 0x100febf0, 0x100fedd0, 0x100ff0a0, 0x10126510, 0x101a2500, 0x101a2522
 */

void __thiscall sub_100FF160(int this, int a2, char *a3, unsigned int a4, void *a5)
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
  char *v20; // [esp-20h] [ebp-78h]
  char *v21; // [esp-Ch] [ebp-64h]
  int v22; // [esp-8h] [ebp-60h]
  int v23; // [esp+0h] [ebp-58h] BYREF
  char v24[60]; // [esp+Ch] [ebp-4Ch] BYREF
  int *v25; // [esp+48h] [ebp-10h]
  int v26; // [esp+54h] [ebp-4h]
  int v27; // [esp+68h] [ebp+10h]
  char *v28; // [esp+6Ch] [ebp+14h]
  char *v29; // [esp+6Ch] [ebp+14h]

  qmemcpy(v24, a5, sizeof(v24));
  v6 = *(_DWORD *)(this + 4);
  v25 = &v23;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 60;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 60;
    else
      v9 = 0;
    if ( 71582788 - v9 < a4 )
      sub_100FDC70();
    if ( *(_DWORD *)(this + 4) )
      v10 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 60;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v17 = *(char **)(this + 8);
      v27 = (int)v17;
      if ( (v17 - a3) / 60 >= a4 )
      {
        v18 = 60 * a4;
        v19 = &v17[-60 * a4];
        v29 = (char *)v18;
        *(_DWORD *)(this + 8) = sub_100FF0A0(&v17[-v18], v17, v17);
        sub_100FEBF0(a3, v19, v27);
        sub_100FE670(a3, &v29[(_DWORD)a3], v24);
      }
      else
      {
        sub_100FF0A0(a3, v17, &a3[60 * a4]);
        v22 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 60;
        v21 = *(char **)(this + 8);
        v26 = 2;
        sub_100FEDD0(v21, v22, v24);
        *(_DWORD *)(this + 8) += 60 * a4;
        sub_100FE670(a3, (char *)(*(_DWORD *)(this + 8) - 60 * a4), v24);
      }
    }
    else
    {
      if ( 71582788 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( *(_DWORD *)(this + 4) )
        v12 = (*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 60;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_10126510(this);
      v28 = (char *)sub_100FDFE0(v11);
      v20 = *(char **)(this + 4);
      v26 = 0;
      v13 = sub_100FE540(v20, a3, v28);
      v14 = sub_100FEDD0(v13, a4, v24);
      sub_100FE540(a3, *(char **)(this + 8), v14);
      v15 = *(_DWORD *)(this + 4);
      if ( v15 )
        v15 = (*(_DWORD *)(this + 8) - v15) / 60;
      v16 = v15 + a4;
      if ( *(_DWORD *)(this + 4) )
        operator delete(*(void **)(this + 4));
      *(_DWORD *)(this + 12) = &v28[60 * v11];
      *(_DWORD *)(this + 8) = &v28[60 * v16];
      *(_DWORD *)(this + 4) = v28;
    }
  }
}
