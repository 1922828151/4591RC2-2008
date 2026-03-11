/*
 * func-name: ?Attrib@XMLSystem@@QAEHPADKPAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a300
 * callers: none
 * callees: 0x1004a1f0
 */

int __thiscall XMLSystem::Attrib(XMLSystem *this, char *a2, unsigned int a3, struct xercesc_2_5::DOMNode *a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d", a3);
  return XMLSystem::Attrib(this, a2, Buffer, a4);
}
