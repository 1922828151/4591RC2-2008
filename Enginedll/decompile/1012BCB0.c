/*
 * func-name: sub_1012BCB0
 * func-address: 0x1012bcb0
 * callers: 0x1012c060, 0x10134c00
 * callees: 0x1012aff0, 0x1012b0d0, 0x1012b150, 0x1012b390, 0x1012b440, 0x1012b510, 0x1012b5a0, 0x1012b860, 0x101a2500, 0x101a2522
 */

void __thiscall sub_1012BCB0(int this, int a2, char *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  char *v12; // eax
  char *v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // edi
  char *v17; // ecx
  int v18; // edi
  char *v19; // [esp-20h] [ebp-ECh]
  char *v20; // [esp-Ch] [ebp-D8h]
  int v21; // [esp-8h] [ebp-D4h]
  int v22; // [esp+0h] [ebp-CCh] BYREF
  char v23[176]; // [esp+Ch] [ebp-C0h] BYREF
  int *v24; // [esp+BCh] [ebp-10h]
  int v25; // [esp+C8h] [ebp-4h]
  char *v26; // [esp+DCh] [ebp+10h]
  char *v27; // [esp+E0h] [ebp+14h]
  char *v28; // [esp+E0h] [ebp+14h]

  qmemcpy(v23, a5, sizeof(v23));
  v6 = *(_DWORD *)(this + 4);
  v24 = &v22;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 176;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 176;
    else
      v8 = 0;
    if ( 24403223 - v8 < a4 )
      sub_1012B0D0();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 176;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v17 = *(char **)(this + 8);
      v28 = v17;
      if ( (v17 - a3) / 176 >= a4 )
      {
        v18 = 176 * a4;
        v26 = &v17[-176 * a4];
        *(_DWORD *)(this + 8) = sub_1012B860(&v17[-v18], v17, v17);
        sub_1012B510(a3, v26, (int)v28);
        sub_1012B440(a3, &a3[v18], v23);
      }
      else
      {
        sub_1012B860(a3, v17, &a3[176 * a4]);
        v21 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 176;
        v20 = *(char **)(this + 8);
        v25 = 2;
        sub_1012B5A0(v20, v21, v23);
        *(_DWORD *)(this + 8) += 176 * a4;
        sub_1012B440(a3, (char *)(*(_DWORD *)(this + 8) - 176 * a4), v23);
      }
    }
    else
    {
      if ( 24403223 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 176;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1012AFF0((_DWORD *)this);
      v27 = (char *)sub_1012B150(v10);
      v19 = *(char **)(this + 4);
      v25 = 0;
      v12 = sub_1012B390(v19, a3, v27);
      v13 = sub_1012B5A0(v12, a4, v23);
      sub_1012B390(a3, *(char **)(this + 8), v13);
      v14 = *(_DWORD *)(this + 4);
      if ( v14 )
        v15 = (*(_DWORD *)(this + 8) - v14) / 176;
      else
        v15 = 0;
      v16 = v15 + a4;
      if ( v14 )
        operator delete(*(void **)(this + 4));
      *(_DWORD *)(this + 12) = &v27[176 * v10];
      *(_DWORD *)(this + 8) = &v27[176 * v16];
      *(_DWORD *)(this + 4) = v27;
    }
  }
}
