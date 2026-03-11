/*
 * func-name: ?KeyArrowUp@GUIConsole@@AAEXXZ_0
 * func-address: 0x102b9c00
 * callers: 0x10019b69
 * callees: none
 */

void __thiscall GUIConsole::KeyArrowUp(GUIConsole *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax

  v2 = *((_DWORD *)this + 7);
  if ( v2 )
  {
    v3 = v2 - 1;
    *((_DWORD *)this + 7) = v2 - 1;
    v4 = *((_DWORD *)this + 33);
    if ( !v4 || v3 >= (*((_DWORD *)this + 34) - v4) / 28 )
      _invalid_parameter_noinfo();
    std::string::operator=((char *)this + 144, *((_DWORD *)this + 33) + 28 * v3);
    *((_DWORD *)this + 47) = std::string::length((char *)this + 144);
  }
}
