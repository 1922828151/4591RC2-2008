/*
 * func-name: sub_10109810
 * func-address: 0x10109810
 * callers: 0x10109910
 * callees: 0x10109060, 0x10109510
 */

int __thiscall sub_10109810(
        int *this,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  unsigned int v19; // ecx
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  unsigned int v25; // edi
  bool v26; // cc
  _DWORD v28[2]; // [esp+10h] [ebp-14h] BYREF
  int v29; // [esp+20h] [ebp-4h]

  v19 = this[1];
  v20 = 0;
  v29 = 0;
  if ( v19 )
    v21 = (int)(this[2] - v19) >> 6;
  else
    v21 = 0;
  if ( v21 >= a2 )
  {
    if ( v19 )
    {
      v23 = this[2];
      if ( a2 < (int)(v23 - v19) >> 6 )
      {
        if ( v19 > v23 )
          invalid_parameter_noinfo();
        v24 = this[1];
        if ( v24 > this[2] )
          invalid_parameter_noinfo();
        v25 = v24 + (a2 << 6);
        v26 = v25 <= this[2];
        v28[1] = v24;
        if ( !v26 || v25 < this[1] )
          invalid_parameter_noinfo();
        sub_10109060(this, v28, (int)this, v25, (int)this, v23);
      }
    }
  }
  else
  {
    if ( v19 )
      v20 = (int)(this[2] - v19) >> 6;
    v22 = this[2];
    if ( v19 > v22 )
      invalid_parameter_noinfo();
    sub_10109510(this, (int)this, v22, a2 - v20, &a3);
  }
  v29 = 1;
  std::string::~string(&a10);
  v29 = -1;
  return std::string::~string(&a3);
}
