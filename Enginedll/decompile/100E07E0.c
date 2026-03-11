/*
 * func-name: sub_100E07E0
 * func-address: 0x100e07e0
 * callers: 0x100e0b00
 * callees: 0x1001a380, 0x1001ac30, 0x1001b3b0, 0x1001e7c0, 0x100208d0, 0x100e03b0, 0x100e0470, 0x100e0520, 0x101a2500, 0x101a2522
 */

void __thiscall sub_100E07E0(int this, int a2, char *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  char *v12; // eax
  char *v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // esi
  char *v17; // ecx
  int v18; // esi
  char *v19; // [esp-20h] [ebp-84h]
  char *v20; // [esp-Ch] [ebp-70h]
  int v21; // [esp-8h] [ebp-6Ch]
  int v22; // [esp+0h] [ebp-64h] BYREF
  char v23[72]; // [esp+Ch] [ebp-58h] BYREF
  int *v24; // [esp+54h] [ebp-10h]
  int v25; // [esp+60h] [ebp-4h]
  char *v26; // [esp+74h] [ebp+10h]
  char *v27; // [esp+78h] [ebp+14h]
  char *v28; // [esp+78h] [ebp+14h]

  qmemcpy(v23, a5, sizeof(v23));
  v6 = *(_DWORD *)(this + 4);
  v24 = &v22;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 72;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 72;
    else
      v8 = 0;
    if ( 59652323 - v8 < a4 )
      sub_1001AC30();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 72;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v17 = *(char **)(this + 8);
      v28 = v17;
      if ( (v17 - a3) / 72 >= a4 )
      {
        v18 = 72 * a4;
        v26 = &v17[-72 * a4];
        *(_DWORD *)(this + 8) = sub_100208D0(&v17[-v18], v17, v17);
        sub_100E0470(a3, v26, (int)v28);
        sub_100E03B0(a3, &a3[v18], v23);
      }
      else
      {
        sub_100208D0(a3, v17, &a3[72 * a4]);
        v21 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 72;
        v20 = *(char **)(this + 8);
        v25 = 2;
        sub_100E0520(v20, v21, v23);
        *(_DWORD *)(this + 8) += 72 * a4;
        sub_100E03B0(a3, (char *)(*(_DWORD *)(this + 8) - 72 * a4), v23);
      }
    }
    else
    {
      if ( 59652323 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 72;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1001A380((_DWORD *)this);
      v27 = (char *)sub_1001B3B0(v10);
      v19 = *(char **)(this + 4);
      v25 = 0;
      v12 = sub_1001E7C0(v19, a3, v27);
      v13 = sub_100E0520(v12, a4, v23);
      sub_1001E7C0(a3, *(char **)(this + 8), v13);
      v14 = *(_DWORD *)(this + 4);
      if ( v14 )
        v15 = (*(_DWORD *)(this + 8) - v14) / 72;
      else
        v15 = 0;
      v16 = v15 + a4;
      if ( v14 )
        operator delete(*(void **)(this + 4));
      *(_DWORD *)(this + 12) = &v27[72 * v10];
      *(_DWORD *)(this + 8) = &v27[72 * v16];
      *(_DWORD *)(this + 4) = v27;
    }
  }
}
