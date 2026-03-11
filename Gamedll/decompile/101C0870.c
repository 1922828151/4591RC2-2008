/*
 * func-name: ?GetProductList@Func_Receive@GameClient@@QAEXAAV?$vector@KV?$allocator@K@std@@@std@@@Z_0
 * func-address: 0x101c0870
 * callers: 0x100026e4
 * callees: 0x1001a0f5
 */

void __thiscall GameClient::Func_Receive::GetProductList(_DWORD **this, void *a2)
{
  _DWORD *v2; // esi
  _DWORD **v3; // edi

  v2 = (_DWORD *)*this[13];
  v3 = this + 12;
  while ( v2 != v3[1] )
  {
    sub_1001A0F5(a2, (int)(v2 + 2));
    if ( v2 == v3[1] )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
}
