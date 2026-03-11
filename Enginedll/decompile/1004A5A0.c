/*
 * func-name: ?GetWalker@XMLSystem@@QAEPAVDOMTreeWalker@xercesc_2_5@@XZ
 * func-address: 0x1004a5a0
 * callers: 0x10037000, 0x10037b30, 0x1003af90, 0x1003e810, 0x10043050, 0x100477a0, 0x10048730, 0x10095720, 0x10096e60, 0x100e6db0, 0x1010b030, 0x1010b240, 0x10149660, 0x1014c910, 0x1014d2f0, 0x1014d460, 0x1014d940, 0x1014da70, 0x1014dc70, 0x10159c30
 * callees: none
 */

struct xercesc_2_5::DOMTreeWalker *__thiscall XMLSystem::GetWalker(xercesc_2_5::AbstractDOMParser **this)
{
  struct DOMDocument *Document; // eax
  int v3; // ebx
  struct DOMDocument *v4; // eax

  Document = xercesc_2_5::AbstractDOMParser::getDocument(this[22]);
  v3 = (*(int (__thiscall **)(struct DOMDocument *))(*(_DWORD *)Document + 48))(Document);
  v4 = xercesc_2_5::AbstractDOMParser::getDocument(this[22]);
  return (struct xercesc_2_5::DOMTreeWalker *)(*(int (__thiscall **)(int, int, int, _DWORD, int))(*((_DWORD *)v4 + 2) + 8))(
                                                (int)v4 + 8,
                                                v3,
                                                0xFFFF,
                                                0,
                                                1);
}
