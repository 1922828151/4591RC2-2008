/*
 * func-name: ?GetFunctionByType@FuncManager@GameClient@@QAEXW4FUNCTION_TYPE@@AAV?$vector@PAVFunction@GameClient@@V?$allocator@PAVFunction@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x101cb220
 * callers: 0x10016a27
 * callees: 0x1000fd62
 */

void __thiscall GameClient::FuncManager::GetFunctionByType(_DWORD **this, int a2, void *a3)
{
  _DWORD *v3; // esi
  _DWORD **v4; // edi

  v3 = (_DWORD *)*this[3];
  v4 = this + 2;
  while ( v3 != v4[1] )
  {
    if ( *(_DWORD *)(v3[3] + 40) == a2 )
    {
      if ( v3 == v4[1] )
        _invalid_parameter_noinfo();
      sub_1000FD62(a3, (int)(v3 + 3));
    }
    if ( v3 == v4[1] )
      _invalid_parameter_noinfo();
    v3 = (_DWORD *)*v3;
  }
}
