/*
 * func-name: sub_102BD3A0
 * func-address: 0x102bd3a0
 * callers: 0x1000df4e
 * callees: 0x10001672, 0x1000cc4d
 */

void __thiscall sub_102BD3A0(
        _DWORD *this,
        unsigned int a2,
        int a3,
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  unsigned int v13; // ecx
  int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // edi
  unsigned int v18; // ebp
  unsigned int v19; // ebx
  bool v20; // cc
  _BYTE v21[4]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v22; // [esp+18h] [ebp-10h]
  int v23; // [esp+24h] [ebp-4h]

  v13 = this[1];
  v14 = 0;
  v23 = 0;
  if ( v13 )
    v15 = (int)(this[2] - v13) / 40;
  else
    v15 = 0;
  if ( v15 >= a2 )
  {
    if ( v13 )
    {
      v17 = this[2];
      if ( a2 < (int)(v17 - v13) / 40 )
      {
        if ( v13 > v17 )
          _invalid_parameter_noinfo();
        v18 = this[1];
        if ( v18 > this[2] )
          _invalid_parameter_noinfo();
        v19 = v18 + 40 * a2;
        v20 = v19 <= this[2];
        v22 = v18;
        if ( !v20 || v19 < this[1] )
          _invalid_parameter_noinfo();
        sub_1000CC4D((int)v21, (int)this, v19, (int)this, v17);
      }
    }
  }
  else
  {
    if ( v13 )
      v14 = (int)(this[2] - v13) / 40;
    v16 = this[2];
    if ( v13 > v16 )
      _invalid_parameter_noinfo();
    sub_10001672((int)this, v16, a2 - v14, (int)&a3);
  }
  v23 = -1;
  std::string::~string(&a5);
}
