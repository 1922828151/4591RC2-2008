/*
 * func-name: ?CreateHandle@Shader@@QAEXAAUShaderVar@@@Z
 * func-address: 0x101207d0
 * callers: 0x100e35c0, 0x10120930, 0x10120e60, 0x10120ed0, 0x10120f40, 0x101215e0, 0x101216e0, 0x101217d0, 0x101220b0
 * callees: none
 */

void __thiscall Shader::CreateHandle(Shader *this, struct ShaderVar *a2)
{
  char *v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  _BYTE v9[28]; // [esp+Ch] [ebp-28h] BYREF
  int v10; // [esp+30h] [ebp-4h]

  v3 = (char *)a2 + 4;
  if ( *(_BYTE *)std::string::operator[]((char *)a2 + 4, 0) == 58 )
  {
    v4 = std::string::substr(v3, v9, 1, std::string::npos);
    v5 = **((_DWORD **)this + 4);
    v10 = 0;
    v6 = std::string::c_str(v4);
    *((_DWORD *)a2 + 17) = (*(int (__stdcall **)(_DWORD, _DWORD, int))(v5 + 40))(*((_DWORD *)this + 4), 0, v6);
    v10 = -1;
    std::string::~string(v9);
  }
  else
  {
    v7 = **((_DWORD **)this + 4);
    v8 = std::string::c_str(v3);
    *((_DWORD *)a2 + 17) = (*(int (__stdcall **)(_DWORD, _DWORD, int))(v7 + 36))(*((_DWORD *)this + 4), 0, v8);
  }
}
