/*
 * func-name: ?SetID@Texture@@AAEXH@Z
 * func-address: 0x101364b0
 * callers: 0x10136530
 * callees: 0x1005b1f0, 0x1017a610
 */

void __thiscall Texture::SetID(Texture *this, int a2)
{
  _BYTE v3[28]; // [esp+4h] [ebp-28h] BYREF
  int v4; // [esp+28h] [ebp-4h]

  std::string::string(v3, (char *)this + 100);
  v4 = 0;
  sub_1017A610(v3);
  sub_1005B1F0(this, &a2);
  *((_DWORD *)this + 6) = 0;
  v4 = -1;
  std::string::~string(v3);
}
