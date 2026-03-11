/*
 * func-name: ?HandleMouse@CRENumericEdit@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100a6cd0
 * callers: none
 * callees: 0x100a3100
 */

bool __thiscall CRENumericEdit::HandleMouse(CRENumericEdit *this, unsigned int a2, POINT pt, unsigned int a4, int a5)
{
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 190) + 128))(
    *((_DWORD *)this + 190),
    *((unsigned __int8 *)this + 156));
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 191) + 128))(
    *((_DWORD *)this + 191),
    *((unsigned __int8 *)this + 156));
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 192) + 128))(
    *((_DWORD *)this + 192),
    *((unsigned __int8 *)this + 156));
  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  if ( !(*(int (__thiscall **)(CRENumericEdit *, LONG, LONG))(*(_DWORD *)this + 124))(this, pt.x, pt.y) )
    return 0;
  if ( !PtInRect((const RECT *)((char *)this + 744), pt) )
    return (*(unsigned __int8 (__thiscall **)(_DWORD, unsigned int, LONG, LONG, unsigned int, int))(**((_DWORD **)this + 191)
                                                                                                  + 92))(
             *((_DWORD *)this + 191),
             a2,
             pt.x,
             pt.y,
             a4,
             a5)
        && (!*((_BYTE *)this + 732) || *((_BYTE *)this + 91))
        || (*(unsigned __int8 (__thiscall **)(_DWORD, unsigned int, LONG, LONG, unsigned int, int))(**((_DWORD **)this + 192)
                                                                                                  + 92))(
             *((_DWORD *)this + 192),
             a2,
             pt.x,
             pt.y,
             a4,
             a5)
        && (!*((_BYTE *)this + 732) || *((_BYTE *)this + 91))
        || (*(unsigned __int8 (__thiscall **)(_DWORD, unsigned int, LONG, LONG, unsigned int, int))(**((_DWORD **)this + 190)
                                                                                                  + 92))(
             *((_DWORD *)this + 190),
             a2,
             pt.x,
             pt.y,
             a4,
             a5) != 0;
  if ( a2 == 513 )
    CREDialog::ClearFocus();
  return 1;
}
