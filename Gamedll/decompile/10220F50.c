/*
 * func-name: sub_10220F50
 * func-address: 0x10220f50
 * callers: 0x1001a4d8
 * callees: 0x1000adee, 0x1000fa65
 */

int __thiscall sub_10220F50(int this, int a2)
{
  std::string::operator=(this, a2);
  std::string::operator=(this + 28, a2 + 28);
  *(_BYTE *)(this + 56) = *(_BYTE *)(a2 + 56);
  *(_BYTE *)(this + 57) = *(_BYTE *)(a2 + 57);
  *(_BYTE *)(this + 58) = *(_BYTE *)(a2 + 58);
  *(_BYTE *)(this + 59) = *(_BYTE *)(a2 + 59);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  std::string::operator=(this + 80, a2 + 80);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  sub_1000ADEE(a2 + 120);
  if ( this + 136 != a2 + 136 )
    sub_1000FA65(a2 + 136);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  return this;
}
