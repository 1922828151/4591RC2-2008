/*
 * func-name: sub_10078950
 * func-address: 0x10078950
 * callers: 0x10078c70
 * callees: 0x10009770, 0x1000a8b0, 0x10078530, 0x100785a0, 0x10078640, 0x10078680, 0x1007de40, 0x101a2500, 0x101a2522
 */

void __thiscall sub_10078950(int this, int a2, char *a3, unsigned int a4, void *a5)
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
  char *v22; // [esp-20h] [ebp-7Ch]
  char *v23; // [esp-Ch] [ebp-68h]
  int v24; // [esp-8h] [ebp-64h]
  int v25; // [esp+0h] [ebp-5Ch] BYREF
  char v26[64]; // [esp+Ch] [ebp-50h] BYREF
  int *v27; // [esp+4Ch] [ebp-10h]
  int v28; // [esp+58h] [ebp-4h]
  int v29; // [esp+6Ch] [ebp+10h]
  char *v30; // [esp+70h] [ebp+14h]
  char *v31; // [esp+70h] [ebp+14h]

  qmemcpy(v26, a5, sizeof(v26));
  v6 = *(_DWORD *)(this + 4);
  v27 = &v25;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) >> 6;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) >> 6;
    else
      v9 = 0;
    if ( 0x3FFFFFF - v9 < a4 )
      sub_10009770();
    if ( v6 )
      v10 = (*(_DWORD *)(this + 8) - v6) >> 6;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v19 = *(char **)(this + 8);
      v29 = (int)v19;
      if ( (v19 - a3) >> 6 >= a4 )
      {
        v20 = a4 << 6;
        v21 = &v19[-64 * a4];
        v31 = (char *)v20;
        *(_DWORD *)(this + 8) = sub_10078680(v21, v19, v19);
        sub_1007DE40(a3, v21, v29);
        sub_100785A0(a3, &v31[(_DWORD)a3], v26);
      }
      else
      {
        sub_10078680(a3, v19, &a3[64 * a4]);
        v24 = a4 - ((*(_DWORD *)(this + 8) - (int)a3) >> 6);
        v23 = *(char **)(this + 8);
        v28 = 2;
        sub_10078640(v23, v24, v26);
        *(_DWORD *)(this + 8) += a4 << 6;
        sub_100785A0(a3, (char *)(*(_DWORD *)(this + 8) - (a4 << 6)), v26);
      }
    }
    else
    {
      if ( 0x3FFFFFF - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( v6 )
        v12 = (*(_DWORD *)(this + 8) - v6) >> 6;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
      {
        if ( v6 )
          v13 = (*(_DWORD *)(this + 8) - v6) >> 6;
        else
          v13 = 0;
        v11 = a4 + v13;
      }
      v30 = (char *)sub_1000A8B0(v11);
      v22 = *(char **)(this + 4);
      v28 = 0;
      v14 = sub_10078530(v22, a3, v30);
      v15 = sub_10078640(v14, a4, v26);
      sub_10078530(a3, *(char **)(this + 8), v15);
      v16 = *(_DWORD *)(this + 4);
      if ( v16 )
        v17 = (*(_DWORD *)(this + 8) - v16) >> 6;
      else
        v17 = 0;
      v18 = v17 + a4;
      if ( v16 )
        operator delete(*(void **)(this + 4));
      *(_DWORD *)(this + 12) = &v30[64 * v11];
      *(_DWORD *)(this + 8) = &v30[64 * v18];
      *(_DWORD *)(this + 4) = v30;
    }
  }
}
