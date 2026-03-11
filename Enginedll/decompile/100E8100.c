/*
 * func-name: sub_100E8100
 * func-address: 0x100e8100
 * callers: 0x100e4420, 0x100e4db0, 0x1012ffd0
 * callees: 0x1000ed00, 0x100a1d10
 */

unsigned int __thiscall sub_100E8100(_DWORD *this, unsigned int a2, int a3)
{
  unsigned int v4; // ecx
  unsigned int result; // eax
  int v6; // edi
  char *v7; // ebp
  char *v8; // ebp
  unsigned int v9; // edi
  char *v10; // edi
  int v11[2]; // [esp+10h] [ebp-8h] BYREF

  v4 = this[1];
  if ( v4 )
    result = (int)(this[2] - v4) >> 2;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v4 )
    {
      v8 = (char *)this[2];
      result = (int)&v8[-v4] >> 2;
      if ( a2 < result )
      {
        if ( v4 > (unsigned int)v8 )
          invalid_parameter_noinfo();
        v9 = this[1];
        if ( v9 > this[2] )
          invalid_parameter_noinfo();
        v11[1] = v9;
        v10 = (char *)(v9 + 4 * a2);
        if ( (unsigned int)v10 > this[2] || (unsigned int)v10 < this[1] )
          invalid_parameter_noinfo();
        return (unsigned int)std::vector<Model *>::erase(this, v11, (int)this, v10, (int)this, v8);
      }
    }
  }
  else
  {
    if ( v4 )
      v6 = (int)(this[2] - v4) >> 2;
    else
      v6 = 0;
    v7 = (char *)this[2];
    if ( v4 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (unsigned int)sub_1000ED00((int)this, (int)this, v7, a2 - v6, &a3);
  }
  return result;
}
