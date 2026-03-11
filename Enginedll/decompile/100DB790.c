/*
 * func-name: ?GetBoundKeys@Input@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV23@1@Z
 * func-address: 0x100db790
 * callers: 0x100b3c70
 * callees: 0x100956d0, 0x100db650
 */

int __thiscall Input::GetBoundKeys(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // edi
  int v12; // eax
  int v13; // eax
  _BYTE v15[28]; // [esp+10h] [ebp-28h] BYREF
  int v16; // [esp+34h] [ebp-4h]

  v16 = 0;
  v11 = Input::controlIndex(this, (int)&a2);
  if ( v11 == -1 )
    Error("GetBoundKeys(): Invalid keyname or command name for key mapping in config. ");
  v12 = (*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 112))(this, v15, this[2 * v11 + 28]);
  LOBYTE(v16) = 1;
  std::string::operator=(a9, v12);
  LOBYTE(v16) = 0;
  std::string::~string(v15);
  v13 = (*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 112))(this, v15, this[2 * v11 + 29]);
  LOBYTE(v16) = 2;
  std::string::operator=(a10, v13);
  LOBYTE(v16) = 0;
  std::string::~string(v15);
  v16 = -1;
  return std::string::~string(&a2);
}
