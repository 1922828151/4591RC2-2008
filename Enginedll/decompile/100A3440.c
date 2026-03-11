/*
 * func-name: ?HandleKeyboard@CREButton@@UAE_NIIJ@Z
 * func-address: 0x100a3440
 * callers: none
 * callees: none
 */

char __thiscall CREButton::HandleKeyboard(CREButton *this, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // eax
  void (__stdcall *v6)(int, int, _DWORD, CREButton *, _DWORD, _DWORD); // edx

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
    v5 = *((_DWORD *)this + 28);
    *((_BYTE *)this + 779) = 0;
    v6 = *(void (__stdcall **)(int, int, _DWORD, CREButton *, _DWORD, _DWORD))(v5 + 736);
    if ( v6 )
      v6(v5, 257, *((_DWORD *)this + 34), this, 0, 0);
  }
  return 1;
}
