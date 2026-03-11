/*
 * func-name: sub_10003F40
 * func-address: 0x10003f40
 * callers: 0x10003310
 * callees: 0x10003b80, 0x10003c00
 */

int __thiscall sub_10003F40(int *this, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v10; // edi
  int v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // ebp
  bool v17; // cc
  int v19[2]; // [esp+14h] [ebp-14h] BYREF
  int v20; // [esp+24h] [ebp-4h]

  v10 = this[1];
  v11 = 0;
  v20 = 0;
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
          invalid_parameter_noinfo();
        v15 = this[1];
        if ( v15 > this[2] )
          invalid_parameter_noinfo();
        v16 = v15 + 28 * a2;
        v17 = v16 <= this[2];
        v19[1] = v15;
        if ( !v17 || v16 < this[1] )
          invalid_parameter_noinfo();
        sub_10003B80(this, v19, (int)this, v16, (int)this, v14);
      }
    }
  }
  else
  {
    if ( v10 )
      v11 = (int)(this[2] - v10) / 28;
    v19[0] = this[2];
    v13 = v19[0];
    if ( v10 > v19[0] )
    {
      invalid_parameter_noinfo();
      v13 = v19[0];
    }
    sub_10003C00(this, (int)this, v13, a2 - v11, (int)&a3);
  }
  v20 = -1;
  return std::string::~string(&a3);
}
