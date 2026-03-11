/*
 * func-name: ?Attrib@XMLSystem@@QAEHPADU_SYSTEMTIME@@PAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004a3d0
 * callers: 0x100431a0
 * callees: 0x1004a1f0
 */

int __thiscall XMLSystem::Attrib(XMLSystem *this, char *a2, struct _SYSTEMTIME a3, struct xercesc_2_5::DOMNode *a4)
{
  char Buffer[128]; // [esp+4h] [ebp-80h] BYREF

  sprintf(
    Buffer,
    "%d %d %d %d %d %d %d %d",
    a3.wYear,
    HIWORD(*(_DWORD *)&a3.wYear),
    a3.wDayOfWeek,
    HIWORD(*(_DWORD *)&a3.wDayOfWeek),
    a3.wHour,
    HIWORD(*(_DWORD *)&a3.wHour),
    a3.wSecond,
    HIWORD(*(_DWORD *)&a3.wSecond));
  return XMLSystem::Attrib(this, a2, Buffer, a4);
}
