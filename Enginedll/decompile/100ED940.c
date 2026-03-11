/*
 * func-name: sub_100ED940
 * func-address: 0x100ed940
 * callers: 0x100edf80
 * callees: 0x1003b3c0, 0x100ec790, 0x100ec830, 0x100eca00, 0x100ecc60, 0x100ed200, 0x100ed330, 0x100ed590, 0x100ed7a0, 0x100ed7c0, 0x100ed820, 0x100ed8e0, 0x101a2500, 0x101a2522
 */

void __thiscall sub_100ED940(int this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  CREControl *v12; // eax
  _DWORD *v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  _DWORD *v20; // ecx
  int v21; // edi
  CREControl *v22; // [esp-Ch] [ebp-80h]
  int v23; // [esp-8h] [ebp-7Ch]
  _DWORD *v24; // [esp-8h] [ebp-7Ch]
  int v25; // [esp+0h] [ebp-74h] BYREF
  _DWORD v26[20]; // [esp+Ch] [ebp-68h] BYREF
  int v27; // [esp+5Ch] [ebp-18h]
  int v28; // [esp+60h] [ebp-14h]
  int *v29; // [esp+64h] [ebp-10h]
  int v30; // [esp+70h] [ebp-4h]
  char *v31; // [esp+84h] [ebp+10h]
  CREControl *v32; // [esp+88h] [ebp+14h]
  void *v33; // [esp+88h] [ebp+14h]

  v29 = &v25;
  v28 = this;
  sub_100ECC60(v26, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v30 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 80;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 80;
    else
      v8 = 0;
    if ( 53687091 - v8 < a4 )
      sub_100EC830();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 80;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(_DWORD **)(this + 8);
      v33 = v20;
      if ( ((char *)v20 - a3) / 80 >= a4 )
      {
        v21 = 80 * a4;
        v31 = (char *)&v20[-20 * a4];
        *(_DWORD *)(this + 8) = sub_100ED8E0(&v20[v21 / 0xFFFFFFFC], v20, (CREControl *)v20);
        sub_100ED7C0(a3, v31, (int)v33);
        sub_100ED590(a3, &a3[v21], v26);
      }
      else
      {
        sub_100ED8E0(a3, v20, (CREControl *)&a3[80 * a4]);
        v23 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 80;
        v22 = *(CREControl **)(this + 8);
        LOBYTE(v30) = 3;
        sub_100ED820(v22, v23, v26);
        *(_DWORD *)(this + 8) += 80 * a4;
        v24 = (_DWORD *)(*(_DWORD *)(this + 8) - 80 * a4);
        v30 = 0;
        sub_100ED590(a3, v24, v26);
      }
    }
    else
    {
      if ( 53687091 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 80;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_100EC790((_DWORD *)this);
      v12 = (CREControl *)sub_1003B3C0(v10);
      v13 = *(_DWORD **)(this + 4);
      LOBYTE(v27) = 0;
      v32 = v12;
      LOBYTE(v30) = 1;
      v14 = sub_100ED330(v13, a3, v12);
      v15 = sub_100ED820(v14, a4, v26);
      v16 = *(_DWORD **)(this + 8);
      LOBYTE(v27) = 0;
      sub_100ED330(a3, v16, (CREControl *)v15);
      v17 = *(_DWORD **)(this + 4);
      v18 = 0;
      v30 = 0;
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - (int)v17) / 80;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_100ED200(v17, *(_DWORD **)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v32 + 80 * v10;
      *(_DWORD *)(this + 8) = (char *)v32 + 80 * v19;
      *(_DWORD *)(this + 4) = v32;
    }
  }
  v30 = -1;
  sub_100ECA00((int)v26);
}
