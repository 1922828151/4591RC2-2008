/*
 * func-name: ?AddToGroup@GroupManager@GameClient@@QAEXKKABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JK_NK@Z_0
 * func-address: 0x101f9db0
 * callers: 0x1001576c
 * callees: 0x10001e29, 0x10002996, 0x1000342c, 0x10003a35, 0x100051aa, 0x10010cc1, 0x1001816a, 0x1001a6ea
 */

int __thiscall GameClient::GroupManager::AddToGroup(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8)
{
  _DWORD *v9; // ebp
  int v10; // ebx
  bool v11; // zf
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  Event *v17; // eax
  struct BinStream *Stream; // esi
  int result; // eax
  int v20; // [esp+4h] [ebp-6Ch]
  _DWORD *v21; // [esp+1Ch] [ebp-54h] BYREF
  int v22; // [esp+20h] [ebp-50h]
  _DWORD v23[7]; // [esp+28h] [ebp-48h] BYREF
  int v24; // [esp+44h] [ebp-2Ch] BYREF
  char v25[12]; // [esp+48h] [ebp-28h] BYREF
  int v26; // [esp+6Ch] [ebp-4h]

  sub_100051AA((int)&v21, (int)&a2);
  v9 = v21;
  v10 = this[13];
  if ( !v21 || v21 != this + 12 )
    _invalid_parameter_noinfo();
  v11 = v22 == v10;
  v12 = a2;
  if ( v11 )
  {
    v23[0] = a6;
    v23[1] = a2;
    v23[2] = -1;
    memset(&v23[4], 0, 12);
    v26 = 0;
    GameClient::Group::AddMember(a3, a4, a5, a7, a8);
    v24 = v12;
    GameClient::Group::Group((GameClient::Group *)v25, (const struct GameClient::Group *)v23);
    LOBYTE(v26) = 1;
    sub_1001A6EA((int)&v21, (int)&v24);
    LOBYTE(v26) = 0;
    sub_1000342C();
    v26 = -1;
    sub_1000342C();
  }
  else
  {
    if ( !v9 )
      _invalid_parameter_noinfo();
    if ( v22 == v9[1] )
      _invalid_parameter_noinfo();
    GameClient::Group::AddMember(a3, a4, a5, a7, a8);
  }
  sub_10002996((int)&v21, (int)&a3);
  v13 = this + 2;
  v14 = this[3];
  if ( !v21 || v21 != v13 )
    _invalid_parameter_noinfo();
  if ( v22 == v14 )
  {
    v20 = a4;
    v15 = sub_10001E29((int)&a3);
    std::string::operator=(v15, v20);
  }
  v16 = EventAttemper::Instance(9, 4500);
  v17 = (Event *)EventAttemper::AddEvent(v16);
  Stream = Event::GetStream(v17);
  sub_1001816A(4);
  result = *((_DWORD *)Stream + 1);
  *(_DWORD *)(result + *((_DWORD *)Stream + 2)) = v12;
  *((_DWORD *)Stream + 2) += 4;
  return result;
}
