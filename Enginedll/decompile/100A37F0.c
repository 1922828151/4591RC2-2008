/*
 * func-name: ?HandleKeyboard@CRECheckBox@@UAE_NIIJ@Z
 * func-address: 0x100a37f0
 * callers: none
 * callees: none
 */

char __thiscall CRECheckBox::HandleKeyboard(CRECheckBox *this, unsigned int a2, unsigned int a3, int a4)
{
  void (__stdcall *v5)(bool, int); // eax
  bool v6; // dl

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  if ( a2 == 256 )
  {
    if ( a3 == 32 )
    {
      *((_BYTE *)this + 779) = 1;
      return 1;
    }
    return 0;
  }
  if ( a2 != 257 || a3 != 32 )
    return 0;
  if ( *((_BYTE *)this + 779) == 1 )
  {
    v5 = *(void (__stdcall **)(bool, int))(*(_DWORD *)this + 208);
    v6 = *((_BYTE *)this + 816) == 0;
    *((_BYTE *)this + 779) = 0;
    v5(v6, 1);
  }
  return 1;
}
