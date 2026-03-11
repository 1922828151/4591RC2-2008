/*
 * func-name: ??0TextureManager@@QAE@ABV0@@Z
 * func-address: 0x100992a0
 * callers: none
 * callees: none
 */

TextureManager *__thiscall TextureManager::TextureManager(TextureManager *this, const struct TextureManager *a2)
{
  *(_DWORD *)this = &TextureManager::`vftable';
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  std::string::string((char *)this + 12, (char *)a2 + 12);
  *((_BYTE *)this + 40) = *((_BYTE *)a2 + 40);
  *((float *)this + 11) = *((float *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  return this;
}
