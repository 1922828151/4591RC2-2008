/*
 * func-name: ?GetMessageA@ChatManager@GameClient@@QAEXAAV?$vector@UChatMessage@GameClient@@V?$allocator@UChatMessage@GameClient@@@std@@@std@@J@Z_0
 * func-address: 0x101f50c0
 * callers: 0x1000d05d
 * callees: 0x10003670
 */

void __thiscall GameClient::ChatManager::GetMessageA(_DWORD **this, int a2, int a3)
{
  _DWORD **v3; // edi
  _DWORD *i; // esi
  _DWORD *v5; // esi
  int v6; // ebx

  v3 = this + 1;
  if ( a3 == -1 )
  {
    for ( i = (_DWORD *)*this[2]; i != v3[1]; i = (_DWORD *)*i )
    {
      sub_10003670((int)(i + 2));
      if ( i == v3[1] )
        _invalid_parameter_noinfo();
    }
  }
  else
  {
    v5 = this[2];
    if ( a3 > 0 )
    {
      v6 = a3;
      do
      {
        v5 = (_DWORD *)v5[1];
        if ( v5 == v3[1] )
          _invalid_parameter_noinfo();
        --v6;
      }
      while ( v6 );
    }
    while ( v5 != v3[1] )
    {
      sub_10003670((int)(v5 + 2));
      if ( v5 == v3[1] )
        _invalid_parameter_noinfo();
      v5 = (_DWORD *)*v5;
    }
  }
}
