/*
 * func-name: ?Tweakable@Material@@AAE_NPBD@Z
 * func-address: 0x100e2980
 * callers: 0x100e35c0, 0x100e4db0
 * callees: 0x101208a0
 */

bool __thiscall Material::Tweakable(Material *this, const char *a2)
{
  int v2; // esi
  bool result; // al
  int v4; // eax
  int String; // eax
  bool v6; // bl
  _BYTE v7[28]; // [esp+18h] [ebp-54h] BYREF
  _BYTE v8[28]; // [esp+34h] [ebp-38h] BYREF
  int v9; // [esp+50h] [ebp-1Ch]
  int v10; // [esp+68h] [ebp-4h]

  v2 = *(_DWORD *)(*((_DWORD *)this + 38) + 16);
  result = (*(int (__stdcall **)(int, const char *, _BYTE *))(*(_DWORD *)v2 + 16))(v2, a2, v8) >= 0
        && v9
        && ((v4 = (*(int (__stdcall **)(int, const char *, const char *))(*(_DWORD *)v2 + 76))(v2, a2, "UIWidget")) == 0
         || (String = Shader::GetString(v7, v4),
             v10 = 0,
             v6 = std::string::find(String, "None", 0) != -1,
             v10 = -1,
             std::string::~string(v7),
             !v6))
        && (*(int (__stdcall **)(int, const char *, const char *))(*(_DWORD *)v2 + 76))(v2, a2, "Object") == 0;
  return result;
}
