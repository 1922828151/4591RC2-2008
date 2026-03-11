/*
 * func-name: ?Attrib@XMLSystem@@QAEHPAD_NPAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a380
 * callers: 0x1003ea30, 0x1003f520, 0x1003fb30, 0x100405a0, 0x10043b90, 0x100e2c10, 0x1014d460
 * callees: 0x1004a1f0
 */

int __thiscall XMLSystem::Attrib(XMLSystem *this, char *a2, bool a3, struct xercesc_2_5::DOMNode *a4)
{
  const char *v5; // eax
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  v5 = "true";
  if ( !a3 )
    v5 = "false";
  sprintf(Buffer, "%s", v5);
  return XMLSystem::Attrib(this, a2, Buffer, a4);
}
