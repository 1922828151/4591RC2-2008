/*
 * func-name: ?OnMouseClick@CREControl@@UAEXXZ
 * func-address: 0x10069cd0
 * callers: none
 * callees: none
 */

void __thiscall CREControl::OnMouseClick(CREControl *this)
{
  if ( *((_DWORD *)this + 18) && *((_BYTE *)this + 156) )
  {
    if ( *((_BYTE *)this + 90) )
      (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 18) + 36))(0, *((float *)this + 40));
  }
}
