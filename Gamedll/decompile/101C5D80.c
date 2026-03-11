/*
 * func-name: ?GetStockList@Func_Store@GameClient@@QAE?AV?$vector@UStockInfo@GameClient@@V?$allocator@UStockInfo@GameClient@@@std@@@std@@XZ_0
 * func-address: 0x101c5d80
 * callers: 0x1000648d
 * callees: 0x10003463
 */

_DWORD *__thiscall GameClient::Func_Store::GetStockList(_DWORD **this, _DWORD *a2)
{
  _DWORD **v2; // edi
  _DWORD *i; // esi
  _DWORD *v4; // ebx
  bool v5; // zf
  _DWORD v7[5]; // [esp+18h] [ebp-14h] BYREF

  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  v7[4] = 0;
  v2 = this + 12;
  for ( i = (_DWORD *)*this[13]; ; i = (_DWORD *)*i )
  {
    v4 = v2[1];
    if ( !v2 )
      _invalid_parameter_noinfo();
    if ( i == v4 )
      break;
    if ( !v2 )
      _invalid_parameter_noinfo();
    if ( i == v2[1] )
      _invalid_parameter_noinfo();
    v5 = i == v2[1];
    v7[0] = i[2];
    if ( v5 )
    {
      _invalid_parameter_noinfo();
      if ( i == v2[1] )
        _invalid_parameter_noinfo();
    }
    v7[1] = i[3] - i[4];
    sub_10003463((int)v7);
    if ( i == v2[1] )
      _invalid_parameter_noinfo();
  }
  return a2;
}
