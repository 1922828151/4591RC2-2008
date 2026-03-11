/*
 * func-name: ??0Texture@@QAE@XZ
 * func-address: 0x10136290
 * callers: 0x10003a50, 0x10006780, 0x1003a4c0, 0x10040990, 0x10042bf0, 0x1007c450, 0x1007d280, 0x1008b740, 0x1008f370, 0x1009d640, 0x1009d850, 0x1009d890, 0x100a67a0, 0x100de9e0, 0x100dead0, 0x100df590, 0x100e1440, 0x100e4db0, 0x100e6db0, 0x100e7390, 0x1010b910, 0x1010bf60, 0x10117840, 0x10127f50, 0x1012ffd0, 0x1013a9b0, 0x10162f00, 0x1016c260, 0x1016c4c0
 * callees: none
 */

Texture *__thiscall Texture::Texture(Texture *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  std::string::string((char *)this + 28);
  std::string::string((char *)this + 100);
  std::string::string((char *)this + 128);
  *((float *)this + 4) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 16) = 0.0;
  *((_BYTE *)this + 56) = 0;
  *((float *)this + 17) = 1.0;
  *((_BYTE *)this + 57) = 0;
  *((float *)this + 18) = 1.0;
  *((_BYTE *)this + 22) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((float *)this + 19) = 0.0;
  *((_DWORD *)this + 6) = -1;
  std::string::operator=((char *)this + 100, "UNLOADED");
  std::string::operator=((char *)this + 128, "UNLOADED");
  *((_BYTE *)this + 21) = 0;
  *((_BYTE *)this + 58) = 1;
  return this;
}
