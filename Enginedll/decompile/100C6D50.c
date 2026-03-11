/*
 * func-name: ?GetHoverPicsByType@CHotZonePic@@QAE_NHAAV?$vector@PAUHoverPicInfo@CHotZonePic@@V?$allocator@PAUHoverPicInfo@CHotZonePic@@@std@@@std@@@Z
 * func-address: 0x100c6d50
 * callers: none
 * callees: 0x100d2f70
 */

bool __thiscall CHotZonePic::GetHoverPicsByType(_DWORD *this, int a2, int a3)
{
  int v3; // ebp
  unsigned int i; // edi
  int v6; // ecx
  bool v7; // zf
  int v8; // eax

  v3 = a3;
  for ( i = 0; ; ++i )
  {
    v6 = this[141];
    if ( !v6 || i >= (this[142] - v6) >> 2 )
      break;
    v7 = **(_DWORD **)(this[141] + 4 * i) == a2;
    a3 = *(_DWORD *)(this[141] + 4 * i);
    if ( v7 )
      sub_100D2F70(v3, (int)&a3);
  }
  v8 = *(_DWORD *)(v3 + 4);
  return v8 && (*(_DWORD *)(v3 + 8) - v8) >> 2;
}
