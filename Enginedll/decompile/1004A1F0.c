/*
 * func-name: ?Attrib@XMLSystem@@QAEHPADPBDPAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a1f0
 * callers: 0x1003ece0, 0x1003fa50, 0x100431a0, 0x10043b90, 0x1004a290, 0x1004a300, 0x1004a340, 0x1004a380, 0x1004a3d0, 0x1004a460, 0x1004a4a0, 0x1004a4f0, 0x1004a550, 0x1004abc0, 0x10149780, 0x10149850, 0x1014c730, 0x1014d460
 * callees: none
 */

int __thiscall XMLSystem::Attrib(XMLSystem *this, char *a2, const char *a3, struct xercesc_2_5::DOMNode *a4)
{
  struct xercesc_2_5::DOMNode *v4; // esi

  v4 = a4;
  if ( !a4 )
    v4 = (struct xercesc_2_5::DOMNode *)*((_DWORD *)this + 19);
  a4 = (struct xercesc_2_5::DOMNode *)xercesc_2_5::XMLString::transcode(a3);
  a3 = (const char *)xercesc_2_5::XMLString::transcode(a2);
  (*(void (__thiscall **)(struct xercesc_2_5::DOMNode *, const char *, struct xercesc_2_5::DOMNode *))(*(_DWORD *)v4 + 172))(
    v4,
    a3,
    a4);
  xercesc_2_5::XMLString::release((unsigned __int16 **)&a3);
  xercesc_2_5::XMLString::release((unsigned __int16 **)&a4);
  return 1;
}
