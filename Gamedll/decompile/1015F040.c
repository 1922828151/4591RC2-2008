/*
 * func-name: ?RemoveSystemPart@EquipManager@GameClient@@QAEPAVSystemPart@2@J@Z_0
 * func-address: 0x1015f040
 * callers: 0x100168e7
 * callees: 0x10005d49, 0x10011824
 */

struct GameClient::SystemPart *__thiscall GameClient::EquipManager::RemoveSystemPart(
        GameClient::EquipManager *this,
        int a2)
{
  int v3; // edi
  void *v4; // ebp
  _DWORD *v5; // ebx
  int v6; // ebp
  int v8; // [esp+10h] [ebp-8h] BYREF
  void *v9; // [esp+14h] [ebp-4h]

  sub_10011824((int)&v8, (int)&a2);
  v3 = v8;
  v4 = (void *)*((_DWORD *)this + 2);
  if ( !v8 || (GameClient::EquipManager *)v8 != (GameClient::EquipManager *)((char *)this + 4) )
    _invalid_parameter_noinfo();
  v5 = v9;
  if ( v9 == v4 )
    return 0;
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v5 == *(_DWORD **)(v3 + 4) )
    _invalid_parameter_noinfo();
  v6 = v5[3];
  sub_10005D49((int)&v8, v3, v5);
  return (struct GameClient::SystemPart *)v6;
}
