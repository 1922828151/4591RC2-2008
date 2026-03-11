/*
 * func-name: sub_1005D480
 * func-address: 0x1005d480
 * callers: 0x10055990, 0x1005d900
 * callees: 0x10057380, 0x10057540, 0x10058580, 0x10058f70, 0x1005b4c0, 0x1006c940, 0x1013efb0
 */

_DWORD *__thiscall sub_1005D480(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // ebp
  int v8; // [esp-24h] [ebp-4Ch] BYREF
  _DWORD *v9; // [esp-20h] [ebp-48h]
  unsigned int v10; // [esp-1Ch] [ebp-44h]
  int v11; // [esp-18h] [ebp-40h] BYREF
  _DWORD *v12; // [esp-14h] [ebp-3Ch]
  _DWORD *v13; // [esp-10h] [ebp-38h]
  int v14; // [esp-Ch] [ebp-34h] BYREF
  _DWORD *v15; // [esp-8h] [ebp-30h]
  unsigned int v16; // [esp-4h] [ebp-2Ch]
  int v17; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v18; // [esp+14h] [ebp-14h]
  _DWORD *v19; // [esp+18h] [ebp-10h]
  _DWORD v20[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( this != a2 )
  {
    v3 = a2[4];
    if ( !v3 )
    {
      sub_1013EFB0(this);
      return this;
    }
    if ( v3 <= this[4] )
    {
      sub_10057380(this, &v14);
      sub_1006C940(&v11);
      sub_10057380(a2, &v8);
      sub_10058580(&v17, v8, v9, v10, v11, (int)v12, (int)v13, v14, v15, v16);
      sub_1006C940(&v14);
      sub_10058F70(this, &v17, 0, v18, (unsigned int)v19, v14, v15, v16);
      return this;
    }
    v16 = this[4];
    v5 = sub_10057380(a2, v20);
    sub_10057540(v5, &v17, v16);
    sub_10057380(this, &v14);
    v6 = v18;
    v7 = v19;
    v11 = 0;
    v12 = v18;
    v13 = v19;
    sub_10057380(a2, &v8);
    sub_10058580(v20, v8, v9, v10, v11, (int)v12, (int)v13, v14, v15, v16);
    sub_1006C940(&v14);
    v11 = 0;
    v12 = v6;
    v13 = v7;
    sub_1006C940(&v8);
    sub_1005B4C0(this, v8, v9, v10, v11, v12, v13, v14, (int)v15, v16);
  }
  return this;
}
