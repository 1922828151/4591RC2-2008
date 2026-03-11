/*
 * func-name: ?UpdateRenderSettings@ShaderManager@@QAEXXZ
 * func-address: 0x10121160
 * callers: 0x10121d10, 0x10121df0, 0x10125a30
 * callees: 0x101189f0, 0x101209d0, 0x10120ab0
 */

void __thiscall ShaderManager::UpdateRenderSettings(ShaderManager *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  char v4; // [esp-20h] [ebp-28h] BYREF
  int v5; // [esp-1Ch] [ebp-24h]
  int v6; // [esp-18h] [ebp-20h]
  int v7; // [esp-14h] [ebp-1Ch]
  int v8; // [esp-10h] [ebp-18h]
  int v9; // [esp-Ch] [ebp-14h]
  int v10; // [esp-8h] [ebp-10h]
  int v11; // [esp-4h] [ebp-Ch]
  char *v12; // [esp+4h] [ebp-4h]

  v2 = RenderDevice::Instance();
  v11 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v2 + 288))(v2);
  v12 = &v4;
  std::string::string(&v4, "texFilter");
  ShaderManager::SetSharedInt(this, v4, v5, v6, v7, v8, v9, v10, v11);
  v3 = RenderDevice::Instance();
  v11 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 284))(v3);
  v12 = &v4;
  std::string::string(&v4, "maxAnisotropy");
  ShaderManager::SetSharedInt(this, v4, v5, v6, v7, v8, v9, v10, v11);
  v11 = 0;
  v12 = &v4;
  std::string::string(&v4, "useSRGB");
  ShaderManager::SetSharedBool(this, v4, v5, v6, v7, v8, v9, v10, v11);
}
