/*
 * func-name: ??0Texture@@QAE@ABV0@@Z
 * func-address: 0x1000f130
 * callers: 0x100100e0, 0x10015030, 0x1002a690, 0x1005ddc0
 * callees: 0x1000d900
 */

Texture *__thiscall Texture::Texture(Texture *this, const struct Texture *a2)
{
  sub_1000D900(this, (int)a2);
  *((float *)this + 4) = *((float *)a2 + 4);
  *((_BYTE *)this + 20) = *((_BYTE *)a2 + 20);
  *((_BYTE *)this + 21) = *((_BYTE *)a2 + 21);
  *((_BYTE *)this + 22) = *((_BYTE *)a2 + 22);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  std::string::string((char *)this + 28, (char *)a2 + 28);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)this + 58) = *((_BYTE *)a2 + 58);
  *((float *)this + 15) = *((float *)a2 + 15);
  *((float *)this + 16) = *((float *)a2 + 16);
  *((float *)this + 17) = *((float *)a2 + 17);
  *((float *)this + 18) = *((float *)a2 + 18);
  *((float *)this + 19) = *((float *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  std::string::string((char *)this + 100, (char *)a2 + 100);
  std::string::string((char *)this + 128, (char *)a2 + 128);
  return this;
}
