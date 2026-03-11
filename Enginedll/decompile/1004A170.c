/*
 * func-name: ?CreateNode@XMLSystem@@QAEPAVDOMElement@xercesc_2_5@@PAVDOMNode@3@PAD@Z
 * func-address: 0x1004a170
 * callers: 0x1003ea30, 0x1003ece0, 0x1003f520, 0x1003fa50, 0x1003fb30, 0x100405a0, 0x100431a0, 0x10043b90, 0x1004abc0, 0x100e2c10, 0x1014c730, 0x1014d460
 * callees: none
 */

struct xercesc_2_5::DOMElement *__thiscall XMLSystem::CreateNode(
        XMLSystem *this,
        struct xercesc_2_5::DOMNode *a2,
        char *a3)
{
  int v4; // esi

  a3 = (char *)xercesc_2_5::XMLString::transcode(a3);
  v4 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 20) + 8))(*((_DWORD *)this + 20), a3);
  xercesc_2_5::XMLString::release((unsigned __int16 **)&a3);
  (*(void (__thiscall **)(struct xercesc_2_5::DOMNode *, int))(*(_DWORD *)a2 + 64))(a2, v4);
  *((_DWORD *)this + 19) = v4;
  return (struct xercesc_2_5::DOMElement *)v4;
}
