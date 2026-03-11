/*
 * func-name: ?CreateTextNode@XMLSystem@@QAEPAVDOMElement@xercesc_2_5@@PAVDOMNode@3@PAD@Z
 * func-address: 0x1004a0f0
 * callers: 0x100431a0
 * callees: none
 */

struct xercesc_2_5::DOMElement *__thiscall XMLSystem::CreateTextNode(
        XMLSystem *this,
        struct xercesc_2_5::DOMNode *a2,
        char *a3)
{
  int v4; // esi

  a3 = (char *)xercesc_2_5::XMLString::transcode(a3);
  v4 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + 20) + 16))(*((_DWORD *)this + 20), a3);
  xercesc_2_5::XMLString::release((unsigned __int16 **)&a3);
  (*(void (__thiscall **)(struct xercesc_2_5::DOMNode *, int))(*(_DWORD *)a2 + 64))(a2, v4);
  return (struct xercesc_2_5::DOMElement *)v4;
}
