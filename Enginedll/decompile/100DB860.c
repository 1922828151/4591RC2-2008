/*
 * func-name: ?Bind@Input@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0H@Z
 * func-address: 0x100db860
 * callers: 0x100dbc90, 0x100dcbd0
 * callees: 0x100956d0, 0x100db650
 */

int __thiscall Input::Bind(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int v17; // edi
  int v18; // eax
  int v19; // ebx
  const char *v20; // eax
  _DWORD v22[6]; // [esp-10h] [ebp-38h] BYREF
  const char *v23; // [esp+8h] [ebp-20h]
  _DWORD *v24; // [esp+18h] [ebp-10h]
  int v25; // [esp+24h] [ebp-4h]

  v25 = 1;
  if ( std::string::length(&a2) && std::string::length(&a9) )
  {
    v24 = v22;
    std::string::string(v22, &a9);
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, const char *))(*this + 108))(
            this,
            v22[0],
            v22[1],
            v22[2],
            v22[3],
            v22[4],
            v22[5],
            v23);
    v18 = Input::controlIndex(this, (int)&a2);
    v19 = v18;
    if ( v17 == -1 || v18 == -1 )
    {
      v23 = (const char *)std::string::c_str(&a9);
      v20 = (const char *)std::string::c_str(&a2);
      Error("Bind(): Invalid keyname or command name for key mapping in config.\nCommand: %s\nKey Name: %s", v20, v23);
    }
    this[2 * v19 + 28 + a16] = v17;
  }
  LOBYTE(v25) = 0;
  std::string::~string(&a2);
  v25 = -1;
  return std::string::~string(&a9);
}
