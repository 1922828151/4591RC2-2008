/*
 * func-name: sub_10090820
 * func-address: 0x10090820
 * callers: 0x100910f0
 * callees: 0x1008f910, 0x1008fa90, 0x1008fc40, 0x1008ffd0, 0x100900f0, 0x10090160, 0x10090650, 0x101a2500, 0x101a2522
 */

void __thiscall sub_10090820(int this, int a2, char *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // edi
  char *v14; // eax
  char *v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // esi
  char *v19; // eax
  int v20; // ecx
  char *v21; // esi
  char *v22; // [esp-20h] [ebp-5Ch]
  char *v23; // [esp-Ch] [ebp-48h]
  int v24; // [esp-8h] [ebp-44h]
  int v25; // [esp+0h] [ebp-3Ch] BYREF
  char v26[32]; // [esp+Ch] [ebp-30h] BYREF
  int *v27; // [esp+2Ch] [ebp-10h]
  int v28; // [esp+38h] [ebp-4h]
  int v29; // [esp+4Ch] [ebp+10h]
  char *v30; // [esp+50h] [ebp+14h]
  char *v31; // [esp+50h] [ebp+14h]

  qmemcpy(v26, a5, sizeof(v26));
  v6 = *(_DWORD *)(this + 4);
  v27 = &v25;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) >> 5;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) >> 5;
    else
      v9 = 0;
    if ( 0x7FFFFFF - v9 < a4 )
      sub_1008F910();
    if ( v6 )
      v10 = (*(_DWORD *)(this + 8) - v6) >> 5;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v19 = *(char **)(this + 8);
      v29 = (int)v19;
      if ( (v19 - a3) >> 5 >= a4 )
      {
        v20 = 32 * a4;
        v21 = &v19[-32 * a4];
        v31 = (char *)v20;
        *(_DWORD *)(this + 8) = sub_10090650(v21, v19, v19);
        sub_100900F0(a3, v21, v29);
        sub_1008FFD0(a3, &v31[(_DWORD)a3], v26);
      }
      else
      {
        sub_10090650(a3, v19, &a3[32 * a4]);
        v24 = a4 - ((*(_DWORD *)(this + 8) - (int)a3) >> 5);
        v23 = *(char **)(this + 8);
        v28 = 2;
        sub_10090160(v23, v24, v26);
        *(_DWORD *)(this + 8) += 32 * a4;
        sub_1008FFD0(a3, (char *)(*(_DWORD *)(this + 8) - 32 * a4), v26);
      }
    }
    else
    {
      if ( 0x7FFFFFF - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( v6 )
        v12 = (*(_DWORD *)(this + 8) - v6) >> 5;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
      {
        if ( v6 )
          v13 = (*(_DWORD *)(this + 8) - v6) >> 5;
        else
          v13 = 0;
        v11 = a4 + v13;
      }
      v30 = (char *)sub_1008FA90(v11);
      v22 = *(char **)(this + 4);
      v28 = 0;
      v14 = sub_1008FC40(v22, a3, v30);
      v15 = sub_10090160(v14, a4, v26);
      sub_1008FC40(a3, *(char **)(this + 8), v15);
      v16 = *(_DWORD *)(this + 4);
      if ( v16 )
        v17 = (*(_DWORD *)(this + 8) - v16) >> 5;
      else
        v17 = 0;
      v18 = v17 + a4;
      if ( v16 )
        operator delete(*(void **)(this + 4));
      *(_DWORD *)(this + 12) = &v30[32 * v11];
      *(_DWORD *)(this + 8) = &v30[32 * v18];
      *(_DWORD *)(this + 4) = v30;
    }
  }
}
