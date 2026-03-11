/*
 * func-name: ?Attrib@XMLSystem@@QAEHPADMPAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a460
 * callers: 0x1003ea30, 0x1003ece0, 0x1003f520, 0x1003fb30, 0x100431a0, 0x1004abc0, 0x100e2c10
 * callees: 0x1004a1f0
 */

int __thiscall XMLSystem::Attrib(XMLSystem *this, char *a2, float a3, struct xercesc_2_5::DOMNode *a4)
{
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF

  sprintf(Buffer, "%f", a3);
  return XMLSystem::Attrib(this, a2, Buffer, a4);
}
