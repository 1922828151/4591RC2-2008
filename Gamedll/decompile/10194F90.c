/*
 * func-name: ?LoadResource@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x10194f90
 * callers: 0x1001a7bc
 * callees: 0x100023fb, 0x10006a19, 0x1000bf05, 0x10019484, 0x1001a5d2
 */

bool __thiscall GameClient::Weapon::LoadResource(GameClient::WorldObject **this)
{
  bool result; // al
  GameClient::WorldObject *v3; // ecx
  GameClient::WorldObject *v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  result = GameClient::Equip::LoadResource((GameClient::Equip *)this);
  if ( result )
  {
    if ( this[67] || (v3 = this[37]) != 0 && GameClient::WorldObject::IsLocal(v3) )
    {
      v4 = this[2];
      std::string::operator=(this + 241, (char *)v4 + 2412);
      std::string::operator=(this + 248, &unk_10315414);
      sub_10019484(*((_DWORD *)this[45] + 178), 0);
      if ( sub_1000BF05() )
        sub_1001A5D2(0);
      if ( *((_DWORD *)v4 + 635) )
      {
        v5 = AudioDevice::Instance();
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
        this[285] = (GameClient::WorldObject *)v6;
        (*(void (__thiscall **)(_DWORD *, int))(**((_DWORD **)v4 + 635) + 12))(*((_DWORD **)v4 + 635), v6);
      }
      if ( *((_DWORD *)v4 + 655) )
      {
        v7 = AudioDevice::Instance();
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
        this[305] = (GameClient::WorldObject *)v8;
        (*(void (__thiscall **)(_DWORD *, int))(**((_DWORD **)v4 + 655) + 12))(*((_DWORD **)v4 + 655), v8);
      }
      if ( *((_DWORD *)v4 + 675) )
      {
        v9 = AudioDevice::Instance();
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
        this[325] = (GameClient::WorldObject *)v10;
        (*(void (__thiscall **)(_DWORD *, int))(**((_DWORD **)v4 + 675) + 12))(*((_DWORD **)v4 + 675), v10);
      }
      if ( *((_DWORD *)v4 + 695) )
      {
        v11 = AudioDevice::Instance();
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
        this[345] = (GameClient::WorldObject *)v12;
        (*(void (__thiscall **)(_DWORD *, int))(**((_DWORD **)v4 + 695) + 12))(*((_DWORD **)v4 + 695), v12);
      }
      if ( *((_DWORD *)v4 + 715) )
      {
        v13 = AudioDevice::Instance();
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 12))(v13);
        this[365] = (GameClient::WorldObject *)v14;
        (*(void (__thiscall **)(_DWORD *, int))(**((_DWORD **)v4 + 715) + 12))(*((_DWORD **)v4 + 715), v14);
      }
    }
    return 1;
  }
  return result;
}
