/*
 * func-name: ?LoadModel@AEquip@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z_0
 * func-address: 0x100fde70
 * callers: 0x1000afa1
 * callees: 0x1000e28c
 */

char __thiscall GameClient::AEquip::LoadModel(_DWORD *this, void *a2, int a3, int a4)
{
  char result; // al
  void (__thiscall *v6)(_DWORD *, _BYTE *, _BYTE *, int); // edx
  int (__thiscall *v7)(_DWORD *, _BYTE *, _BYTE *, int); // edx
  int v8; // [esp-4h] [ebp-8Ch]
  int v9; // [esp-4h] [ebp-8Ch]
  _BYTE v10[28]; // [esp+Ch] [ebp-7Ch] BYREF
  _BYTE v11[28]; // [esp+28h] [ebp-60h] BYREF
  _BYTE v12[28]; // [esp+44h] [ebp-44h] BYREF
  _BYTE v13[28]; // [esp+60h] [ebp-28h] BYREF
  int v14; // [esp+84h] [ebp-4h]

  this[318] = 0;
  result = GameClient::AdapterActor::LoadModel(a2, a3, a4);
  if ( result )
  {
    std::string::string(v11, "Back_Point");
    v14 = 0;
    std::string::string(v10, "BackPoint");
    v8 = this[179];
    v6 = *(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *, int))(*this + 124);
    LOBYTE(v14) = 1;
    v6(this, v10, v11, v8);
    LOBYTE(v14) = 0;
    std::string::~string(v10);
    v14 = -1;
    std::string::~string(v11);
    std::string::string(v13, "d_M_sword02");
    v14 = 2;
    std::string::string(v12, "AssistantPoint");
    v9 = this[179];
    v7 = *(int (__thiscall **)(_DWORD *, _BYTE *, _BYTE *, int))(*this + 124);
    LOBYTE(v14) = 3;
    this[318] = v7(this, v12, v13, v9);
    LOBYTE(v14) = 2;
    std::string::~string(v12);
    v14 = -1;
    std::string::~string(v13);
    return 1;
  }
  return result;
}
