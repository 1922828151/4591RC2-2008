/*
 * func-name: ?UnLoad@World@@QAEXXZ
 * func-address: 0x1013e1c0
 * callers: 0x1013e2e0
 * callees: 0x1001c290, 0x100e3ef0, 0x100e6830, 0x10106b20, 0x10106b80, 0x10122da0, 0x10137000, 0x1013db50
 */

void __thiscall World::UnLoad(World *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  char *v4; // ebx
  char *v5; // edi
  int v6; // eax
  char *v7; // ebp
  struct ShaderManager *v8; // eax
  struct ShaderManager *v9; // eax
  PostProcess *v10; // eax
  struct ShaderManager *v11; // eax
  struct ShaderManager *v12; // eax
  struct ShaderManager *v13; // eax
  MaterialManager *v14; // eax

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 178);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 179) - v3) >> 2 )
      break;
    Material::Release(*(Material **)(*((_DWORD *)this + 178) + 4 * i));
  }
  v4 = (char *)*((_DWORD *)this + 179);
  if ( v3 > (unsigned int)v4 )
    invalid_parameter_noinfo();
  v5 = (char *)*((_DWORD *)this + 178);
  if ( (unsigned int)v5 > *((_DWORD *)this + 179) )
    invalid_parameter_noinfo();
  if ( v5 != v4 )
  {
    v6 = (*((_DWORD *)this + 179) - (int)v4) >> 2;
    v7 = &v5[4 * v6];
    if ( v6 > 0 )
      memmove_s(v5, 4 * v6, v4, 4 * v6);
    *((_DWORD *)this + 179) = v7;
  }
  *((_BYTE *)TextureManager::Instance() + 40) = 1;
  v8 = ShaderManager::Instance();
  (*(void (__thiscall **)(struct ShaderManager *))(*(_DWORD *)v8 + 8))(v8);
  v9 = ShaderManager::Instance();
  (*(void (__thiscall **)(struct ShaderManager *))(*(_DWORD *)v9 + 12))(v9);
  World::UnLoadWorld(this);
  v10 = PostProcess::Instance();
  PostProcess::RemoveAllEffects(v10);
  v11 = ShaderManager::Instance();
  (*(void (__thiscall **)(struct ShaderManager *))(*(_DWORD *)v11 + 8))(v11);
  v12 = ShaderManager::Instance();
  (*(void (__thiscall **)(struct ShaderManager *))(*(_DWORD *)v12 + 12))(v12);
  v13 = ShaderManager::Instance();
  (*(void (__thiscall **)(struct ShaderManager *))(*(_DWORD *)v13 + 16))(v13);
  v14 = MaterialManager::Instance();
  MaterialManager::RefreshMaterialsSimple(v14);
  *((_BYTE *)TextureManager::Instance() + 40) = 0;
}
