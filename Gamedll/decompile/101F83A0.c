/*
 * func-name: ?UpdateMemberID@GroupManager@GameClient@@QAEXKABV?$vector@KV?$allocator@K@std@@@std@@ABV?$vector@JV?$allocator@J@std@@@4@@Z_0
 * func-address: 0x101f83a0
 * callers: 0x10013011
 * callees: 0x100051aa, 0x100179ef, 0x1001816a
 */

void __thiscall GameClient::GroupManager::UpdateMemberID(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // eax
  Event *v10; // eax
  struct BinStream *Stream; // esi
  _DWORD *v12; // [esp+18h] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp-4h]

  sub_100051AA((int)&v12, (int)&a2);
  v5 = this[13];
  v6 = this + 12;
  v7 = v12;
  if ( !v12 || v12 != v6 )
    _invalid_parameter_noinfo();
  v8 = v13;
  if ( v13 != v5 )
  {
    if ( !v7 )
      _invalid_parameter_noinfo();
    if ( v8 == v7[1] )
      _invalid_parameter_noinfo();
    GameClient::Group::UpdateMemberID(a3, a4);
    v9 = EventAttemper::Instance(9, 4500);
    v10 = (Event *)EventAttemper::AddEvent(v9);
    Stream = Event::GetStream(v10);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
    *((_DWORD *)Stream + 2) += 4;
  }
}
