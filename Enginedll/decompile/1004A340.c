/*
 * func-name: ?Attrib@XMLSystem@@QAEHPADHPAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a340
 * callers: 0x1003ea30, 0x1003f520, 0x1003fb30, 0x10043b90, 0x100e2c10, 0x10149780, 0x1014d460
 * callees: 0x1004a1f0
 */

int __thiscall XMLSystem::Attrib(XMLSystem *this, char *a2, int a3, struct xercesc_2_5::DOMNode *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d", a3);
  return XMLSystem::Attrib(this, a2, Buffer, a4);
}
