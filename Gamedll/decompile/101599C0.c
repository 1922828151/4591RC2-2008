/*
 * func-name: ?GetNodeMatrix@Equip@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVMatrix@@_N@Z_0
 * func-address: 0x101599c0
 * callers: 0x1000a420
 * callees: none
 */

char __thiscall GameClient::Equip::GetNodeMatrix(int this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int (__thiscall *v8)(int, int, int, int); // eax
  char v9; // bl
  int v11; // [esp-Ch] [ebp-40h]
  _BYTE v12[28]; // [esp+Ch] [ebp-28h] BYREF
  int v13; // [esp+30h] [ebp-4h]

  v5 = *(_DWORD *)(this + 148);
  if ( !v5 || !*(_BYTE *)(v5 + 700) || *(_DWORD *)(this + 268) )
    return (*(int (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(this + 180) + 120))(
             *(_DWORD *)(this + 180),
             a2,
             a3,
             a4);
  v6 = std::operator+<char>(v12, a2, "FPV");
  v7 = *(_DWORD *)(this + 180);
  v11 = v6;
  v8 = *(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 120);
  v13 = 0;
  v9 = v8(v7, v11, a3, a4);
  v13 = -1;
  std::string::~string(v12);
  return v9;
}
