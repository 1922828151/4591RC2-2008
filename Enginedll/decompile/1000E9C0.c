/*
 * func-name: sub_1000E9C0
 * func-address: 0x1000e9c0
 * callers: 0x10002f20, 0x10006780, 0x1017d440
 * callees: 0x1000dc10, 0x1000dc90
 */

int __thiscall sub_1000E9C0(int *this, unsigned int a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v10; // edi
  int v11; // ebx
  unsigned int v12; // eax
  CREControl *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // ebp
  bool v18; // cc
  _DWORD v20[2]; // [esp+10h] [ebp-14h] BYREF
  int v21; // [esp+20h] [ebp-4h]
  int v22; // [esp+28h] [ebp+4h]

  v10 = this[1];
  v11 = 0;
  v21 = 0;
  if ( v10 )
    v12 = (int)(this[2] - v10) / 28;
  else
    v12 = 0;
  if ( v12 >= a2 )
  {
    if ( v10 )
    {
      v15 = this[2];
      if ( a2 < (int)(v15 - v10) / 28 )
      {
        if ( v10 > v15 )
          invalid_parameter_noinfo();
        v16 = this[1];
        if ( v16 > this[2] )
          invalid_parameter_noinfo();
        v17 = v16 + 28 * a2;
        v18 = v17 <= this[2];
        v20[1] = v16;
        if ( !v18 || v17 < this[1] )
          invalid_parameter_noinfo();
        sub_1000DC10(this, v20, (int)this, v17, (int)this, v15);
      }
    }
  }
  else
  {
    if ( v10 )
      v11 = (int)(this[2] - v10) / 28;
    v14 = (CREControl *)this[2];
    v22 = (int)v14;
    if ( v10 > (unsigned int)v14 )
    {
      invalid_parameter_noinfo();
      v14 = (CREControl *)v22;
    }
    sub_1000DC90((int)this, (int)this, v14, a2 - v11, &a3);
  }
  v21 = -1;
  return std::string::~string(&a3);
}
