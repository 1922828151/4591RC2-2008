/*
 * func-name: ?SetPlaySound@CProgressBar@@QAEX_N@Z
 * func-address: 0x10157970
 * callers: none
 * callees: none
 */

void __thiscall CProgressBar::SetPlaySound(CProgressBar *this, bool a2)
{
  if ( *((_DWORD *)this + 183) )
  {
    if ( a2 )
      (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 183) + 36))(1, *((float *)this + 184));
    else
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 183) + 44))(*((_DWORD *)this + 183));
  }
}
