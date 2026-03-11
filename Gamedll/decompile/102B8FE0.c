/*
 * func-name: ?KeyBackspace@GUIConsole@@AAEXXZ_0
 * func-address: 0x102b8fe0
 * callers: 0x1000b50f
 * callees: none
 */

void __thiscall GUIConsole::KeyBackspace(GUIConsole *this)
{
  char *v2; // edi
  int v3; // eax

  v2 = (char *)this + 144;
  if ( !(unsigned __int8)std::operator==<char>((char *)this + 144, &unk_103252A9) )
  {
    v3 = *((_DWORD *)this + 47);
    if ( v3 )
    {
      std::string::erase(v2, v3 - 1, 1);
      --*((_DWORD *)this + 47);
    }
  }
}
