/*
 * func-name: ?OnUpdateStock@Func_Receive@GameClient@@UAEXABV?$vector@UStockInfo@Func_Receive@GameClient@@V?$allocator@UStockInfo@Func_Receive@GameClient@@@std@@@std@@@Z_0
 * func-address: 0x101c0960
 * callers: 0x10002563
 * callees: 0x10006d84, 0x1000dce7, 0x1001816a
 */

int __thiscall GameClient::Func_Receive::OnUpdateStock(_DWORD *this, int a2)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // ebx
  int result; // eax
  int v6; // eax
  Event *v7; // eax
  int v8; // edi
  struct BinStream *Stream; // esi

  for ( i = 0; i < sub_10006D84(); ++i )
  {
    v3 = *(_DWORD *)(a2 + 4);
    if ( !v3 || i >= (*(_DWORD *)(a2 + 8) - v3) >> 3 )
      _invalid_parameter_noinfo();
    v4 = *(_DWORD *)(a2 + 4);
    if ( !v4 || i >= (*(_DWORD *)(a2 + 8) - v4) >> 3 )
      _invalid_parameter_noinfo();
    *(_DWORD *)sub_1000DCE7(8 * i + *(_DWORD *)(a2 + 4)) = *(_DWORD *)(v4 + 8 * i + 4);
  }
  result = *(_DWORD *)(a2 + 4);
  if ( result )
  {
    if ( (*(_DWORD *)(a2 + 8) - result) >> 3 )
    {
      v6 = EventAttemper::Instance(9, 4313);
      v7 = (Event *)EventAttemper::AddEvent(v6);
      v8 = this[8];
      Stream = Event::GetStream(v7);
      sub_1001816A(4);
      result = *((_DWORD *)Stream + 2);
      *(_DWORD *)(*((_DWORD *)Stream + 1) + result) = v8;
      *((_DWORD *)Stream + 2) += 4;
    }
  }
  return result;
}
