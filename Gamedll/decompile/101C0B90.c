/*
 * func-name: ?OnUpdateAllStock@Func_Receive@GameClient@@UAEXABV?$vector@UStockInfo@Func_Receive@GameClient@@V?$allocator@UStockInfo@Func_Receive@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x101c0b90
 * callers: 0x100030fd
 * callees: 0x10006d84, 0x1000a231, 0x1000dce7, 0x1001816a
 */

int __thiscall GameClient::Func_Receive::OnUpdateAllStock(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // ebx
  int result; // eax
  int v7; // eax
  Event *v8; // eax
  int v9; // ebx
  struct BinStream *Stream; // esi

  v2 = this;
  sub_1000A231();
  v3 = 0;
  if ( sub_10006D84() )
  {
    do
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( !v4 || v3 >= (*(_DWORD *)(a2 + 8) - v4) >> 3 )
        _invalid_parameter_noinfo();
      v5 = *(_DWORD *)(a2 + 4);
      if ( !v5 || v3 >= (*(_DWORD *)(a2 + 8) - v5) >> 3 )
        _invalid_parameter_noinfo();
      *(_DWORD *)sub_1000DCE7(8 * v3 + *(_DWORD *)(a2 + 4)) = *(_DWORD *)(v5 + 8 * v3 + 4);
      ++v3;
    }
    while ( v3 < sub_10006D84() );
    v2 = this;
  }
  result = *(_DWORD *)(a2 + 4);
  if ( result )
  {
    if ( (*(_DWORD *)(a2 + 8) - result) >> 3 )
    {
      v7 = EventAttemper::Instance(9, 4313);
      v8 = (Event *)EventAttemper::AddEvent(v7);
      v9 = v2[8];
      Stream = Event::GetStream(v8);
      sub_1001816A(4);
      result = *((_DWORD *)Stream + 1);
      *(_DWORD *)(result + *((_DWORD *)Stream + 2)) = v9;
      *((_DWORD *)Stream + 2) += 4;
    }
  }
  return result;
}
