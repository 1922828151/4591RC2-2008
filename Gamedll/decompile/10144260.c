/*
 * func-name: ?LoadResource@Booty@GameClient@@UAE_NXZ_0
 * func-address: 0x10144260
 * callers: 0x10002a86
 * callees: 0x1000c36a, 0x102c71e0
 */

bool __thiscall GameClient::Booty::LoadResource(GameClient::Booty *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  void (__thiscall *v6)(int, int, _BYTE *, _BYTE *); // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v12; // [esp+10h] [ebp-DCh]
  _BYTE v13[28]; // [esp+30h] [ebp-BCh] BYREF
  _BYTE v14[28]; // [esp+4Ch] [ebp-A0h] BYREF
  _DWORD v15[16]; // [esp+68h] [ebp-84h] BYREF
  _BYTE v16[28]; // [esp+A8h] [ebp-44h] BYREF
  _BYTE v17[28]; // [esp+C4h] [ebp-28h] BYREF
  int v18; // [esp+E8h] [ebp-4h]

  v2 = *((_DWORD *)this + 2);
  std::string::string(v13, &unk_10313BEA);
  v18 = 0;
  std::string::string(v14, &unk_10313BEB);
  LOBYTE(v18) = 1;
  v3 = sub_102C71E0(v17, v2 + 156);
  LOBYTE(v18) = 2;
  v4 = std::operator+<char>(v16, v3, ".reb");
  v5 = *((_DWORD *)this + 45);
  v12 = v4;
  v6 = *(void (__thiscall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)v5 + 108);
  LOBYTE(v18) = 3;
  v6(v5, v12, v14, v13);
  LOBYTE(v18) = 2;
  std::string::~string(v16);
  LOBYTE(v18) = 1;
  std::string::~string(v17);
  LOBYTE(v18) = 0;
  std::string::~string(v14);
  v18 = -1;
  std::string::~string(v13);
  if ( !*((_DWORD *)this + 46) )
  {
    v7 = *((_DWORD *)this + 7);
    v8 = *((_DWORD *)this + 8);
    qmemcpy(v15, (char *)this + 36, sizeof(v15));
    v15[12] = *((_DWORD *)this + 6);
    v15[13] = v7;
    v9 = *((_DWORD *)this + 3);
    v15[14] = v8;
    v10 = NxPhysics::Instance(*((_DWORD *)this + 45), v9, v2 + 116, v15, 0);
    *((_DWORD *)this + 46) = NxPhysics::CreateBoxActor(v10);
  }
  return GameClient::WorldObject::LoadResource(this);
}
