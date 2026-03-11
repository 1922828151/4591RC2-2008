/*
 * func-name: ?Attrib@XMLSystem@@QAEHPADAAVVector4@@PAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a4f0
 * callers: 0x1004abc0
 * callees: 0x1004a1f0
 */

int __thiscall XMLSystem::Attrib(XMLSystem *this, char *a2, struct Vector4 *a3, struct xercesc_2_5::DOMNode *a4)
{
  char Buffer[64]; // [esp+24h] [ebp-40h] BYREF

  sprintf(Buffer, "%f %f %f %f", *(float *)a3, *((float *)a3 + 1), *((float *)a3 + 2), *((float *)a3 + 3));
  return XMLSystem::Attrib(this, a2, Buffer, a4);
}
