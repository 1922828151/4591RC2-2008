/*
 * func-name: sub_1015CB30
 * func-address: 0x1015cb30
 * callers: 0x1015ce40
 * callees: 0x1003b220, 0x1003b3c0, 0x1003ba90, 0x1003c060, 0x1003c730, 0x1003c8b0, 0x100ec790, 0x1015c9c0, 0x1015ca90, 0x1015cac0, 0x1015cb00, 0x1017a0b0, 0x101a2500, 0x101a2522
 */

int __thiscall sub_1015CB30(int this, int a2, CREControl *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  CREControl *v12; // eax
  int v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  CREControl *v20; // ecx
  int v21; // edi
  CREControl *v23; // [esp-Ch] [ebp-80h]
  int v24; // [esp-8h] [ebp-7Ch]
  _DWORD *v25; // [esp-8h] [ebp-7Ch]
  int v26; // [esp+0h] [ebp-74h] BYREF
  int v27; // [esp+Ch] [ebp-68h] BYREF
  _BYTE v28[48]; // [esp+10h] [ebp-64h] BYREF
  void *v29; // [esp+40h] [ebp-34h]
  int v30; // [esp+44h] [ebp-30h]
  int v31; // [esp+48h] [ebp-2Ch]
  int v32; // [esp+5Ch] [ebp-18h]
  int v33; // [esp+60h] [ebp-14h]
  int *v34; // [esp+64h] [ebp-10h]
  int v35; // [esp+70h] [ebp-4h]
  int v36; // [esp+84h] [ebp+10h]
  CREControl *v37; // [esp+88h] [ebp+14h]
  CREControl *v38; // [esp+88h] [ebp+14h]

  v34 = &v26;
  v33 = this;
  sub_1003BA90(&v27, (int)a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v35 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 80;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 80;
    else
      v8 = 0;
    if ( 53687091 - v8 < a4 )
      sub_1003B220();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 80;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(CREControl **)(this + 8);
      v38 = v20;
      if ( (v20 - a3) / 80 >= a4 )
      {
        v21 = 80 * a4;
        v36 = (int)v20 - 80 * a4;
        *(_DWORD *)(this + 8) = sub_1015CB00((int)v20 - v21, (int)v20, v20);
        sub_1015CA90((int)a3, v36, (int)v38);
        sub_1015C9C0(a3, (CREControl *)((char *)a3 + v21), (int)&v27);
      }
      else
      {
        sub_1015CB00((int)a3, (int)v20, (CREControl *)((char *)a3 + 80 * a4));
        v24 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 80;
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v35) = 3;
        sub_1015CAC0(v23, v24, (int)&v27);
        *(_DWORD *)(this + 8) += 80 * a4;
        v25 = (_DWORD *)(*(_DWORD *)(this + 8) - 80 * a4);
        v35 = 0;
        sub_1015C9C0(a3, v25, (int)&v27);
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
      v13 = *(_DWORD *)(this + 4);
      LOBYTE(v32) = 0;
      v37 = v12;
      LOBYTE(v35) = 1;
      v14 = sub_1003C730(v13, (int)a3, v12);
      v15 = sub_1015CAC0(v14, a4, (int)&v27);
      v16 = *(_DWORD *)(this + 8);
      LOBYTE(v32) = 0;
      sub_1003C730((int)a3, v16, (CREControl *)v15);
      v17 = *(_DWORD *)(this + 4);
      v18 = 0;
      v35 = 0;
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 80;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_1003C060(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v37 + 80 * v10;
      *(_DWORD *)(this + 8) = (char *)v37 + 80 * v19;
      *(_DWORD *)(this + 4) = v37;
    }
  }
  v35 = -1;
  if ( v29 )
    operator delete(v29);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  return sub_1017A0B0(v28);
}
