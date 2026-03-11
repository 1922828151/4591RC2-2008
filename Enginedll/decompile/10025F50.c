/*
 * func-name: ?resize@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@QAEXIUAttributeRange@@@Z
 * func-address: 0x10025f50
 * callers: 0x1002bed0
 * callees: 0x10022540, 0x100f6030
 */

unsigned int __thiscall std::vector<AttributeRange>::resize(
        _DWORD *this,
        unsigned int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  unsigned int v8; // ecx
  unsigned int result; // eax
  int v10; // edi
  unsigned int v11; // ebp
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  bool v15; // cc

  v8 = this[1];
  if ( v8 )
    result = (int)(this[2] - v8) / 20;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v8 )
    {
      v12 = this[2];
      result = (int)(v12 - v8) / 20;
      if ( a2 < result )
      {
        if ( v8 > v12 )
          invalid_parameter_noinfo();
        v13 = this[1];
        if ( v13 > this[2] )
          invalid_parameter_noinfo();
        v14 = v13 + 20 * a2;
        v15 = v14 <= this[2];
        a4 = v13;
        if ( !v15 || v14 < this[1] )
          invalid_parameter_noinfo();
        return std::vector<AttributeRange>::erase(&a3, this, v14, this, v12);
      }
    }
  }
  else
  {
    if ( v8 )
      v10 = (int)(this[2] - v8) / 20;
    else
      v10 = 0;
    v11 = this[2];
    if ( v8 > v11 )
      invalid_parameter_noinfo();
    return std::vector<AttributeRange>::_Insert_n((int)this, (int)this, v11, a2 - v10, &a3);
  }
  return result;
}
