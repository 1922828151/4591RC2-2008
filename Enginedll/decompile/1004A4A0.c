/*
 * func-name: ?Attrib@XMLSystem@@QAEHPADAAVVector@@PAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a4a0
 * callers: 0x1003ece0, 0x1003f520, 0x1003fb30, 0x100431a0, 0x10043b90, 0x1004abc0
 * callees: 0x1004a1f0
 */

int __thiscall XMLSystem::Attrib(XMLSystem *this, char *a2, struct Vector *a3, struct xercesc_2_5::DOMNode *a4)
{
  char Buffer[64]; // [esp+1Ch] [ebp-40h] BYREF

  sprintf(Buffer, "%f %f %f", *(float *)a3, *((float *)a3 + 1), *((float *)a3 + 2));
  return XMLSystem::Attrib(this, a2, Buffer, a4);
}
