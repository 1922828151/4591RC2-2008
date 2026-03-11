/*
 * func-name: sub_10211A40
 * func-address: 0x10211a40
 * callers: 0x1000e674
 * callees: 0x10015a2d, 0x1001784b, 0x102c9d50
 */

void __thiscall sub_10211A40(_DWORD *this)
{
  _DWORD *v2; // esi

  *this = &GameClient::DESC_WORLD::`vftable';
  v2 = this + 9;
  sub_1001784B();
  if ( v2[5] )
    operator delete((void *)v2[5]);
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  sub_10015A2D();
  std::string::~string(this + 2);
}
