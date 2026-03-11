/*
 * func-name: ??1Texture@@QAE@XZ
 * func-address: 0x1000cb70
 * callers: 0x1000d0c0, 0x10015030, 0x1002a690, 0x1005ddc0, 0x1007c450, 0x1007d280, 0x1008b740, 0x1008f370, 0x1008f580, 0x1009d5a0, 0x1009d640, 0x100b50b0, 0x100cc650, 0x100dde50, 0x100de9e0, 0x100dead0, 0x100df590, 0x10109ff0, 0x1010bf60, 0x1010d330, 0x10117840, 0x10122bb0, 0x1012fc10, 0x1012ffd0, 0x1013df40, 0x10161a90, 0x1016c120, 0x1016c4c0
 * callees: 0x10136360, 0x101a2500
 */

void __thiscall Texture::~Texture(void **this)
{
  Texture::Destroy((Texture *)this);
  std::string::~string(this + 32);
  std::string::~string(this + 25);
  std::string::~string(this + 7);
  if ( this[1] )
    operator delete(this[1]);
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
