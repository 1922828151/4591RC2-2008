/*
 * func-name: ?resize@?$vector@PAUModelFrame@@V?$allocator@PAUModelFrame@@@std@@@std@@QAEXIPAUModelFrame@@@Z
 * func-address: 0x1002ac80
 * callers: 0x1002eab0
 * callees: 0x10024810, 0x100a1d10
 */

unsigned int __thiscall std::vector<ModelFrame *>::resize(_DWORD *this, unsigned int a2, int a3)
{
  unsigned int v4; // ecx
  unsigned int result; // eax
  int v6; // edi
  char *v7; // ebp
  void *v8; // ebp
  unsigned int v9; // edi
  void *v10; // edi
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
      v8 = (void *)this[2];
      result = (int)((int)v8 - v4) >> 2;
      if ( a2 < result )
      {
        if ( v4 > (unsigned int)v8 )
          invalid_parameter_noinfo();
        v9 = this[1];
        if ( v9 > this[2] )
          invalid_parameter_noinfo();
        v11[1] = v9;
        v10 = (void *)(v9 + 4 * a2);
        if ( (unsigned int)v10 > this[2] || (unsigned int)v10 < this[1] )
          invalid_parameter_noinfo();
        return std::vector<Model *>::erase((int)v11, (int)this, v10, (int)this, v8);
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
    return (unsigned int)std::vector<ModelFrame *>::_Insert_n((int)this, (int)this, v7, a2 - v6, &a3);
  }
  return result;
}
