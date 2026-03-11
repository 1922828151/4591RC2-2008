/*
 * func-name: ?LoadResource@ControlledEstab@GameClient@@UAE_NXZ_0
 * func-address: 0x1019c3a0
 * callers: 0x100015d2
 * callees: 0x100030da, 0x10018165
 */

bool __thiscall GameClient::ControlledEstab::LoadResource(GameClient::ControlledEstab *this)
{
  bool result; // al
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  _BYTE v14[28]; // [esp+Ch] [ebp-28h] BYREF
  int v15; // [esp+30h] [ebp-4h]

  result = GameClient::Establishment::LoadResource(this);
  if ( result )
  {
    v3 = *((_DWORD *)this + 75);
    if ( v3 )
    {
      *(float *)(v3 + 1128) = 1.0;
      std::string::string(v14, &unk_1031544C);
      v15 = 0;
      sub_10018165((int)v14);
      v15 = -1;
      std::string::~string(v14);
    }
    if ( *(_DWORD *)(*((_DWORD *)this + 115) + 1052) )
    {
      v4 = AudioDevice::Instance();
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
      v6 = *((_DWORD *)this + 115);
      *((_DWORD *)this + 120) = v5;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v6 + 1052) + 12))(*(_DWORD *)(v6 + 1052), v5);
    }
    if ( *(_DWORD *)(*((_DWORD *)this + 115) + 1056) )
    {
      v7 = AudioDevice::Instance();
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
      v9 = *((_DWORD *)this + 115);
      *((_DWORD *)this + 121) = v8;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v9 + 1056) + 12))(*(_DWORD *)(v9 + 1056), v8);
    }
    if ( *(_DWORD *)(*((_DWORD *)this + 115) + 1060) )
    {
      v10 = AudioDevice::Instance();
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
      v12 = *((_DWORD *)this + 115);
      *((_DWORD *)this + 122) = v11;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v12 + 1060) + 12))(*(_DWORD *)(v12 + 1060), v11);
    }
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 117) + 4))(*((_DWORD *)this + 117));
    v13 = *((_DWORD *)this + 118);
    if ( v13 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 4))(v13);
    return 1;
  }
  return result;
}
