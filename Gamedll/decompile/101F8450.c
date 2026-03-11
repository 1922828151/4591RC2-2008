/*
 * func-name: ?UpdateGroupCmd@GroupManager@GameClient@@QAEXKJJABVVector@@@Z_0
 * func-address: 0x101f8450
 * callers: 0x10008f3f
 * callees: 0x100051aa, 0x10014f24, 0x1001816a
 */

void __thiscall GameClient::GroupManager::UpdateGroupCmd(
        GameClient::GroupManager *this,
        int a2,
        int a3,
        int a4,
        const struct Vector *a5)
{
  int v6; // ebx
  char *v7; // eax
  char *v8; // esi
  int v9; // edi
  int v10; // eax
  Event *v11; // eax
  struct BinStream *Stream; // esi
  char *v13; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h]

  sub_100051AA((int)&v13, (int)&a2);
  v6 = *((_DWORD *)this + 13);
  v7 = (char *)this + 48;
  v8 = v13;
  if ( !v13 || v13 != v7 )
    _invalid_parameter_noinfo();
  v9 = v14;
  if ( v14 != v6 )
  {
    if ( !v8 )
      _invalid_parameter_noinfo();
    if ( v9 == *((_DWORD *)v8 + 1) )
      _invalid_parameter_noinfo();
    GameClient::Group::UpdateGroupCmd((GameClient::Group *)(v9 + 12), a3, a4, a5);
    v10 = EventAttemper::Instance(9, 4503);
    v11 = (Event *)EventAttemper::AddEvent(v10);
    Stream = Event::GetStream(v11);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = a2;
    *((_DWORD *)Stream + 2) += 4;
  }
}
