/*
 * func-name: sub_100ECF30
 * func-address: 0x100ecf30
 * callers: 0x100ed4d0
 * callees: 0x100ec7b0, 0x100ec8b0, 0x100ec930, 0x100eca60, 0x1012b360, 0x1012b410, 0x1012b4e0, 0x1012b830, 0x101a2500, 0x101a2522
 */

void __thiscall sub_100ECF30(_DWORD *this, int a2, int a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // esi
  int v20; // [esp-20h] [ebp-74h]
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
  v6 = this[1];
  v25 = &v23;
  if ( v6 )
    v7 = (this[3] - v6) / 56;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (this[2] - this[1]) / 56;
    else
      v9 = 0;
    if ( 76695844 - v9 < a4 )
      sub_100EC8B0();
    if ( this[1] )
      v10 = (this[2] - this[1]) / 56;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v17 = this[2];
      v27 = v17;
      if ( (v17 - a3) / 56 >= a4 )
      {
        v18 = 56 * a4;
        v19 = v17 - 56 * a4;
        v29 = (char *)v18;
        this[2] = sub_1012B830(v17 - v18, v17, v17);
        sub_1012B4E0(a3, v19, v27);
        sub_1012B410(a3, &v29[a3], v24);
      }
      else
      {
        sub_1012B830(a3, v17, a3 + 56 * a4);
        v22 = a4 - (this[2] - a3) / 56;
        v21 = this[2];
        v26 = 2;
        sub_100ECA60(v21, v22, (int)v24);
        this[2] += 56 * a4;
        sub_1012B410(a3, this[2] - 56 * a4, v24);
      }
    }
    else
    {
      if ( 76695844 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( this[1] )
        v12 = (this[2] - this[1]) / 56;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_100EC7B0(this);
      v28 = (char *)sub_100EC930(v11);
      v20 = this[1];
      v26 = 0;
      v13 = sub_1012B360(v20, a3, v28);
      v14 = sub_100ECA60(v13, a4, (int)v24);
      sub_1012B360(a3, this[2], v14);
      v15 = this[1];
      if ( v15 )
        v15 = (this[2] - v15) / 56;
      v16 = v15 + a4;
      if ( this[1] )
        operator delete((void *)this[1]);
      this[3] = &v28[56 * v11];
      this[2] = &v28[56 * v16];
      this[1] = v28;
    }
  }
}
