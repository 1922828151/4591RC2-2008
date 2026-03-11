/*
 * func-name: sub_10013230
 * func-address: 0x10013230
 * callers: 0x10013960
 * callees: 0x10010e50, 0x100124c0
 */

int __thiscall sub_10013230(
        _DWORD *this,
        unsigned int a2,
        char a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int v11; // ecx
  int v12; // ebx
  unsigned int v13; // eax
  char *v14; // ebp
  unsigned int v15; // ebp
  unsigned int v16; // ebx
  unsigned int v17; // edi
  bool v18; // cc
  _DWORD v20[2]; // [esp+10h] [ebp-14h] BYREF
  int v21; // [esp+20h] [ebp-4h]

  v11 = this[1];
  v12 = 0;
  v21 = 0;
  if ( v11 )
    v13 = (int)(this[2] - v11) >> 5;
  else
    v13 = 0;
  if ( v13 >= a2 )
  {
    if ( v11 )
    {
      v15 = this[2];
      if ( a2 < (int)(v15 - v11) >> 5 )
      {
        if ( v11 > v15 )
          invalid_parameter_noinfo();
        v16 = this[1];
        if ( v16 > this[2] )
          invalid_parameter_noinfo();
        v17 = v16 + 32 * a2;
        v18 = v17 <= this[2];
        v20[1] = v16;
        if ( !v18 || v17 < this[1] )
          invalid_parameter_noinfo();
        sub_10010E50(this, v20, (int)this, v17, (int)this, v15);
      }
    }
  }
  else
  {
    if ( v11 )
      v12 = (int)(this[2] - v11) >> 5;
    v14 = (char *)this[2];
    if ( v11 > (unsigned int)v14 )
      invalid_parameter_noinfo();
    sub_100124C0((int)this, (int)this, v14, a2 - v12, &a3);
  }
  v21 = -1;
  return std::string::~string(&a4);
}
