/*
 * func-name: ??0Material@@QAE@XZ
 * func-address: 0x100e42b0
 * callers: 0x10042bf0, 0x10055500, 0x1010bad0, 0x1010c090
 * callees: 0x10012aa0, 0x100e3ef0, 0x101a2534
 */

Material *__thiscall Material::Material(Material *this)
{
  _DWORD *v2; // eax
  struct MaterialManager *v3; // eax
  int v5[2]; // [esp+8h] [ebp-14h] BYREF
  int v6; // [esp+18h] [ebp-4h]

  v5[1] = (int)this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v6 = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  std::string::string((char *)this + 56);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  std::string::string((char *)this + 116);
  std::string::string((char *)this + 156);
  std::string::string((char *)this + 184);
  std::string::string((char *)this + 220);
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  std::string::string((char *)this + 292);
  *((float *)this + 83) = 0.67000002;
  LOBYTE(v6) = 10;
  *((float *)this + 84) = 0.22;
  v2 = operator new(8u);
  if ( v2 )
  {
    *v2 = &AsyncMatTexture::`vftable';
    v2[1] = this;
  }
  else
  {
    v2 = 0;
  }
  *((_DWORD *)this + 9) = v2;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 80) = 1;
  v5[0] = (int)this;
  v3 = MaterialManager::Instance();
  std::vector<Material *>::push_back((_DWORD *)v3 + 1, v5);
  *((_BYTE *)this + 264) = 0;
  *((_BYTE *)this + 16) = 0;
  *((_BYTE *)this + 144) = 1;
  return this;
}
