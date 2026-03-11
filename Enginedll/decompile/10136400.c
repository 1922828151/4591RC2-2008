/*
 * func-name: ?CreateBlank@Texture@@QAEXW4TextureType@@HHHH@Z
 * func-address: 0x10136400
 * callers: 0x1009d040, 0x1009d150, 0x1009d640, 0x100e1440
 * callees: 0x1005b1f0, 0x100971c0, 0x100e2550, 0x10137000
 */

int __thiscall Texture::CreateBlank(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  struct TextureManager *v11; // eax
  int v12; // ecx
  int result; // eax

  v6 = a2;
  if ( !a2 )
    v6 = 1;
  Engine::Instance();
  LogPrintf("Creating blank texture");
  std::string::operator=(this + 25, &unk_101CB05D);
  std::string::operator=(this + 32, &unk_101CB05E);
  v8 = a4;
  v9 = a5;
  this[23] = a3;
  v10 = a6;
  this[24] = v6;
  this[20] = v8;
  this[21] = v9;
  this[22] = v10;
  v11 = TextureManager::Instance();
  a2 = (*(int (__thiscall **)(struct TextureManager *, _DWORD *))(*(_DWORD *)v11 + 12))(v11, this);
  sub_1005B1F0(this, &a2);
  v12 = this[1];
  if ( v12 )
  {
    result = ((this[2] - v12) >> 2) - 1;
    this[6] = result;
  }
  else
  {
    result = -1;
    this[6] = -1;
  }
  return result;
}
