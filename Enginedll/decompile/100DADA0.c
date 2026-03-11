/*
 * func-name: ?MsgProc@Input@@QAEXPAUHWND__@@IIJ@Z
 * func-address: 0x100dada0
 * callers: 0x10095bf0
 * callees: none
 */

void __thiscall Input::MsgProc(Input *this, HWND a2, unsigned int a3, unsigned int C, int a5)
{
  void (__stdcall *v6)(int); // eax

  switch ( a3 )
  {
    case 6u:
      v6 = *(void (__stdcall **)(int))(*(_DWORD *)this + 76);
      if ( C )
        v6(1);
      else
        v6(0);
      break;
    case 0x100u:
      if ( !isprint(C) )
        std::string::operator+=((char *)this + 84, C);
      break;
    case 0x102u:
      std::string::operator+=((char *)this + 56, C);
      break;
  }
}
