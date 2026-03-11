/*
 * func-name: ?HandleMouse@CControlBoxList@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x101522c0
 * callers: none
 * callees: none
 */

char __thiscall CControlBoxList::HandleMouse(CControlBoxList *this, unsigned int a2, POINT pt, unsigned int a4, int a5)
{
  unsigned int i; // edi
  int v8; // ecx
  _BYTE *v9; // ecx

  if ( !PtInRect((const RECT *)((char *)this + 164), pt) )
    return 0;
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)this + 134);
    if ( !v8 || i >= (*((_DWORD *)this + 135) - v8) >> 2 )
      break;
    v9 = *(_BYTE **)(*((_DWORD *)this + 134) + 4 * i);
    if ( v9[90]
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, unsigned int, LONG, LONG, unsigned int, int))(*(_DWORD *)v9 + 92))(
           v9,
           a2,
           pt.x,
           pt.y,
           a4,
           a5) )
    {
      return 1;
    }
  }
  return 0;
}
