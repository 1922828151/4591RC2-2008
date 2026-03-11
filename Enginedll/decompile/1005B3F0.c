/*
 * func-name: sub_1005B3F0
 * func-address: 0x1005b3f0
 * callers: 0x10055820, 0x10056380
 * callees: 0x10057540, 0x10058f70, 0x1005a2a0
 */

void __thiscall sub_1005B3F0(_DWORD *this, unsigned int a2, char a3)
{
  unsigned int v4; // eax
  int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int *v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  int v12; // [esp-18h] [ebp-34h] BYREF
  _DWORD *v13; // [esp-14h] [ebp-30h]
  unsigned int v14; // [esp-10h] [ebp-2Ch]
  int v15; // [esp-Ch] [ebp-28h]
  _DWORD *v16; // [esp-8h] [ebp-24h]
  unsigned int *v17; // [esp-4h] [ebp-20h]
  _DWORD v18[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = this[4];
  if ( a2 <= v4 )
  {
    if ( a2 < v4 )
    {
      v8 = (unsigned int *)(v4 + this[3]);
      v15 = 0;
      v9 = this[3];
      if ( v9 > (unsigned int)v8 || (unsigned int)v8 > v9 + this[4] )
        invalid_parameter_noinfo();
      v16 = this;
      v17 = v8;
      v10 = this[3];
      v11 = v10 + this[4];
      v18[0] = 0;
      if ( v10 > v11 )
        invalid_parameter_noinfo();
      v18[1] = this;
      v18[2] = v10;
      sub_10057540(v18, &v12, a2);
      sub_10058F70(this, v18, v12, v13, v14, v15, v16, (unsigned int)v17);
    }
  }
  else
  {
    v5 = this[3];
    v17 = (unsigned int *)&a3;
    v16 = (_DWORD *)(a2 - v4);
    v6 = v4 + v5;
    v13 = 0;
    v7 = this[3];
    if ( v7 > v6 || v6 > v7 + this[4] )
      invalid_parameter_noinfo();
    sub_1005A2A0(this, (int)v13, this, v6, (unsigned int)v16, v17);
  }
}
