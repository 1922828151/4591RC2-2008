/*
 * func-name: ?SetMaskKeyboard@Input@@QAEXW4InputMaskState@@@Z
 * func-address: 0x100db480
 * callers: none
 * callees: none
 */

unsigned int __thiscall Input::SetMaskKeyboard(_DWORD *this, int a2)
{
  unsigned int result; // eax
  _DWORD *v3; // ecx

  this[1455] = a2;
  result = 0;
  v3 = this + 430;
  do
  {
    if ( result != 400 && result != 401 && result != 402 && result != 403 && result != 600 && result != 601 )
      *v3 = a2;
    ++result;
    ++v3;
  }
  while ( result < 0x400 );
  return result;
}
