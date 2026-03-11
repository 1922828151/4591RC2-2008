/*
 * func-name: sub_102B8E10
 * func-address: 0x102b8e10
 * callers: 0x10002d6a
 * callees: 0x10004dcc, 0x10017b9d
 */

void __thiscall sub_102B8E10(_DWORD *this, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v10; // edi
  int v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // ebp
  bool v17; // cc
  _DWORD v18[2]; // [esp+14h] [ebp-14h] BYREF
  int v19; // [esp+24h] [ebp-4h]

  v10 = this[1];
  v11 = 0;
  v19 = 0;
  if ( v10 )
    v12 = (int)(this[2] - v10) / 28;
  else
    v12 = 0;
  if ( v12 >= a2 )
  {
    if ( v10 )
    {
      v14 = this[2];
      if ( a2 < (int)(v14 - v10) / 28 )
      {
        if ( v10 > v14 )
          _invalid_parameter_noinfo();
        v15 = this[1];
        if ( v15 > this[2] )
          _invalid_parameter_noinfo();
        v16 = v15 + 28 * a2;
        v17 = v16 <= this[2];
        v18[1] = v15;
        if ( !v17 || v16 < this[1] )
          _invalid_parameter_noinfo();
        sub_10004DCC((int)v18, (int)this, v16, (int)this, v14);
      }
    }
  }
  else
  {
    if ( v10 )
      v11 = (int)(this[2] - v10) / 28;
    v18[0] = this[2];
    v13 = v18[0];
    if ( v10 > v18[0] )
    {
      _invalid_parameter_noinfo();
      v13 = v18[0];
    }
    sub_10017B9D((int)this, v13, a2 - v11, &a3);
  }
  v19 = -1;
  std::string::~string(&a3);
}
