/*
 * func-name: ?GetProductors@LogicFactory@GameClient@@QAEXAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z_0
 * func-address: 0x101dd5f0
 * callers: 0x10006ff5
 * callees: 0x1000ab4b
 */

void __thiscall GameClient::LogicFactory::GetProductors(_DWORD **this, void *a2)
{
  _DWORD *v2; // esi
  _DWORD **v3; // edi

  v2 = (_DWORD *)*this[2];
  v3 = this + 1;
  while ( v2 != v3[1] )
  {
    sub_1000AB4B(a2, v2 + 2);
    if ( v2 == v3[1] )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
}
