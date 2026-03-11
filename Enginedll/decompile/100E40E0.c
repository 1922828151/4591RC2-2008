/*
 * func-name: ??0Material@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100e40e0
 * callers: 0x10003a50, 0x1003a4c0, 0x1003d0f0, 0x10040990, 0x100e7390, 0x10106ce0, 0x1012ffd0
 * callees: 0x10012aa0, 0x100e3020, 0x100e3ef0, 0x101a2534
 */

int __thiscall Material::Material(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v9; // eax
  struct MaterialManager *v10; // eax
  int Type; // eax
  struct MaterialManager *v12; // eax
  char v14; // [esp-1Ch] [ebp-5Ch] BYREF
  int v15; // [esp-18h] [ebp-58h]
  int v16; // [esp-14h] [ebp-54h]
  int v17; // [esp-10h] [ebp-50h]
  int v18; // [esp-Ch] [ebp-4Ch]
  int v19; // [esp-8h] [ebp-48h]
  int v20; // [esp-4h] [ebp-44h]
  int v21[2]; // [esp+10h] [ebp-30h] BYREF
  _BYTE v22[28]; // [esp+18h] [ebp-28h] BYREF
  int v23; // [esp+3Ch] [ebp-4h]

  v21[1] = this;
  v23 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  std::string::string(this + 56);
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 108) = 0;
  *(_DWORD *)(this + 112) = 0;
  std::string::string(this + 116);
  std::string::string(this + 156);
  std::string::string(this + 184);
  std::string::string(this + 220);
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 288) = 0;
  std::string::string(this + 292);
  *(float *)(this + 332) = 0.67000002;
  v20 = 8;
  LOBYTE(v23) = 11;
  *(float *)(this + 336) = 0.22;
  v9 = operator new(v20);
  if ( v9 )
  {
    *v9 = &AsyncMatTexture::`vftable';
    v9[1] = this;
  }
  else
  {
    v9 = 0;
  }
  *(_DWORD *)(this + 36) = v9;
  std::string::operator=(this + 184, &a2);
  v21[0] = (int)&v14;
  *(_DWORD *)(this + 152) = 0;
  *(_DWORD *)(this + 272) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 320) = 1;
  std::string::string(&v14, &a2);
  LOBYTE(v23) = 12;
  v10 = MaterialManager::Instance();
  LOBYTE(v23) = 11;
  Type = MaterialManager::GetType(v10, (int)v22, v14, v15, v16, v17, v18, v19, v20);
  LOBYTE(v23) = 13;
  std::string::operator=(this + 220, Type);
  LOBYTE(v23) = 11;
  std::string::~string(v22);
  v20 = (int)v21;
  v21[0] = this;
  v12 = MaterialManager::Instance();
  std::vector<Material *>::push_back((_DWORD *)v12 + 1, (int *)v20);
  *(_BYTE *)(this + 264) = 0;
  *(_BYTE *)(this + 144) = 1;
  *(_BYTE *)(this + 16) = 0;
  v23 = -1;
  std::string::~string(&a2);
  return this;
}
