/*
 * func-name: ?UpdateGroupMemberInfo@GroupManager@GameClient@@QAEXKAAVBinStream@@@Z_0
 * func-address: 0x101f82f0
 * callers: 0x100155be
 * callees: 0x100051aa, 0x1000b500, 0x1001816a
 */

void __thiscall GameClient::GroupManager::UpdateGroupMemberInfo(
        GameClient::GroupManager *this,
        int a2,
        struct BinStream *a3)
{
  int v4; // ebx
  char *v5; // eax
  char *v6; // esi
  int v7; // edi
  int v8; // eax
  Event *v9; // eax
  struct BinStream *Stream; // esi
  char *v11; // [esp+18h] [ebp-8h] BYREF
  int v12; // [esp+1Ch] [ebp-4h]

  sub_100051AA((int)&v11, (int)&a2);
  v4 = *((_DWORD *)this + 13);
  v5 = (char *)this + 48;
  v6 = v11;
  if ( !v11 || v11 != v5 )
    _invalid_parameter_noinfo();
  v7 = v12;
  if ( v12 != v4 )
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v7 == *((_DWORD *)v6 + 1) )
      _invalid_parameter_noinfo();
    GameClient::Group::UpdateMemberInfo((GameClient::Group *)(v7 + 12), a3);
    v8 = EventAttemper::Instance(9, 4500);
    v9 = (Event *)EventAttemper::AddEvent(v8);
    Stream = Event::GetStream(v9);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
    *((_DWORD *)Stream + 2) += 4;
  }
}
