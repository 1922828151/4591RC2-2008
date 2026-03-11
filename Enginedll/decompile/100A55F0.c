/*
 * func-name: ??ACUniBuffer@CREEditBox@@QAEAA_WH@Z
 * func-address: 0x100a55f0
 * callers: none
 * callees: none
 */

int __thiscall CREEditBox::CUniBuffer::operator[](_BYTE *this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)this;
  this[16] = 1;
  return v2 + 2 * a2;
}
