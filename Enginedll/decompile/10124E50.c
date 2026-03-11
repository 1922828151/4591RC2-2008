/*
 * func-name: ?RegisterSharedTexture@ShaderManager@@QAEXPADPAVTexture@@@Z
 * func-address: 0x10124e50
 * callers: 0x10124f00
 * callees: 0x10127730
 */

void __thiscall ShaderManager::RegisterSharedTexture(ShaderManager *this, char *a2, struct Texture *a3)
{
  struct Texture *v4; // [esp+4h] [ebp-2Ch] BYREF
  _BYTE v5[28]; // [esp+8h] [ebp-28h] BYREF
  int v6; // [esp+2Ch] [ebp-4h]

  std::string::string(v5);
  v6 = 0;
  std::string::operator=(v5, a2);
  v4 = a3;
  sub_10127730((int)this + 100, &v4);
  v6 = -1;
  std::string::~string(v5);
}
